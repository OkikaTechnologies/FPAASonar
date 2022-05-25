#Initialize Libraries
import ctypes
from guizero import App, Window, Drawing, Text, TextBox, Picture, Box, MenuBar
import RPi.GPIO as GPIO
import time
import spidev
import pigpio   #needed to enable outputting the 16MHz ACLK for FPAA.
                #you need to run "sudo pigpiod" before running the script


#setup Pi's GPIO
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)     
TRIG = 23                                  #Associate GPIO 23 to TRIG (pin 16 on connector)
ECHO = 24                                  #Associate pin 24 to ECHO (pin 18)
GPIO.setup(TRIG,GPIO.OUT)                  #Set pin as GPIO out
GPIO.setup(ECHO,GPIO.IN)                   #Set pin as GPIO in



#Setup the SPI port
spi=spidev.SpiDev()
spi.open(0,0)
spi.mode=0b00
spi.lsbfirst=False
spi.bits_per_word = 8
#spi.max_speed_hz=15600000 #15.6MHz #uncomment for 15.6MHz SPI clock
spi.max_speed_hz=32000000 #15.6MHz #uncomment for 15.6MHz SPI clock



#setup the FPAA's ACLK to be sourced from the Pi
pi1 = pigpio.pi()
pi1.hardware_clock(4, 16000000) #you need to run linux "sudo pigpiod" before running the script

#Read in the Okika dynamic config shared library
api = ctypes.CDLL("./ApiLib.so")

#read in timtest.so to support near-real-time control
rtc = ctypes.CDLL("./rtc.so")
rtc.setup()

#define default FPAA analog module settings

#ultrasound Specifications
default_ultrasound_freq = 40.0
default_FB_Cuttoff = 55.0
US_Pulse_Width = 50 

speedofsound = 17150*2 #cm/sec

chip = 0x00 #FPAA chip virtual address

#input lna gain (.01~100)
def_RX_LNA_gain = "5.0"

#filters
def_Rx_filterFB_freq = default_ultrasound_freq+15
def_Rx_filterFB_gain = "5.0"
def_Rx_filterFB_qual = "0.707"

def_Rx_filter0_freq = default_ultrasound_freq
def_Rx_filter0_gain = "25.0"
def_Rx_filter0_qual = "0.707"

def_Rx_filter1_freq = default_ultrasound_freq
def_Rx_filter1_gain = "25.0"
def_Rx_filter1_qual = "0.707"

#default detector (slicer) level in volts
def_Rx_Slicer_Comp = "1.72"



#get primary configuration data from Okika's ApiCode into a local buffer for faster writes
primary_count = ctypes.c_int(0)
primary_data=api.an_GetPrimaryConfigData(chip,ctypes.byref(primary_count))
primary_config_data = ctypes.string_at(primary_data,primary_count)
primary_config_list=[]
for byte in primary_config_data:
    primary_config_list.append(byte)
for loop in range(5):
    primary_config_list.insert(0,0)
primary_config_list.append(0)


#get soft reset command data from Okika's ApiCode into a local buffer for faster writes
reset_count = ctypes.c_int(0)
reset_data = api.an_GetResetData(ctypes.c_ubyte(chip), ctypes.byref(reset_count)) #get the soft reset command from the API
reset_config_data = ctypes.string_at(reset_data,reset_count)
reset_config_list=[]
for byte in reset_config_data:
    reset_config_list.append(byte)
for loop in range(5):
    reset_config_list.insert(0,0)
reset_config_list.append(0)
print('reset config',reset_config_list)

###################################################################################
#setup the state transition command data
#there are currently 5 states, each corresponding to an ultrasound channel number.

nStates = 5
States = []
State_reconfig_list0 = []
for State_count in range(nStates):
    reconfig_count0 = ctypes.c_int(0)
    reconfig_data0=api.an_GetStateTransitionData(State_count,ctypes.byref(reconfig_count0)) #get the reconfig data from the Okika API
    config_data0 = ctypes.string_at(reconfig_data0,reconfig_count0)
    State_reconfig_list0=[]
    for byte in config_data0:
        State_reconfig_list0.append(byte)
    for loop in range(5):
        State_reconfig_list0.insert(0,0) 
    State_reconfig_list0.append(0)
    States.append(State_reconfig_list0)   


###################################################################################


