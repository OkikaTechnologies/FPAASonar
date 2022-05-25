#ifndef APICODE_H
#define APICODE_H

/********************************************************************\
*                      Dynamx Design Lab C Code                      *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   okika_us.okt                                           *
*  Generated: May 05, 2022:  01:38 PM                                *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2015 Okika. All rights reserved.           *
*                                                                    *
\********************************************************************/

#include <stdlib.h>
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* All basic data types required by the C code. */
typedef unsigned char        ot_Byte;
typedef long                 ot_Fixed;
typedef long                 ot_Frequency;
typedef short                ot_Component;
typedef ot_Byte              ot_Bool;
typedef ot_Byte              ot_Chip;
typedef ot_Byte              ot_CAM;

/* Enumerated type representing CAMClock */
typedef enum ot_CAMClock
{
   ot_CAMClock_ClockA,                      /* ClockA          */
   ot_CAMClock_ClockB,                      /* ClockB          */
   ot_CAMClock_ClockC,                      /* ClockC          */
   ot_CAMClock_ClockD                       /* ClockD          */
} ot_CAMClock;

/* Enumerated type representing ApexClockDivisor */
typedef enum ot_ApexClockDivisor
{
   ot_ApexClockDivisor_Clock5Delay,         /* Clock5Delay     */
   ot_ApexClockDivisor_Clock5,              /* Clock5          */
   ot_ApexClockDivisor_Clock4Delay,         /* Clock4Delay     */
   ot_ApexClockDivisor_Clock4,              /* Clock4          */
   ot_ApexClockDivisor_Clock3,              /* Clock3          */
   ot_ApexClockDivisor_Clock2,              /* Clock2          */
   ot_ApexClockDivisor_Clock1,              /* Clock1          */
   ot_ApexClockDivisor_Clock0,              /* Clock0          */
   ot_ApexClockDivisor_ClockPowerUps,         /* ClockPowerUps   */
   ot_ApexClockDivisor_ClockSys1,           /* ClockSys1       */
   ot_ApexClockDivisor_ClockSys2,           /* ClockSys2       */
   ot_ApexClockDivisor_ClockSys1Sys2Flag          /* ClockSys1Sys2Flag */
} ot_ApexClockDivisor;

/* Enumerated type representing ClockDivisor */
typedef enum ot_ClockDivisor
{
   ot_ClockDivisor_Chop2,                   /* Chop2           */
   ot_ClockDivisor_Chop1,                   /* Chop1           */
   ot_ClockDivisor_Clock3,                  /* Clock3          */
   ot_ClockDivisor_Clock2,                  /* Clock2          */
   ot_ClockDivisor_Clock1,                  /* Clock1          */
   ot_ClockDivisor_Clock0,                  /* Clock0          */
   ot_ClockDivisor_PreScale                 /* PreScale        */
} ot_ClockDivisor;

/* Enumerated type representing VortexControlByte */
typedef enum ot_VortexControlByte
{
   ot_VortexControlByte_SAFD        = 0x80, /* SAFD            */
   ot_VortexControlByte_ResetAll    = 0x40, /* ResetAll        */
   ot_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   ot_VortexControlByte_Read        = 0x10, /* Read            */
   ot_VortexControlByte_SReset      = 0x08, /* SReset          */
   ot_VortexControlByte_EndExecute  = 0x04, /* EndExecute      */
   ot_VortexControlByte_TESTCTRL    = 0x02, /* TESTCTRL        */
   ot_VortexControlByte_Pullups     = 0x01, /* Pullups         */
   ot_VortexControlByte_PUs_Ex      = 0x05  /* PUs_Ex          */
} ot_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum ot_ApexControlByte
{
   ot_ApexControlByte_EndExecute    = 0x80, /* EndExecute      */
   ot_ApexControlByte_Pullups       = 0x40, /* Pullups         */
   ot_ApexControlByte_ResetAll      = 0x20, /* ResetAll        */
   ot_ApexControlByte_SAFD          = 0x10, /* SAFD            */
   ot_ApexControlByte_UpdateClocks  = 0x01, /* UpdateClocks    */
   ot_ApexControlByte_SReset        = 0x07, /* SReset          */
   ot_ApexControlByte_PUs_UpClks    = 0x41, /* PUs_UpClks      */
   ot_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} ot_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum ot_ApiReconfigState
{
   ot_ApiReconfigState_Initialized  = 0x01, /* Initialized     */
   ot_ApiReconfigState_CRCEnabled   = 0x02  /* CRCEnabled      */
} ot_ApiReconfigState;

