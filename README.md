
![Logo](https://www.okikatechnologies.com/wp-content/uploads/2022/05/Okika-Logo-Web-FullColor-Medium-copy.png)



# FPAA Ultrasonic Transceiver

This is an FPAA-based Ultrasound Transceiver Application.  It can be used for multi-channel, multi-frequency ultrasound applications such as rangefinders, depth sounders, industrial inspection systems, fish finders, and many others.

The Okika Technologies Field Programmable Analog Array (FPAA) contains an array of analog modules that can be created, wired, and modified under software control.

The implementation of this project uses the FPAA’s dynamic configurability to implement the project.

Parameters that can be changed under software control include:
1. Ultrasound Frequency (from 20kHz to 2MHz)
2. Dynamic Gain Control from 0dB to 60dB (to 100dB with external passive components)
3. I/O port selection multiplexing
4. Ultrasound transceiver channels (from 1 to 5 channels)
5. Ultrasound pulse synthesis
6. Filter gains, frequencies, and quality factor
7. Receiver threshold sensitivity  
\
The project includes C API’s that the [DynAMx Design Lab](https://www.okikatechnologies.com/dynamx-design-lab-software/) software generates to enable real-time dynamic control of the FPAA.  A Python script was created to enable creation of a GUI so that any user can follow our DIY Instructions Found Here to build this project.  The GUI allows the user to modify all of the circuit’s parameters. 

## What Is an Ultrasound Sonar?

An Ultrasonic Sonar uses ultrasound waves to make measurements of object locations in the nearby environment.  An ultrasound pulse is transmitted into the air or water and the system waits for echoes to come back that indicate there are objects nearby.  Distance to the objects is calculated using the formula:

Distance = Velocity x Time, where
- Distance is the distance between the ultrasound transmitter and the object producing the echo
- Time is the measured time it took for the ultrasound to travel round trip to the object and back
- Velocity is the speed of sound in air, water, or whatever medium is in use.

In this project, the maximum distance to scan can be adjusted.  All echoes are tracked and placed in the GUI display.  There is ample material available that goes into detailed of analysis of ultrasound systems.  We will not cover that theoretical information here.

## What is FPAA?

FPAA is an acronym for “Field Programmable Analog Array”.

The Okika FPAA chip has an array of basic Configurable Analog Modules (CAMs): 4 operational amplifiers, 8 programmable gains, 7 flexible analog inputs/outputs, a look up table, switched capacitors, voltage references, 4 analog to digital converters, and 4 comparators.

The FPAA’s CAMs are Dynamically Configurable which means the CAM can be connected through a matrix of switches that are controlled by an MCU through a standard SPI serial interface and that the connections between CAMs as well as the CAM’s parameters can be changed, or reconfigured, at any time under software control.

This Dynamic Reconfigurability is the most valuable and important feature of Okika’s FPAA. To learn more about CAM’s and functionality of DynAMx Design Lab Software or Field Programmable Analog Array via the OTC24000 chip used for this application, you can find more info [here](https://www.okikatechnologies.com/otc24000-datasheet-reconfigurable-analog-matrix/).

# Getting Started

## File Structure

|   File Name                             |   Purpose                                                                                    |   Source                                                                                                                                         |
|-----------------------------------------|----------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------|
|   okika_us.okt                          |   Okika design file                                                                          |   DynAMx Design Lab software                                                                                                                     |
|   okika_us.py                           |   Python Script to provide GUI and controls for the sonar                                    |   Script designed by Okika Technologies                                                                                                          |
|   ApiCode.c, ApiCode.h                  |   C files api’s to control the FPAA                                                          |   DynAMx Design Lab software                                                                                                                     |
|   CAMCode.c, CAMCode.h                  |   C files api’s to control the FPAA                                                          |   DynAMX Design Lab software                                                                                                                     |
|   StateDrivenCode.c, StateDrivenCode.h  |   C files api’s to control the FPAA                                                          |   DynAMx Design Lab software                                                                                                                     |
|   rtc.c                                 |   C file with Raspberry Pi RTC library                                                       |   https://forums.raspberrypi.com/viewtopic.php?t=52393&start=25                                                                                  |
|                                          |                                                                                            | note: above link contains timtest.c.  For this project I renamed it to rtc.c.  |      
|   makefile                              |   Compiles API’s to create runtime shared library                                            |   Authored by Okika Technologies                                                                                                                 |
|   *.o, *.so                             |   Objects and shared API libraries for controlling the FPAA                                  |   makefile                                                                                                                                       |
|   block_diagram.png                     |   Block diagram abstraction to show the FPAA functionality when configured for this project  |   Created by Okika Technologies                                                                                                                  |
|   schematic.jpg                         |   Screen capture of sonar design schematic in DynAMx Design Labs                             |   DynAMx Design Labs software                                                                                                                    |
|   Okika-Logo.JPG                        |   Okika Tech. logo graphics used in okika_us.py GUI                                          |   Created by Okika Technologies                                                                                                                  |
|   40khz. xlsx, 40khz.csv                |   Waveform sample data used by the FPAA to generate the ultrasound waveform.                 |   Created by Okika Technologies                                                                                                                  |

## Hardware Setup


Hardware Setup

Required Hardware
- Okika Technologies development kit found here (link) or equivalent FPAA board.
- Raspberry Pi 4B running Raspbian
- 6~10V DC Power Supply
- Ultrasound Transducers (5 each Transmit & Receive) found [here](https://www.amazon.com/HiLetgo-Ultrasonic-Sensor-Transceiver-Receiver/dp/B00M2GHG66/ref=sr_1_4?crid=14XSV5S012N79&keywords=ultrasound+transducer&qid=1652821232&sprefix=ultrasound+transducer,aps,137&sr=8-4).
- Breadboarding wires

|   Signal From Raspberry Pi Pin  |   Signal To FPAA Board  |   Purpose                                                            |
|---------------------------------|-------------------------|----------------------------------------------------------------------|
|   23                            |   SCK                   |   SPI Serial Clock                                                   |
|   19                            |   SI                    |   SPI Serial Data                                                    |
|   24                            |   CS2b                  |   SPI Chip Select                                                    |
|   7                             |   ACLK                  |   ACLK (analog clock to the FPAA)                                    |
|                                 |                         |                                                                      |
|   16                            |   IO5P                  |   TRIGGER signal that causes an ultrasound pulse to be transmitted.  |
|   18                            |   MCLK                  |   ECHO signal sensed and decoded by the FPAA receiver                |
|                                 |                         |                                                                      |
|   O1P, O1N                      |   N/A                   |   Ultrasound Output Channel 1                                        |
|   O2P, O2N                      |   N/A                   |   Ultrasound Output Channel 2                                        |
|   O3P, O3N                      |   N/A                   |   Ultrasound Output Channel 3                                        |
|   O4P, O4N                      |   N/A                   |   Ultrasound Output Channel 4                                        |
|   IO6P, IO6N                    |   N/A                   |   Ultrasound Output Channel 5                                        |
|                                 |                         |                                                                      |
|   I2P, I2N                      |   N/A                   |   Ultrasound ECHO Input Channel 1                                    |
|   I3P, I3N                      |   N/A                   |   Ultrasound ECHO Input Channel 2                                    |
|   I4P, I4N                      |   N/A                   |   Ultrasound ECHO Input Channel 3                                    |
|   I1P, I1N                      |   N/A                   |   Ultrasound ECHO Input Channel 4                                    |
|   IO7P, IO7N                    |   N/A                   |   Ultrasound ECHO Input Channel 5                                    |

## Installation

- Download zip of all files in this repository and unzip into desired directory
- Install the following packages/libraries (follow links for download/intallation instrtuctions):

    - [python](https://www.python.org/downloads/)
    - [pigpio](https://abyz.me.uk/rpi/pigpio/download.html)
    - [guizero](https://lawsie.github.io/guizero/)
    - ctypes (should be installed with python)
    - [RPi.GPIO](https://www.raspberrypi-spy.co.uk/2012/05/install-rpi-gpio-python-library/)
    - time (should ber installed with python)
    - [spidev](https://pypi.org/project/spidev/)

    

## Executing Program
In a terminal window, execute (OR, place this in your bashrc file):
```bash
sudo pigpiod
```	

Start GUI by running:
```
sudo python3 okika_us.py
```
or
``` bash
sudo thonny okika_us.py	
```
and click the Run button

## Configuration

- Edit the Defaults section in okika_us.py
- In GUI change parameters by typing new values in the dialog text boxes and enter.

## Screenshots
Ultrsonic GUI:
![GUI](https://www.okikatechnologies.com/wp-content/uploads/2022/05/ScreenshotUltrasonic1.png)

When executed, the script okika_us will open 6 windows: 1 main control window and 5 plot rulers showing the objects in the ultrasound range, one per channel:

Sensors:
![Sensors](https://www.okikatechnologies.com/wp-content/uploads/2022/05/screenshotultrasonic2.png)

Each ruler represents on channel.  The horizontal scale is 5 meters, or one meter per red hashmark.  The black vertical lines show the location of objects in the echo path.  In this experiment the 5 transducers are all facing in the same general direction toward the floor.  There are cables, a trash bin, and table legs that are all echoing.  The python GUI keeps track of time after each ultrasound pulse and when an echo is detected it places an object at the correct location.  I have tested this system to operate reliably out to about 5 meters with components other than the FPAA in the signal path.

Important to note that this is for demonstration purposes only.  A commercially viable product can be based on this but we would want to add other features.

## Additional Information

As a configurable analog array, an Okika FPAA can implement many thousands of systems under software control.  Sometimes it can be useful to create a high level abstraction at the block diagram level to help visualize the circuit.  Here is such an abstraction for the ultrasound configuration:
![Block Diagram](https://www.okikatechnologies.com/wp-content/uploads/2022/05/Screen-Shot-2022-05-20-at-12.26.01-PM.png)

## License

MIT License

Copyright (c) 2020 Okika Technologies Corporation

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

# Contributors
@okikatechnologies

## Contact
https://www.okikatechnologies.com/contact