###################################################################################
#load_config function gets reset, primary, or reconfig command data from the Okika api and writes it to the chip
def load_config(chip,config_type):
    if config_type == "primary":
        response=spi.xfer2(list(primary_config_list)) #get the primary cinfiguration from the Okika api

    elif config_type == "reconfig":
        reconfig_count = ctypes.c_int(0)
        reconfig_data=api.an_GetApexReconfigData(chip,ctypes.byref(reconfig_count)) #get the reconfig data from the Okika API
        config_data = ctypes.string_at(reconfig_data,reconfig_count)
        reconfig_list=[]
        for byte in config_data:
            reconfig_list.append(byte)
        for x in range(5):
            reconfig_list.insert(0,0)
        reconfig_list.append(0)
        response=spi.xfer2(list(reconfig_list))
        api.an_ClearApexReconfigData(chip)
        api.an_ShutdownApexReconfigData(chip)

    elif config_type == "reset":
        response=spi.xfer2(list(reset_config_list))
  

#define virtual CAM address mapping
#get this mapping from Okika's Dynamx Design Lab software's ApiCode.h

an_FPAA1_F0                  =  0x00        
an_FPAA1_F1                  =  0x01
Rx_FB_addr                   =  0x02
an_FPAA1_RxLNA               =  0x03     
an_FPAA1_LUT                 =  0x04 
an_FPAA1_SlLvl               =  0x05        
an_FPAA1_Slicer              =  0x06       
an_FPAA1_TrigComp            =  0x07        
   


def update_config(key): #gets the reconfiguration values in the Okika parameter text box values (see the guizero definitions below(
    if key==True:
        key=False
        api.an_InitializeApexReconfigData(ctypes.c_ubyte(chip))

        new_LNA_gain=LNA_gain.value
        api.an_setGainInv(an_FPAA1_RxLNA,  ctypes.c_double(float(new_LNA_gain)))
                            
        new_rx_f0_freq=freq0.value
        new_rx_f0_gain=rx_f0_gain.value
        new_rx_f0_q = .707
        api.an_SetBQBandPassFilterI(an_FPAA1_F0 , ctypes.c_double(float(new_rx_f0_freq)), ctypes.c_double(float(new_rx_f0_gain)),ctypes.c_double(float(.707))) 

        
        new_rx_f1_freq=freq1.value
        new_rx_f1_gain=rx_f1_gain.value
        new_rx_f1_q = .707
        api.an_SetBQBandPassFilterI(an_FPAA1_F1 , ctypes.c_double(float(new_rx_f1_freq)), ctypes.c_double(float(new_rx_f1_gain)),ctypes.c_double(float(.707))) 

        new_rx_FB_freq=freqFB.value
        new_rx_FB_gain=rx_FB_gain.value
        api.an_setFilterLowPass(Rx_FB_addr , ctypes.c_double(float(new_rx_FB_freq)), ctypes.c_double(float(new_rx_FB_gain)))

        new_rx_slicer_V=slicer_voltage.value
        api.an_setGainInv(an_FPAA1_SlLvl,  ctypes.c_double(float(new_rx_slicer_V))) 

        load_config(chip,"reconfig")  #load the new values into the chip as a reconfiguration

###################################################################################

###################################################################################


#setup main menu methods for the GUI.  These currently do nothing.

def file_load():
    file_name = app.select_file()
    print("load ",file_name)
    
def file_save():
    print("save")
    
def menu_about():
    print("about")
  
  
  
#Create GUI app using guizero
app = App(title="Okika FPAA Multi-Channel Ultrasonic Scanner Example", width=800, height=700,layout="grid")
app.bg = "white"
app.file_name=""

#the menubar currently does nothing
menubar =  MenuBar(app,
                   toplevel=["File", "About"],
                   options=[
                       [ ["Load", file_load], ["Save" , file_save ] ],
                       [ ["About", menu_about]]
                    ])

#Setup dialog boxes for the main signal path components (2 amplifiers, 3 filters, 2 comparators, 1 waveform generator)
box = Box(app, layout="grid", grid=[0,1])
LNA_box=Box(box, layout="grid", grid=[0,0],border="1",align="top")
rx_filterFB_box=Box(box, layout="grid", grid=[0,1],border="1",align="top")
rx_filter0_box=Box(box, layout="grid", grid=[0,2],border="1",align="top")
rx_filter1_box=Box(box, layout="grid", grid=[0,3],border="1",align="top")
rx_slicer_box=Box(box,layout="grid", grid=[0,4],border="1",align="top")