/* Enumerated type representing ComparatorMask */
typedef enum ot_ComparatorMask
{
   ot_ComparatorMask_Hysteresis     = 0x0300, /* Hysteresis      */
   ot_ComparatorMask_Polarity       = 0x0030, /* Polarity        */
   ot_ComparatorMask_ApexHysteresis = 0x000040, /* ApexHysteresis  */
   ot_ComparatorMask_ApexPolarity   = 0x000018  /* ApexPolarity    */
} ot_ComparatorMask;

/* Enumerated type representing Comparator */
typedef enum ot_Comparator
{
   ot_Comparator_Hyst_0             = 0x0000, /* Hyst_0          */
   ot_Comparator_Hyst_10            = 0x0100, /* Hyst_10         */
   ot_Comparator_Hyst_20            = 0x0200, /* Hyst_20         */
   ot_Comparator_Hyst_40            = 0x0300, /* Hyst_40         */
   ot_Comparator_Pol_NonInverted    = 0x0000, /* Pol_NonInverted */
   ot_Comparator_Pol_Inverted       = 0x0030, /* Pol_Inverted    */
   ot_Comparator_Hyst_Off           = 0x000000, /* Hyst_Off        */
   ot_Comparator_Hyst_On            = 0x000040, /* Hyst_On         */
   ot_Comparator_Apex_Noninverted   = 0x000000, /* Apex_Noninverted */
   ot_Comparator_Apex_NonInverted   = 0x000000, /* Apex_NonInverted */
   ot_Comparator_Apex_Inverted      = 0x000018  /* Apex_Inverted   */
} ot_Comparator;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define ot_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define ot_FPAA1                       0         /* "FPAA1" */
#define ot_FPAA2                       1         /* "FPAA2" */
#define ot_FPAA3                       2         /* "FPAA3" */
#define ot_FPAA4                       3         /* "FPAA4" */
#define ot_FPAA5                       4         /* "FPAA5" */