LNA_text = Text(LNA_box,width=25, text="Rx VGA Settings",color="green",grid=[0,0],align="right")
LNA_gain_in = Text(LNA_box,width=35, size=8 ,text="Gain, A (0.01~100)", grid=[0,2],align="right")
LNA_gain = TextBox(LNA_box,width=9, grid=[1,2],align="right",text=def_RX_LNA_gain)

rxf0_text = Text(rx_filter0_box,width=25, text="Rx Filter BP1 Settings",color="green",grid=[0,0],align="right")
freq_in = Text(rx_filter0_box,width=35, size=8, text="Pasband Frequency, KHz (8~56.6)", grid=[0,1],align="right")
freq0 = TextBox(rx_filter0_box,width=9, grid=[1,1],align="right",text=default_ultrasound_freq)
rx_f0_gain_in = Text(rx_filter0_box,width=35, size=8 ,text="Gain, A (0.01~20)", grid=[0,2],align="right")
rx_f0_gain = TextBox(rx_filter0_box,width=9, grid=[1,2],align="right",text=def_Rx_filter0_gain)
rx_f0_qual_in = Text(rx_filter0_box,width=35, size=8 ,text="Quality (.125 to 4.69)", grid=[0,3],align="right")
rx_f0_qual = TextBox(rx_filter0_box,width=9, grid=[1,3],align="right",text=def_Rx_filter0_qual)

rxf1_text = Text(rx_filter1_box,width=25, text="Rx Filter BP2 Settings",color="green",grid=[0,0],align="right")
freq_in = Text(rx_filter1_box,width=35, size=8, text="Pasband Frequency, KHz (8~56.6)", grid=[0,1],align="right")
freq1 = TextBox(rx_filter1_box,width=9, grid=[1,1],align="right",text=default_ultrasound_freq)
rx_f1_gain_in = Text(rx_filter1_box,width=35, size=8 ,text="Gain, A (0.01~20)", grid=[0,2],align="right")
rx_f1_gain = TextBox(rx_filter1_box,width=9, grid=[1,2],align="right",text=def_Rx_filter1_gain)
rx_f1_qual_in = Text(rx_filter1_box,width=35, size=8 ,text="Quality (.125 to 4.69)", grid=[0,3],align="right")
rx_f1_qual = TextBox(rx_filter1_box,width=9, grid=[1,3],align="right",text=def_Rx_filter1_qual)

rxFB_text = Text(rx_filterFB_box,width=25, text="Rx Filter LP Settings",color="green",grid=[0,0],align="right")
freq_in = Text(rx_filterFB_box,width=35, size=8, text="Cutoff Frequency, KHz (32~226)", grid=[0,1],align="right")
freqFB = TextBox(rx_filterFB_box,width=9, grid=[1,1],align="right",text=default_FB_Cuttoff)
rx_FB_gain_in = Text(rx_filterFB_box,width=35, size=8, text="Gain, A (0.01~20)", grid=[0,2],align="right")
rx_FB_gain = TextBox(rx_filterFB_box,width=9, grid=[1,2],align="right",text=def_Rx_filterFB_gain)

rxslicer_text = Text(rx_slicer_box,width=25, text="Rx Slicer Settings",color="green",grid=[0,0],align="right")
slicer_in = Text(rx_slicer_box,width=25,size=8, text="Slicer Voltage, V (0.01~3.0)", grid=[0,1],align="right")
slicer_voltage = TextBox(rx_slicer_box,width=9, grid=[1,1],align="right",text=def_Rx_Slicer_Comp)

#my_okt_circuit = Picture(app, image="schematic.JPG",grid=[1,1],align="right")
my_okt_circuit = Picture(app, image="block_diagram.png",grid=[1,1],align="right")

my_okt_circuit.resize(480,380)
my_okt_circuit = Picture(app, image="Okika-Logo.JPG",grid=[1,0],align="left")
my_okt_contact_box = Box(app, grid=[1,5,2,1])
my_okt_contact = Text(my_okt_contact_box, text="Contact:\n www.okikatechnologies.com", size=12,color="blue", )

    

############################################################################################
# Build the range plot windows, one for each ultrasound channel
############################################################################################

chart_width = 500 #cm, change this to zoom in or out of chart.
map_x_pixels = 800  #pixels in chart display in x direction
map_range = chart_width #distance in cm
mapsf = map_range/map_x_pixels #cm/pixel scaling factor