/* How many chips with programmable Chips there are. */             
#define ot_apiChipCount                5

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const ot_Byte ot_apiAddress1[ot_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct ot_apiPrimaryConfigInfo
{
   const ot_Byte* data;
   short length;
} ot_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const ot_Byte ot_FPAA1_PrimaryConfigInfo[];
extern const ot_Byte ot_FPAA2_PrimaryConfigInfo[];
extern const ot_Byte ot_FPAA3_PrimaryConfigInfo[];
extern const ot_Byte ot_FPAA4_PrimaryConfigInfo[];
extern const ot_Byte ot_FPAA5_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const ot_apiPrimaryConfigInfo ot_apiPrimaryConfigData[ot_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const ot_Byte ot_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct ot_apiReconfigInfo
{
   ot_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   ot_ApiReconfigState flags; /* Internal state */
} ot_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern ot_apiReconfigInfo ot_FPAA1_ReconfigInfo;   /* FPAA1 */
extern ot_apiReconfigInfo ot_FPAA2_ReconfigInfo;   /* FPAA2 */
extern ot_apiReconfigInfo ot_FPAA3_ReconfigInfo;   /* FPAA3 */
extern ot_apiReconfigInfo ot_FPAA4_ReconfigInfo;   /* FPAA4 */
extern ot_apiReconfigInfo ot_FPAA5_ReconfigInfo;   /* FPAA5 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern ot_apiReconfigInfo* ot_apiReconfigData[ot_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern ot_Byte ot_FPAA1_ReconfigBuffer[64];        /* FPAA1 */
extern ot_Byte ot_FPAA2_ReconfigBuffer[64];        /* FPAA2 */
extern ot_Byte ot_FPAA3_ReconfigBuffer[64];        /* FPAA3 */
extern ot_Byte ot_FPAA4_ReconfigBuffer[64];        /* FPAA4 */
extern ot_Byte ot_FPAA5_ReconfigBuffer[64];        /* FPAA5 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern ot_Byte* ot_apiReconfigBuffer[ot_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define ot_FPAA1_Comparator2           0         /* "Comparator2" */
#define ot_FPAA1_Comparator3           1         /* "Comparator3" */
#define ot_FPAA1_FilterBilinear1       2         /* "FilterBilinear1" */
#define ot_FPAA1_FilterBiquad1         3         /* "FilterBiquad1" */
#define ot_FPAA1_FilterBiquad2         4         /* "FilterBiquad2" */
#define ot_FPAA1_GainInv1              5         /* "GainInv1" */
#define ot_FPAA1_GainInv2              6         /* "GainInv2" */
#define ot_FPAA1_PeriodicWave1         7         /* "PeriodicWave1" */
#define ot_FPAA2_Comparator4           8         /* "Comparator4" */
#define ot_FPAA2_Comparator5           9         /* "Comparator5" */
#define ot_FPAA2_FilterBilinear2       10        /* "FilterBilinear2" */
#define ot_FPAA2_FilterBiquad3         11        /* "FilterBiquad3" */
#define ot_FPAA2_FilterBiquad4         12        /* "FilterBiquad4" */
#define ot_FPAA2_GainInv3              13        /* "GainInv3" */
#define ot_FPAA2_GainInv4              14        /* "GainInv4" */
#define ot_FPAA2_PeriodicWave2         15        /* "PeriodicWave2" */
#define ot_FPAA3_Comparator4           16        /* "Comparator4" */
#define ot_FPAA3_Comparator5           17        /* "Comparator5" */
#define ot_FPAA3_FilterBilinear2       18        /* "FilterBilinear2" */
#define ot_FPAA3_FilterBiquad3         19        /* "FilterBiquad3" */
#define ot_FPAA3_FilterBiquad4         20        /* "FilterBiquad4" */
#define ot_FPAA3_GainInv3              21        /* "GainInv3" */
#define ot_FPAA3_GainInv4              22        /* "GainInv4" */
#define ot_FPAA3_PeriodicWave2         23        /* "PeriodicWave2" */
#define ot_FPAA4_Comparator4           24        /* "Comparator4" */
#define ot_FPAA4_Comparator5           25        /* "Comparator5" */
#define ot_FPAA4_FilterBilinear2       26        /* "FilterBilinear2" */
#define ot_FPAA4_FilterBiquad3         27        /* "FilterBiquad3" */
#define ot_FPAA4_FilterBiquad4         28        /* "FilterBiquad4" */
#define ot_FPAA4_GainInv3              29        /* "GainInv3" */
#define ot_FPAA4_GainInv4              30        /* "GainInv4" */
#define ot_FPAA4_PeriodicWave2         31        /* "PeriodicWave2" */
#define ot_FPAA5_Comparator4           32        /* "Comparator4" */
#define ot_FPAA5_Comparator5           33        /* "Comparator5" */
#define ot_FPAA5_FilterBilinear2       34        /* "FilterBilinear2" */
#define ot_FPAA5_FilterBiquad3         35        /* "FilterBiquad3" */
#define ot_FPAA5_FilterBiquad4         36        /* "FilterBiquad4" */
#define ot_FPAA5_GainInv3              37        /* "GainInv3" */
#define ot_FPAA5_GainInv4              38        /* "GainInv4" */
#define ot_FPAA5_PeriodicWave2         39        /* "PeriodicWave2" */

/* How many programmable CAMs there are. */                         
#define ot_apiCAMCount                 40

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const ot_Byte ot_apiChipFromCAM[ot_apiCAMCount];

/* Component ID's for okikaApex\Comparator */
#define ot_okikaApex_Comparator_comp1    0          /* comp1 */

/* Component ID's for okikaApex\FilterBilinear */
#define ot_okikaApex_FilterBilinear_Cin  0          /* Cin */
#define ot_okikaApex_FilterBilinear_Cint 1          /* Cint */
#define ot_okikaApex_FilterBilinear_Cout 2          /* Cout */

/* Component ID's for okikaApex\FilterBiquad */
#define ot_okikaApex_FilterBiquad_C2     0          /* C2 */
#define ot_okikaApex_FilterBiquad_C3     1          /* C3 */
#define ot_okikaApex_FilterBiquad_C4     2          /* C4 */
#define ot_okikaApex_FilterBiquad_CA1    3          /* CA1 */
#define ot_okikaApex_FilterBiquad_CA2    4          /* CA2 */
#define ot_okikaApex_FilterBiquad_CB1    5          /* CB1 */
#define ot_okikaApex_FilterBiquad_CB2    6          /* CB2 */
#define ot_okikaApex_FilterBiquad_Cp     7          /* Cp */

/* Component ID's for okikaApex\GainInv */
#define ot_okikaApex_GainInv_Cin         0          /* Cin */
#define ot_okikaApex_GainInv_Cout        1          /* Cout */
#define ot_okikaApex_GainInv_aCin        2          /* aCin */
#define ot_okikaApex_GainInv_aCout       3          /* aCout */

/* Component ID's for okikaApex\PeriodicWave */
#define ot_okikaApex_PeriodicWave_Cout   0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct ot_apiCapacitor
{
   ot_Byte bank;
   ot_Byte byteNum;
} ot_apiCapacitor;


/* This is the data structure for a comparator. */
typedef struct ot_apiComparator
{
   ot_Byte bank;
   ot_Byte byteNum;
   long currentValue;
} ot_apiComparator;


/* Component tables for Comparator2 */
extern ot_apiComparator ot_FPAA1_Comparator2_Comparator[1];

/* Component tables for Comparator3 */
extern ot_apiComparator ot_FPAA1_Comparator3_Comparator[1];

/* Component tables for FilterBilinear1 */
extern const ot_apiCapacitor ot_FPAA1_FilterBilinear1_Capacitor[3];

/* Component tables for FilterBiquad1 */
extern const ot_apiCapacitor ot_FPAA1_FilterBiquad1_Capacitor[8];

/* Component tables for FilterBiquad2 */
extern const ot_apiCapacitor ot_FPAA1_FilterBiquad2_Capacitor[8];

/* Component tables for GainInv1 */
extern const ot_apiCapacitor ot_FPAA1_GainInv1_Capacitor[4];

/* Component tables for GainInv2 */
extern const ot_apiCapacitor ot_FPAA1_GainInv2_Capacitor[4];

/* Component tables for PeriodicWave1 */
extern const ot_apiCapacitor ot_FPAA1_PeriodicWave1_Capacitor[1];

/* Component tables for Comparator4 */
extern ot_apiComparator ot_FPAA2_Comparator4_Comparator[1];

/* Component tables for Comparator5 */
extern ot_apiComparator ot_FPAA2_Comparator5_Comparator[1];

/* Component tables for FilterBilinear2 */
extern const ot_apiCapacitor ot_FPAA2_FilterBilinear2_Capacitor[3];

/* Component tables for FilterBiquad3 */
extern const ot_apiCapacitor ot_FPAA2_FilterBiquad3_Capacitor[8];

/* Component tables for FilterBiquad4 */
extern const ot_apiCapacitor ot_FPAA2_FilterBiquad4_Capacitor[8];

/* Component tables for GainInv3 */
extern const ot_apiCapacitor ot_FPAA2_GainInv3_Capacitor[4];

/* Component tables for GainInv4 */
extern const ot_apiCapacitor ot_FPAA2_GainInv4_Capacitor[4];

/* Component tables for PeriodicWave2 */
extern const ot_apiCapacitor ot_FPAA2_PeriodicWave2_Capacitor[1];

/* Component tables for Comparator4 */
extern ot_apiComparator ot_FPAA3_Comparator4_Comparator[1];

/* Component tables for Comparator5 */
extern ot_apiComparator ot_FPAA3_Comparator5_Comparator[1];

/* Component tables for FilterBilinear2 */
extern const ot_apiCapacitor ot_FPAA3_FilterBilinear2_Capacitor[3];

/* Component tables for FilterBiquad3 */
extern const ot_apiCapacitor ot_FPAA3_FilterBiquad3_Capacitor[8];

/* Component tables for FilterBiquad4 */
extern const ot_apiCapacitor ot_FPAA3_FilterBiquad4_Capacitor[8];

/* Component tables for GainInv3 */
extern const ot_apiCapacitor ot_FPAA3_GainInv3_Capacitor[4];

/* Component tables for GainInv4 */
extern const ot_apiCapacitor ot_FPAA3_GainInv4_Capacitor[4];

/* Component tables for PeriodicWave2 */
extern const ot_apiCapacitor ot_FPAA3_PeriodicWave2_Capacitor[1];

/* Component tables for Comparator4 */
extern ot_apiComparator ot_FPAA4_Comparator4_Comparator[1];

/* Component tables for Comparator5 */
extern ot_apiComparator ot_FPAA4_Comparator5_Comparator[1];

/* Component tables for FilterBilinear2 */
extern const ot_apiCapacitor ot_FPAA4_FilterBilinear2_Capacitor[3];

/* Component tables for FilterBiquad3 */
extern const ot_apiCapacitor ot_FPAA4_FilterBiquad3_Capacitor[8];

/* Component tables for FilterBiquad4 */
extern const ot_apiCapacitor ot_FPAA4_FilterBiquad4_Capacitor[8];

/* Component tables for GainInv3 */
extern const ot_apiCapacitor ot_FPAA4_GainInv3_Capacitor[4];

/* Component tables for GainInv4 */
extern const ot_apiCapacitor ot_FPAA4_GainInv4_Capacitor[4];

/* Component tables for PeriodicWave2 */
extern const ot_apiCapacitor ot_FPAA4_PeriodicWave2_Capacitor[1];

/* Component tables for Comparator4 */
extern ot_apiComparator ot_FPAA5_Comparator4_Comparator[1];

/* Component tables for Comparator5 */
extern ot_apiComparator ot_FPAA5_Comparator5_Comparator[1];

/* Component tables for FilterBilinear2 */
extern const ot_apiCapacitor ot_FPAA5_FilterBilinear2_Capacitor[3];

/* Component tables for FilterBiquad3 */
extern const ot_apiCapacitor ot_FPAA5_FilterBiquad3_Capacitor[8];

/* Component tables for FilterBiquad4 */
extern const ot_apiCapacitor ot_FPAA5_FilterBiquad4_Capacitor[8];

/* Component tables for GainInv3 */
extern const ot_apiCapacitor ot_FPAA5_GainInv3_Capacitor[4];

/* Component tables for GainInv4 */
extern const ot_apiCapacitor ot_FPAA5_GainInv4_Capacitor[4];

/* Component tables for PeriodicWave2 */
extern const ot_apiCapacitor ot_FPAA5_PeriodicWave2_Capacitor[1];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* ot_FPAA1_Comparator2_Components[1];
extern void* ot_FPAA1_Comparator3_Components[1];
extern void* ot_FPAA1_FilterBilinear1_Components[3];
extern void* ot_FPAA1_FilterBiquad1_Components[8];
extern void* ot_FPAA1_FilterBiquad2_Components[8];
extern void* ot_FPAA1_GainInv1_Components[4];
extern void* ot_FPAA1_GainInv2_Components[4];
extern void* ot_FPAA1_PeriodicWave1_Components[1];
extern void* ot_FPAA2_Comparator4_Components[1];
extern void* ot_FPAA2_Comparator5_Components[1];
extern void* ot_FPAA2_FilterBilinear2_Components[3];
extern void* ot_FPAA2_FilterBiquad3_Components[8];
extern void* ot_FPAA2_FilterBiquad4_Components[8];
extern void* ot_FPAA2_GainInv3_Components[4];
extern void* ot_FPAA2_GainInv4_Components[4];
extern void* ot_FPAA2_PeriodicWave2_Components[1];
extern void* ot_FPAA3_Comparator4_Components[1];
extern void* ot_FPAA3_Comparator5_Components[1];
extern void* ot_FPAA3_FilterBilinear2_Components[3];
extern void* ot_FPAA3_FilterBiquad3_Components[8];
extern void* ot_FPAA3_FilterBiquad4_Components[8];
extern void* ot_FPAA3_GainInv3_Components[4];
extern void* ot_FPAA3_GainInv4_Components[4];
extern void* ot_FPAA3_PeriodicWave2_Components[1];
extern void* ot_FPAA4_Comparator4_Components[1];
extern void* ot_FPAA4_Comparator5_Components[1];
extern void* ot_FPAA4_FilterBilinear2_Components[3];
extern void* ot_FPAA4_FilterBiquad3_Components[8];
extern void* ot_FPAA4_FilterBiquad4_Components[8];
extern void* ot_FPAA4_GainInv3_Components[4];
extern void* ot_FPAA4_GainInv4_Components[4];
extern void* ot_FPAA4_PeriodicWave2_Components[1];
extern void* ot_FPAA5_Comparator4_Components[1];
extern void* ot_FPAA5_Comparator5_Components[1];
extern void* ot_FPAA5_FilterBilinear2_Components[3];
extern void* ot_FPAA5_FilterBiquad3_Components[8];
extern void* ot_FPAA5_FilterBiquad4_Components[8];
extern void* ot_FPAA5_GainInv3_Components[4];
extern void* ot_FPAA5_GainInv4_Components[4];
extern void* ot_FPAA5_PeriodicWave2_Components[1];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** ot_apiCAMComponentData[ot_apiCAMCount];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA1 */                                                       
extern short ot_FPAA1_Clocks[12];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA2 */                                                       
extern short ot_FPAA2_Clocks[12];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA3 */                                                       
extern short ot_FPAA3_Clocks[12];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA4 */                                                       
extern short ot_FPAA4_Clocks[12];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA5 */                                                       
extern short ot_FPAA5_Clocks[12];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's clock data. */                         
extern short* ot_apiClockDivisorData[ot_apiChipCount];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's master clock frequency. */             
extern const long ot_apiMasterClockData[ot_apiChipCount];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear1 */                                                  
extern const ot_ApexClockDivisor ot_FPAA1_FilterBilinear1_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad1 */                                                    
extern const ot_ApexClockDivisor ot_FPAA1_FilterBiquad1_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad2 */                                                    
extern const ot_ApexClockDivisor ot_FPAA1_FilterBiquad2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
extern const ot_ApexClockDivisor ot_FPAA2_FilterBilinear2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad3 */                                                    
extern const ot_ApexClockDivisor ot_FPAA2_FilterBiquad3_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad4 */                                                    
extern const ot_ApexClockDivisor ot_FPAA2_FilterBiquad4_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
extern const ot_ApexClockDivisor ot_FPAA3_FilterBilinear2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad3 */                                                    
extern const ot_ApexClockDivisor ot_FPAA3_FilterBiquad3_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad4 */                                                    
extern const ot_ApexClockDivisor ot_FPAA3_FilterBiquad4_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
extern const ot_ApexClockDivisor ot_FPAA4_FilterBilinear2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad3 */                                                    
extern const ot_ApexClockDivisor ot_FPAA4_FilterBiquad3_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad4 */                                                    
extern const ot_ApexClockDivisor ot_FPAA4_FilterBiquad4_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
extern const ot_ApexClockDivisor ot_FPAA5_FilterBilinear2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad3 */                                                    
extern const ot_ApexClockDivisor ot_FPAA5_FilterBiquad3_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad4 */                                                    
extern const ot_ApexClockDivisor ot_FPAA5_FilterBiquad4_CAMClocks[4];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the CAM's virtual clock mapping. */               
extern const ot_ApexClockDivisor* ot_apiCAMClockToApexChipClock[ot_apiCAMCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                      Primary Configuration                       * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                      GetPrimaryConfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const ot_Byte* ot_GetPrimaryConfigData(ot_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const ot_Byte* ot_GetResetData(ot_Chip chip, int* count);      
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will perform a soft reset   |
  |  on the chip. The returned data begins with the synch byte and |
  |  ends with the control byte. There are no pad bytes included.  |
  |  The number of bytes in the configuration data is set in       |
  |  count.                                                        |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const ot_Byte* ot_GetVortexSleepData(ot_Chip chip, int* count, ot_Bool powerDown); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then all analog functions will be   |
  |  turned off except the crystal oscillator. The returned data   |
  |  begins with the synch byte and ends with the last error byte. |
  |  There are no pad bytes included. The number of bytes in the   |
  |  configuration data is set in count.                           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const ot_Byte* ot_GetApexSleepData(ot_Chip chip, int* count, 
                                       ot_Bool powerDown,
                                       ot_Bool VMR,
                                       ot_Bool watchDog
                                       ); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves configuration data that will put the chip to sleep. |
  |  If powerDown is non-zero, then the analog cells are powered   |
  |  DOWN. If VMR is non-zero, then VMR is powered UP. If watchDog |
  |  is non-zero, then the watchDog circuit is powered up. The     |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_InitializeVortexReconfigData(ot_Chip chip);            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_InitializeApexReconfigData(ot_Chip chip);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_ClearVortexReconfigData(ot_Chip chip);                 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_ClearApexReconfigData(ot_Chip chip);                   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_ShutdownVortexReconfigData(ot_Chip chip);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by ot_InitializeVortexReconfigData.    |
  |  ot_InitializeVortexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_ShutdownApexReconfigData(ot_Chip chip);                
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by ot_InitializeApexReconfigData.      |
  |  ot_InitializeApexReconfigData must be called again prior to   |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const ot_Byte* ot_GetVortexReconfigData(ot_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const ot_Byte* ot_GetApexReconfigData(ot_Chip chip, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the current reconfiguration data for the chip. The  |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the reconfiguration is set in count. The data     |
  |  returned from this function is invalidated if another         |
  |  reconfiguration function is called for this chip. The data    |
  |  returned from this function should not be modified.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_SetVortexReconfigControlFlags(ot_Chip chip, ot_VortexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_SetApexReconfigControlFlags(ot_Chip chip, ot_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_SetApexReconfigControlFlagsNOP(ot_Chip chip, ot_ApexControlByte flags); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     ot_VortexControlByte ot_GetVortexReconfigControlFlags(ot_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     ot_ApexControlByte ot_GetApexReconfigControlFlags(ot_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     GetApexClockFrequency                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     //NEED TO TAKE WHICH PRESCALER WAS USED INTO ACCOUNT, i.e., ot_ClockDivisor_PreScale
ot_Frequency ot_GetApexClockFrequency(ot_CAM cam, ot_CAMClock camClock); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the frequency in hz for the CAM clock desired. The    |
  |  clock values are taken from the chip the CAM is in. This      |
  |  should only be called from within CAM functions, and is not   |
  |  intended for use otherwise.                                   |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_SetCapValue(ot_CAM cam, ot_Component capID, ot_Byte value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                       SetApexComparator                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_SetApexComparator(ot_CAM cam, ot_Component compID, ot_ComparatorMask compMask, ot_Comparator values); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets different properties of the comparator. The properties   |
  |  to set are determined by compMask. The values to set them to  |
  |  are the values in value. This should only be called from      |
  |  within CAM functions, and is not intended for use otherwise.  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_ChooseCapRatio(double dGain, ot_Byte* pCap1, ot_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     ot_Byte ot_AdjustCap(double dValue);                           
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_FixedChooseCapRatio(double dGain, ot_Byte* pCap1, ot_Byte* pCap2); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     ot_Byte ot_FixedAdjustCap(ot_Fixed fValue);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_LoadLUT(ot_CAM cam, ot_Byte* values, ot_Byte startIndex, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Load the arrary of data pointed to by values into the LUT.    |
  |  The data is loaded starting with at the position of           |
  |  startIndex and continuing through count bytes. If the number  |
  |  of bytes has changed it will be necessary to call the         |
  |  SetCounterRollOver().                                         |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     SetApexCounterRollOver                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_SetApexCounterRollOver(ot_CAM cam, ot_Byte rollOver);  
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets the programmable counter roll over value.                |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     ot_Fixed ot_FloatToFixed(float fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     ot_Fixed ot_IntToFixed(int value);                             
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     int ot_FixedToInt(ot_Fixed fValue);                            
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     float ot_FixedToFloat(ot_Fixed fValue);                        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     ot_Fixed ot_FixedAbs(ot_Fixed fValue);                         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     ot_Fixed ot_FixedDivide(ot_Fixed fLeft, ot_Fixed fRight);      
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the result of dividing two fixed-point  |
  |  numbers. Input fLeft is the left-side of the implied division |
  |  sign. It is the first value to divide. Input fRight is the    |
  |  right-side of the implied division sign. It is the value to   |
  |  divide the first value by. The fixed-point numbers are        |
  |  assumed to be in 16:16 form, although the routine might work  |
  |  for any other fixed-point setup, as long as the two values    |
  |  are identical in their fixed-point setup. But this has not    |
  |  been tested. Division of fixed-point numbers is defined as    |
  |  dividing the mantissas, and subtracting the exponents. Since  |
  |  we are implying 16:16 numbers, the subtraction of exponents   |
  |  would leave us with no fractional part. To solve this         |
  |  problem, we try to shift the numerator up by 16 bits.         |
  |  However, many compilers do not support 64-bit numbers, so we  |
  |  have to improvise a way to do the division without resorting  |
  |  to assembly language or unsupported types.                    |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_BuildReconfigDataBlock(ot_Chip chip, ot_Byte bank, ot_Byte byteNum, ot_Byte* values, short count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Called by other API functions and should not be directly      |
  |  called by the user. The heart of the reconfiguration API,     |
  |  this function packages an address and a list of values into   |
  |  the proper reconfiguration format, adhering to current        |
  |  auto-grow and CRC16 policies.                                 |
  |                                                                |
  \*--------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* APICODE_H */