map_plot = []
chart_window = []
chart_box = []
ruler_box = []
ruler_plot = []


chrtn = nStates #one chart output window per ultrasound chanel
#channels_on = [True,True,True,True,True]

for ichrt in range(chrtn):
    chart_window.append(Window(app,title="Object Range Chart " + "Channel " + str(ichrt), height=100, width=800, bg="blue"))
    chart_box.append(Box(chart_window[ichrt],height=75, width=800))
    chart_box[ichrt].bg = "green"
    map_plot.append(Drawing(chart_box[ichrt], height = 75, width=800))
    ruler_box.append(Box(chart_window[ichrt],height=25, width=800))
    ruler_box[ichrt].bg = "green"
    ruler_plot.append(Drawing(ruler_box[ichrt], height = 25, width=800))
                      
#plot the cm scale markers
    for x in range(100):
        ruler_plot[ichrt].line(x*(chart_width/100)*(1/mapsf),0,x*(chart_width/100)*(1/mapsf),24)

#plot the meter marks.    
    for x in range(1,int((chart_width)/100),1):
        ruler_plot[ichrt].line(x*100*(1/mapsf),0,x*100*(1/mapsf),24,color="white",width=6 )    
        ruler_plot[ichrt].text((x)*100*(1/mapsf)-3,12,x,size=7,color='black')

#various calibration factors
map_duration = map_range/speedofsound # time duration of the measurement window in cm/(cm/s) = s
calibration_factor = -8 #calibrates the time measurement to account for delays in the signal path
line_id=[] #list that holds the unique id of each graphics item

                                                                                                                                                                   
def delay(cc):
    start_delay = rtc.gettime()
    while rtc.gettime()-start_delay < cc:
        pass

def keyPressEvent(event):
    global key                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    key_pressed = event.key
    if key_pressed == '\r':
        key = True
    else:
        key = False

 
global closing_app
closing_app = False


def goodbye():
    global closing_app
    closing_app = True
    app.disable()
    pi1.stop() 
    app.destroy()


def reset():
    load_config(chip,"reset")
    
def us_pulse(ultrasound_Pulse_Width):
    GPIO.output(23,False)
    #delay(45)
    delay(ultrasound_Pulse_Width)    
    GPIO.output(23,True)

###################################################################################
# Main program loop controls trigger pulse and echo capture for each chanel
###################################################################################
def main_loop():

    global closing_app
    global US_Pulse_Width

    new_map_time = []
    nchannels = nStates
    channels_on = [True,True,True,True,True]
    while closing_app == False:
        for istates in range(nchannels):
            new_map_time.clear()
            if ((channels_on[istates] == True)):
                response=spi.xfer2(list(States[istates])) # sends new chip configuration to select channel istates          
                us_pulse(US_Pulse_Width)
                rtc.interrupts(0)

                ref_ticks = time.time() #s
                while (time.time() - ref_ticks) < 2*map_duration:  #check for an ultrasound echo and log its time
                    if GPIO.input(ECHO) == 0:
                        new_timestamp = time.time()
                        new_map_time.append(new_timestamp)
                rtc.interrupts(1)
                time.sleep(.0005)
                time_len=len(new_map_time)
                #print('new time', new_map_time)
                
                #time.sleep(.008)
                map_plot[istates].clear() # clear the sonar display for the current channel
                    
                if((time_len < chart_width) and (time_len > 0)):  #calculate the location of markers and paint them in the channel's window
                    for echo_time in new_map_time:
                        timeofflight = (echo_time - ref_ticks)
                        echo_distance = (timeofflight)*speedofsound + calibration_factor
                        distance=echo_distance/2
                        xcoord = int(distance/mapsf)
                        if xcoord <= chart_width:
                            new_id_item = map_plot[istates].line(xcoord,0,xcoord,99, color="red", width = "1")

        update_config(key) #update configuration in case settings changed in the GUI
        app.update()
                            
        
        
###################################################################################
#let's get this app going!
###################################################################################
  
reset() #software reset the Okika Technologies FPAA chip
load_config(chip,"primary") # load the primary configuration into the FPAA
time.sleep(.3) #settle the primary configuration
key = True
app.when_key_pressed = keyPressEvent #here for now but does nothing
update_config(key) #read the confuguration out of the GUI.  This gets udated in the main_loop
app.when_closed = goodbye #say goodbye nicely
app.after(200,main_loop) # off and running....
app.display()
