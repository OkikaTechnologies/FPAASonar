#ifndef APICODE_H
#define APICODE_H

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.h                                              *
*  Circuit:   lut_uss_bilinear-5.ad2                                 *
*  Generated: August 20, 2020:  12:02 PM                             *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
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
typedef unsigned char        an_Byte;
typedef long                 an_Fixed;
typedef long                 an_Frequency;
typedef short                an_Component;
typedef an_Byte              an_Bool;
typedef an_Byte              an_Chip;
typedef an_Byte              an_CAM;

/* Enumerated type representing CAMClock */
typedef enum an_CAMClock
{
   an_CAMClock_ClockA,                      /* ClockA          */
   an_CAMClock_ClockB,                      /* ClockB          */
   an_CAMClock_ClockC,                      /* ClockC          */
   an_CAMClock_ClockD                       /* ClockD          */
} an_CAMClock;

/* Enumerated type representing ApexClockDivisor */
typedef enum an_ApexClockDivisor
{
   an_ApexClockDivisor_Clock5Delay,         /* Clock5Delay     */
   an_ApexClockDivisor_Clock5,              /* Clock5          */
   an_ApexClockDivisor_Clock4Delay,         /* Clock4Delay     */
   an_ApexClockDivisor_Clock4,              /* Clock4          */
   an_ApexClockDivisor_Clock3,              /* Clock3          */
   an_ApexClockDivisor_Clock2,              /* Clock2          */
   an_ApexClockDivisor_Clock1,              /* Clock1          */
   an_ApexClockDivisor_Clock0,              /* Clock0          */
   an_ApexClockDivisor_ClockPowerUps,         /* ClockPowerUps   */
   an_ApexClockDivisor_ClockSys1,           /* ClockSys1       */
   an_ApexClockDivisor_ClockSys2,           /* ClockSys2       */
   an_ApexClockDivisor_ClockSys1Sys2Flag          /* ClockSys1Sys2Flag */
} an_ApexClockDivisor;

/* Enumerated type representing ClockDivisor */
typedef enum an_ClockDivisor
{
   an_ClockDivisor_Chop2,                   /* Chop2           */
   an_ClockDivisor_Chop1,                   /* Chop1           */
   an_ClockDivisor_Clock3,                  /* Clock3          */
   an_ClockDivisor_Clock2,                  /* Clock2          */
   an_ClockDivisor_Clock1,                  /* Clock1          */
   an_ClockDivisor_Clock0,                  /* Clock0          */
   an_ClockDivisor_PreScale                 /* PreScale        */
} an_ClockDivisor;

/* Enumerated type representing VortexControlByte */
typedef enum an_VortexControlByte
{
   an_VortexControlByte_SAFD        = 0x80, /* SAFD            */
   an_VortexControlByte_ResetAll    = 0x40, /* ResetAll        */
   an_VortexControlByte_InhibitRdbck = 0x20, /* InhibitRdbck    */
   an_VortexControlByte_Read        = 0x10, /* Read            */
   an_VortexControlByte_SReset      = 0x08, /* SReset          */
   an_VortexControlByte_EndExecute  = 0x04, /* EndExecute      */
   an_VortexControlByte_TESTCTRL    = 0x02, /* TESTCTRL        */
   an_VortexControlByte_Pullups     = 0x01, /* Pullups         */
   an_VortexControlByte_PUs_Ex      = 0x05  /* PUs_Ex          */
} an_VortexControlByte;

/* Enumerated type representing ApexControlByte */
typedef enum an_ApexControlByte
{
   an_ApexControlByte_EndExecute    = 0x80, /* EndExecute      */
   an_ApexControlByte_Pullups       = 0x40, /* Pullups         */
   an_ApexControlByte_ResetAll      = 0x20, /* ResetAll        */
   an_ApexControlByte_SAFD          = 0x10, /* SAFD            */
   an_ApexControlByte_UpdateClocks  = 0x01, /* UpdateClocks    */
   an_ApexControlByte_SReset        = 0x07, /* SReset          */
   an_ApexControlByte_PUs_UpClks    = 0x41, /* PUs_UpClks      */
   an_ApexControlByte_PUs_UpClks_Ex = 0xC1  /* PUs_UpClks_Ex   */
} an_ApexControlByte;

/* Enumerated type representing ApiReconfigState */
typedef enum an_ApiReconfigState
{
   an_ApiReconfigState_Initialized  = 0x01, /* Initialized     */
   an_ApiReconfigState_CRCEnabled   = 0x02  /* CRCEnabled      */
} an_ApiReconfigState;

/* Enumerated type representing ComparatorMask */
typedef enum an_ComparatorMask
{
   an_ComparatorMask_Hysteresis     = 0x0300, /* Hysteresis      */
   an_ComparatorMask_Polarity       = 0x0030, /* Polarity        */
   an_ComparatorMask_ApexHysteresis = 0x000040, /* ApexHysteresis  */
   an_ComparatorMask_ApexPolarity   = 0x000018  /* ApexPolarity    */
} an_ComparatorMask;

/* Enumerated type representing Comparator */
typedef enum an_Comparator
{
   an_Comparator_Hyst_0             = 0x0000, /* Hyst_0          */
   an_Comparator_Hyst_10            = 0x0100, /* Hyst_10         */
   an_Comparator_Hyst_20            = 0x0200, /* Hyst_20         */
   an_Comparator_Hyst_40            = 0x0300, /* Hyst_40         */
   an_Comparator_Pol_NonInverted    = 0x0000, /* Pol_NonInverted */
   an_Comparator_Pol_Inverted       = 0x0030, /* Pol_Inverted    */
   an_Comparator_Hyst_Off           = 0x000000, /* Hyst_Off        */
   an_Comparator_Hyst_On            = 0x000040, /* Hyst_On         */
   an_Comparator_Apex_Noninverted   = 0x000000, /* Apex_Noninverted */
   an_Comparator_Apex_NonInverted   = 0x000000, /* Apex_NonInverted */
   an_Comparator_Apex_Inverted      = 0x000018  /* Apex_Inverted   */
} an_Comparator;

/* If NULL has not yet been defined, do it now. */
#ifndef NULL
#define NULL 0
#endif

/* Just a definition for ease of code reading. */
#define an_apiInvalid        0xFF

/* Each chip is given a numeric ID to be used when calling C Code   
functions */                                                        
#define an_FPAA1                       0         /* "FPAA1" */
#define an_FPAA2                       1         /* "FPAA2" */
#define an_FPAA3                       2         /* "FPAA3" */
#define an_FPAA4                       3         /* "FPAA4" */
#define an_FPAA5                       4         /* "FPAA5" */

/* How many chips with programmable Chips there are. */             
#define an_apiChipCount                5

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
extern const an_Byte an_apiAddress1[an_apiChipCount];

/* This structure contains all the information about the primary    
configuration of a chip */                                          
typedef struct an_apiPrimaryConfigInfo
{
   const an_Byte* data;
   short length;
} an_apiPrimaryConfigInfo;

/* These hold the initial configuration streams for the chips. */   
extern const an_Byte an_FPAA1_PrimaryConfigInfo[];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
extern const an_apiPrimaryConfigInfo an_apiPrimaryConfigData[an_apiChipCount];

/* This is the constant synchronizing header byte. */               
extern const an_Byte an_apiSynchByte;

/* This structure contains all the information about the current state  
of an update stream. */                                             
typedef struct an_apiReconfigInfo
{
   an_Byte* data; /* Pointer to the configuration data. */
   short length;   /* Length of the configuration data */
   short capacity; /* Amount of memory allocated */
   short lastUpdateIndex; /* Index of address1 of the last update. */
   an_ApiReconfigState flags; /* Internal state */
} an_apiReconfigInfo;

/* There is one of these structures for each programmable chip. */  
extern an_apiReconfigInfo an_FPAA1_ReconfigInfo;   /* FPAA1 */
extern an_apiReconfigInfo an_FPAA2_ReconfigInfo;   /* FPAA2 */
extern an_apiReconfigInfo an_FPAA3_ReconfigInfo;   /* FPAA3 */
extern an_apiReconfigInfo an_FPAA4_ReconfigInfo;   /* FPAA4 */
extern an_apiReconfigInfo an_FPAA5_ReconfigInfo;   /* FPAA5 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
extern an_apiReconfigInfo* an_apiReconfigData[an_apiChipCount];

/* There is one of these buffers for each programmable chip. */     
extern an_Byte an_FPAA1_ReconfigBuffer[64];        /* FPAA1 */
extern an_Byte an_FPAA2_ReconfigBuffer[64];        /* FPAA2 */
extern an_Byte an_FPAA3_ReconfigBuffer[64];        /* FPAA3 */
extern an_Byte an_FPAA4_ReconfigBuffer[64];        /* FPAA4 */
extern an_Byte an_FPAA5_ReconfigBuffer[64];        /* FPAA5 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
extern an_Byte* an_apiReconfigBuffer[an_apiChipCount];

/* Each CAM that is controllable is given a numeric ID to be used when  
calling C Code functions. */                                        
#define an_FPAA1_F0                    0         /* "F0" */
#define an_FPAA1_F1                    1         /* "F1" */
#define an_FPAA1_FilterBilinear1       2         /* "FilterBilinear1" */
#define an_FPAA1_GainInv1              3         /* "GainInv1" */
#define an_FPAA1_LUT                   4         /* "LUT" */
#define an_FPAA1_SlLvl                 5         /* "SlLvl" */
#define an_FPAA1_Slicer                6         /* "Slicer" */
#define an_FPAA1_TrigComp              7         /* "TrigComp" */
#define an_FPAA2_F0                    8         /* "F0" */
#define an_FPAA2_F1                    9         /* "F1" */
#define an_FPAA2_FilterBilinear1       10        /* "FilterBilinear1" */
#define an_FPAA2_GainInv1              11        /* "GainInv1" */
#define an_FPAA2_LUT                   12        /* "LUT" */
#define an_FPAA2_SlLvl                 13        /* "SlLvl" */
#define an_FPAA2_Slicer                14        /* "Slicer" */
#define an_FPAA2_TrigComp              15        /* "TrigComp" */
#define an_FPAA3_F2                    16        /* "F2" */
#define an_FPAA3_F3                    17        /* "F3" */
#define an_FPAA3_FilterBilinear2       18        /* "FilterBilinear2" */
#define an_FPAA3_GainInv2              19        /* "GainInv2" */
#define an_FPAA3_LUT1                  20        /* "LUT1" */
#define an_FPAA3_SlLvl1                21        /* "SlLvl1" */
#define an_FPAA3_Slicer1               22        /* "Slicer1" */
#define an_FPAA3_TrigComp1             23        /* "TrigComp1" */
#define an_FPAA4_F2                    24        /* "F2" */
#define an_FPAA4_F3                    25        /* "F3" */
#define an_FPAA4_FilterBilinear2       26        /* "FilterBilinear2" */
#define an_FPAA4_GainInv2              27        /* "GainInv2" */
#define an_FPAA4_LUT1                  28        /* "LUT1" */
#define an_FPAA4_SlLvl1                29        /* "SlLvl1" */
#define an_FPAA4_Slicer1               30        /* "Slicer1" */
#define an_FPAA4_TrigComp1             31        /* "TrigComp1" */
#define an_FPAA5_F2                    32        /* "F2" */
#define an_FPAA5_F3                    33        /* "F3" */
#define an_FPAA5_FilterBilinear2       34        /* "FilterBilinear2" */
#define an_FPAA5_GainInv2              35        /* "GainInv2" */
#define an_FPAA5_LUT1                  36        /* "LUT1" */
#define an_FPAA5_SlLvl1                37        /* "SlLvl1" */
#define an_FPAA5_Slicer1               38        /* "Slicer1" */
#define an_FPAA5_TrigComp1             39        /* "TrigComp1" */

/* How many programmable CAMs there are. */                         
#define an_apiCAMCount                 40

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
extern const an_Byte an_apiChipFromCAM[an_apiCAMCount];

/* Component ID's for AnadigmApex\Comparator */
#define an_AnadigmApex_Comparator_comp1  0          /* comp1 */

/* Component ID's for AnadigmApex\FilterBilinear */
#define an_AnadigmApex_FilterBilinear_Cin 0          /* Cin */
#define an_AnadigmApex_FilterBilinear_Cint 1          /* Cint */
#define an_AnadigmApex_FilterBilinear_Cout 2          /* Cout */

/* Component ID's for AnadigmApex\FilterBiquad */
#define an_AnadigmApex_FilterBiquad_C2   0          /* C2 */
#define an_AnadigmApex_FilterBiquad_C3   1          /* C3 */
#define an_AnadigmApex_FilterBiquad_C4   2          /* C4 */
#define an_AnadigmApex_FilterBiquad_CA1  3          /* CA1 */
#define an_AnadigmApex_FilterBiquad_CA2  4          /* CA2 */
#define an_AnadigmApex_FilterBiquad_CB1  5          /* CB1 */
#define an_AnadigmApex_FilterBiquad_CB2  6          /* CB2 */
#define an_AnadigmApex_FilterBiquad_Cp   7          /* Cp */

/* Component ID's for AnadigmApex\GainInv */
#define an_AnadigmApex_GainInv_Cin       0          /* Cin */
#define an_AnadigmApex_GainInv_Cout      1          /* Cout */
#define an_AnadigmApex_GainInv_aCin      2          /* aCin */
#define an_AnadigmApex_GainInv_aCout     3          /* aCout */

/* Component ID's for AnadigmApex\PeriodicWave */
#define an_AnadigmApex_PeriodicWave_Cout 0          /* Cout */

/* This is the data structure for a capacitor. */
typedef struct an_apiCapacitor
{
   an_Byte bank;
   an_Byte byteNum;
} an_apiCapacitor;


/* This is the data structure for a comparator. */
typedef struct an_apiComparator
{
   an_Byte bank;
   an_Byte byteNum;
   long currentValue;
} an_apiComparator;


/* Component tables for F0 */
extern const an_apiCapacitor an_FPAA1_F0_Capacitor[8];

/* Component tables for F1 */
extern const an_apiCapacitor an_FPAA1_F1_Capacitor[8];

/* Component tables for FilterBilinear1 */
extern const an_apiCapacitor an_FPAA1_FilterBilinear1_Capacitor[3];

/* Component tables for GainInv1 */
extern const an_apiCapacitor an_FPAA1_GainInv1_Capacitor[4];

/* Component tables for LUT */
extern const an_apiCapacitor an_FPAA1_LUT_Capacitor[1];

/* Component tables for SlLvl */
extern const an_apiCapacitor an_FPAA1_SlLvl_Capacitor[4];

/* Component tables for Slicer */
extern an_apiComparator an_FPAA1_Slicer_Comparator[1];

/* Component tables for TrigComp */
extern an_apiComparator an_FPAA1_TrigComp_Comparator[1];

/* Component tables for F0 */
extern const an_apiCapacitor an_FPAA2_F0_Capacitor[8];

/* Component tables for F1 */
extern const an_apiCapacitor an_FPAA2_F1_Capacitor[8];

/* Component tables for FilterBilinear1 */
extern const an_apiCapacitor an_FPAA2_FilterBilinear1_Capacitor[3];

/* Component tables for GainInv1 */
extern const an_apiCapacitor an_FPAA2_GainInv1_Capacitor[4];

/* Component tables for LUT */
extern const an_apiCapacitor an_FPAA2_LUT_Capacitor[1];

/* Component tables for SlLvl */
extern const an_apiCapacitor an_FPAA2_SlLvl_Capacitor[4];

/* Component tables for Slicer */
extern an_apiComparator an_FPAA2_Slicer_Comparator[1];

/* Component tables for TrigComp */
extern an_apiComparator an_FPAA2_TrigComp_Comparator[1];

/* Component tables for F2 */
extern const an_apiCapacitor an_FPAA3_F2_Capacitor[8];

/* Component tables for F3 */
extern const an_apiCapacitor an_FPAA3_F3_Capacitor[8];

/* Component tables for FilterBilinear2 */
extern const an_apiCapacitor an_FPAA3_FilterBilinear2_Capacitor[3];

/* Component tables for GainInv2 */
extern const an_apiCapacitor an_FPAA3_GainInv2_Capacitor[4];

/* Component tables for LUT1 */
extern const an_apiCapacitor an_FPAA3_LUT1_Capacitor[1];

/* Component tables for SlLvl1 */
extern const an_apiCapacitor an_FPAA3_SlLvl1_Capacitor[4];

/* Component tables for Slicer1 */
extern an_apiComparator an_FPAA3_Slicer1_Comparator[1];

/* Component tables for TrigComp1 */
extern an_apiComparator an_FPAA3_TrigComp1_Comparator[1];

/* Component tables for F2 */
extern const an_apiCapacitor an_FPAA4_F2_Capacitor[8];

/* Component tables for F3 */
extern const an_apiCapacitor an_FPAA4_F3_Capacitor[8];

/* Component tables for FilterBilinear2 */
extern const an_apiCapacitor an_FPAA4_FilterBilinear2_Capacitor[3];

/* Component tables for GainInv2 */
extern const an_apiCapacitor an_FPAA4_GainInv2_Capacitor[4];

/* Component tables for LUT1 */
extern const an_apiCapacitor an_FPAA4_LUT1_Capacitor[1];

/* Component tables for SlLvl1 */
extern const an_apiCapacitor an_FPAA4_SlLvl1_Capacitor[4];

/* Component tables for Slicer1 */
extern an_apiComparator an_FPAA4_Slicer1_Comparator[1];

/* Component tables for TrigComp1 */
extern an_apiComparator an_FPAA4_TrigComp1_Comparator[1];

/* Component tables for F2 */
extern const an_apiCapacitor an_FPAA5_F2_Capacitor[8];

/* Component tables for F3 */
extern const an_apiCapacitor an_FPAA5_F3_Capacitor[8];

/* Component tables for FilterBilinear2 */
extern const an_apiCapacitor an_FPAA5_FilterBilinear2_Capacitor[3];

/* Component tables for GainInv2 */
extern const an_apiCapacitor an_FPAA5_GainInv2_Capacitor[4];

/* Component tables for LUT1 */
extern const an_apiCapacitor an_FPAA5_LUT1_Capacitor[1];

/* Component tables for SlLvl1 */
extern const an_apiCapacitor an_FPAA5_SlLvl1_Capacitor[4];

/* Component tables for Slicer1 */
extern an_apiComparator an_FPAA5_Slicer1_Comparator[1];

/* Component tables for TrigComp1 */
extern an_apiComparator an_FPAA5_TrigComp1_Comparator[1];

/* There is one of these tables for each programmable CAM. Each table  
maps the ID of a component to its ComponentFinder. */               
extern void* an_FPAA1_F0_Components[8];
extern void* an_FPAA1_F1_Components[8];
extern void* an_FPAA1_FilterBilinear1_Components[3];
extern void* an_FPAA1_GainInv1_Components[4];
extern void* an_FPAA1_LUT_Components[1];
extern void* an_FPAA1_SlLvl_Components[4];
extern void* an_FPAA1_Slicer_Components[1];
extern void* an_FPAA1_TrigComp_Components[1];
extern void* an_FPAA2_F0_Components[8];
extern void* an_FPAA2_F1_Components[8];
extern void* an_FPAA2_FilterBilinear1_Components[3];
extern void* an_FPAA2_GainInv1_Components[4];
extern void* an_FPAA2_LUT_Components[1];
extern void* an_FPAA2_SlLvl_Components[4];
extern void* an_FPAA2_Slicer_Components[1];
extern void* an_FPAA2_TrigComp_Components[1];
extern void* an_FPAA3_F2_Components[8];
extern void* an_FPAA3_F3_Components[8];
extern void* an_FPAA3_FilterBilinear2_Components[3];
extern void* an_FPAA3_GainInv2_Components[4];
extern void* an_FPAA3_LUT1_Components[1];
extern void* an_FPAA3_SlLvl1_Components[4];
extern void* an_FPAA3_Slicer1_Components[1];
extern void* an_FPAA3_TrigComp1_Components[1];
extern void* an_FPAA4_F2_Components[8];
extern void* an_FPAA4_F3_Components[8];
extern void* an_FPAA4_FilterBilinear2_Components[3];
extern void* an_FPAA4_GainInv2_Components[4];
extern void* an_FPAA4_LUT1_Components[1];
extern void* an_FPAA4_SlLvl1_Components[4];
extern void* an_FPAA4_Slicer1_Components[1];
extern void* an_FPAA4_TrigComp1_Components[1];
extern void* an_FPAA5_F2_Components[8];
extern void* an_FPAA5_F3_Components[8];
extern void* an_FPAA5_FilterBilinear2_Components[3];
extern void* an_FPAA5_GainInv2_Components[4];
extern void* an_FPAA5_LUT1_Components[1];
extern void* an_FPAA5_SlLvl1_Components[4];
extern void* an_FPAA5_Slicer1_Components[1];
extern void* an_FPAA5_TrigComp1_Components[1];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
extern void** an_apiCAMComponentData[an_apiCAMCount];

/* This array maps a chip ID to its clock powerup byte */           
extern an_Byte an_apiClockPowerByte[an_apiChipCount];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA1 */                                                       
extern short an_FPAA1_Clocks[12];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA2 */                                                       
extern short an_FPAA2_Clocks[12];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA3 */                                                       
extern short an_FPAA3_Clocks[12];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA4 */                                                       
extern short an_FPAA4_Clocks[12];

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA5 */                                                       
extern short an_FPAA5_Clocks[12];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's clock data. */                         
extern short* an_apiClockDivisorData[an_apiChipCount];

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's master clock frequency. */             
extern const long an_apiMasterClockData[an_apiChipCount];

/* Table to map module virtual clocks to actual chip clock for module  
F0 */                                                               
extern const an_ApexClockDivisor an_FPAA1_F0_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
F1 */                                                               
extern const an_ApexClockDivisor an_FPAA1_F1_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear1 */                                                  
extern const an_ApexClockDivisor an_FPAA1_FilterBilinear1_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
F0 */                                                               
extern const an_ApexClockDivisor an_FPAA2_F0_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
F1 */                                                               
extern const an_ApexClockDivisor an_FPAA2_F1_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear1 */                                                  
extern const an_ApexClockDivisor an_FPAA2_FilterBilinear1_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
F2 */                                                               
extern const an_ApexClockDivisor an_FPAA3_F2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
F3 */                                                               
extern const an_ApexClockDivisor an_FPAA3_F3_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
extern const an_ApexClockDivisor an_FPAA3_FilterBilinear2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
F2 */                                                               
extern const an_ApexClockDivisor an_FPAA4_F2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
F3 */                                                               
extern const an_ApexClockDivisor an_FPAA4_F3_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
extern const an_ApexClockDivisor an_FPAA4_FilterBilinear2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
F2 */                                                               
extern const an_ApexClockDivisor an_FPAA5_F2_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
F3 */                                                               
extern const an_ApexClockDivisor an_FPAA5_F3_CAMClocks[4];

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
extern const an_ApexClockDivisor an_FPAA5_FilterBilinear2_CAMClocks[4];

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the CAM's virtual clock mapping. */               
extern const an_ApexClockDivisor* an_apiCAMClockToApexChipClock[an_apiCAMCount];

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
     const an_Byte* an_GetPrimaryConfigData(an_Chip chip, int* count); 
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
     const an_Byte* an_GetResetData(an_Chip chip, int* count);      
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
     const an_Byte* an_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown); 
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
     const an_Byte* an_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
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
     void an_InitializeVortexReconfigData(an_Chip chip);            
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
     void an_InitializeApexReconfigData(an_Chip chip);              
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
     void an_ClearVortexReconfigData(an_Chip chip);                 
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
     void an_ClearApexReconfigData(an_Chip chip);                   
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
     void an_ShutdownVortexReconfigData(an_Chip chip);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_InitializeVortexReconfigData.    |
  |  an_InitializeVortexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_ShutdownApexReconfigData(an_Chip chip);                
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_InitializeApexReconfigData.      |
  |  an_InitializeApexReconfigData must be called again prior to   |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const an_Byte* an_GetVortexReconfigData(an_Chip chip, int* count); 
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
     const an_Byte* an_GetApexReconfigData(an_Chip chip, int* count); 
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
     void an_SetVortexReconfigControlFlags(an_Chip chip, an_VortexControlByte flags); 
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
     void an_SetApexReconfigControlFlags(an_Chip chip, an_ApexControlByte flags); 
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
     void an_SetApexReconfigControlFlagsNOP(an_Chip chip, an_ApexControlByte flags); 
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
     an_VortexControlByte an_GetVortexReconfigControlFlags(an_Chip chip); 
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
     an_ApexControlByte an_GetApexReconfigControlFlags(an_Chip chip); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

/********************************************************************\
 *                         Clock Functions                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                        GetClockDivisor                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     short an_GetClockDivisor(an_Chip chip, an_ClockDivisor divisor); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the current value of a clock divisor for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      GetApexClockDivisor                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     short an_GetApexClockDivisor(an_Chip chip, an_ApexClockDivisor divisor); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the current value of a clock divisor for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                         GetMasterClock                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     an_Frequency an_GetMasterClock(an_Chip chip);                  
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the frequency of the master clock in Hz for the chip. |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        SetClockDivisor                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_SetClockDivisor(an_Chip chip, an_ClockDivisor divisor, short value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Appends the bytes to the current reconfiguration data for the |
  |  chip to set the clock divisor to divisor. It is assumed that  |
  |  divisor is a valid clock divisor value. The change takes      |
  |  place immediately internally, meaning subsequent calls to     |
  |  an_GetClockDivisor for this chip and divisor will return the  |
  |  value set here. If divisor is equal to the current value of   |
  |  the clock divisor, then this function has no effect and no    |
  |  new bytes are appended to the reconfiguration data. After a   |
  |  reconfiguration with clocks is sent, it may be neccessary to  |
  |  call ClockUpdatesFinished. See the ClockUpdatesFinished       |
  |  documentation for more detail.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      SetApexClockDivisor                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_SetApexClockDivisor(an_Chip chip, an_ApexClockDivisor divisor, short value); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Appends the bytes to the current reconfiguration data for the |
  |  chip to set the clock divisor to divisor. It is assumed that  |
  |  divisor is a valid clock divisor value. The change takes      |
  |  place immediately internally, meaning subsequent calls to     |
  |  an_GetClockDivisor for this chip and divisor will return the  |
  |  value set here. If divisor is equal to the current value of   |
  |  the clock divisor, then this function has no effect and no    |
  |  new bytes are appended to the reconfiguration data. After a   |
  |  reconfiguration with clocks is sent, it may be neccessary to  |
  |  call ClockUpdatesFinished. See the ClockUpdatesFinished       |
  |  documentation for more detail.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     IncrementClockDivisor                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_IncrementClockDivisor(an_Chip chip, an_ClockDivisor divisor); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Appends bytes to the current reconfiguration data for the     |
  |  chip to increment the current clock divisor to the next valid |
  |  divisor. The change takes place immediately internally,       |
  |  meaning subsequent calls to an_GetClockDivisor for this chip  |
  |  and divisor will return the value set here. If the divisor is |
  |  already at its maximum value, this function has no effect,    |
  |  and no new bytes will be appended to the reconfiguration      |
  |  data. After a reconfiguration with clocks is sent, it may be  |
  |  neccessary to call ClockUpdatesFinished. See the              |
  |  ClockUpdatesFinished documentation for more detail.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   IncrementApexClockDivisor                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_IncrementApexClockDivisor(an_Chip chip, an_ApexClockDivisor divisor); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Appends bytes to the current reconfiguration data for the     |
  |  chip to increment the current clock divisor to the next valid |
  |  divisor. The change takes place immediately internally,       |
  |  meaning subsequent calls to an_GetClockDivisor for this chip  |
  |  and divisor will return the value set here. If the divisor is |
  |  already at its maximum value, this function has no effect,    |
  |  and no new bytes will be appended to the reconfiguration      |
  |  data. After a reconfiguration with clocks is sent, it may be  |
  |  neccessary to call ClockUpdatesFinished. See the              |
  |  ClockUpdatesFinished documentation for more detail.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     DecrementClockDivisor                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_DecrementClockDivisor(an_Chip chip, an_ClockDivisor divisor); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Appends bytes to the current reconfiguration data for the     |
  |  chip to decrement the current clock divisor to next lowest    |
  |  valid divisor. The change takes place immediately internally, |
  |  meaning subsequent calls to an_GetClockDivisor for this chip  |
  |  and divisor will return the value set here. If the divisor is |
  |  already at its lowest value, this function has no effect, and |
  |  no new bytes will be appended to the reconfiguration data.    |
  |  After a reconfiguration with clocks is sent, it may be        |
  |  neccessary to call ClockUpdatesFinished. See the              |
  |  ClockUpdatesFinished documentation for more detail.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                   DecrementApexClockDivisor                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_DecrementApexClockDivisor(an_Chip chip, an_ApexClockDivisor divisor); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Appends bytes to the current reconfiguration data for the     |
  |  chip to decrement the current clock divisor to next lowest    |
  |  valid divisor. The change takes place immediately internally, |
  |  meaning subsequent calls to an_GetClockDivisor for this chip  |
  |  and divisor will return the value set here. If the divisor is |
  |  already at its lowest value, this function has no effect, and |
  |  no new bytes will be appended to the reconfiguration data.    |
  |  After a reconfiguration with clocks is sent, it may be        |
  |  neccessary to call ClockUpdatesFinished. See the              |
  |  ClockUpdatesFinished documentation for more detail.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                      ClockUpdatesFinished                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_ClockUpdatesFinished(an_Chip chip);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function clears the Update_CLKS bit. It must be called   |
  |  after a configuration containing clock updates has been sent, |
  |  except if the next configuration to be sent will also have    |
  |  clock updates. The bit is set automatically by the C Code     |
  |  clock-setting functions, but must be turned off manually      |
  |  using this function. THIS FUNCTION SHOULD BE USED ONLY WITH   |
  |  ANADIGMVORTEX FPAAs DO NOT USE THIS FUNCTION WITH OTHER TYPES |
  |  OF FPAAs                                                      |
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
     //NEED TO TAKE WHICH PRESCALER WAS USED INTO ACCOUNT, i.e., an_ClockDivisor_PreScale
an_Frequency an_GetApexClockFrequency(an_CAM cam, an_CAMClock camClock); 
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
     void an_SetCapValue(an_CAM cam, an_Component capID, an_Byte value); 
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
     void an_SetApexComparator(an_CAM cam, an_Component compID, an_ComparatorMask compMask, an_Comparator values); 
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
     void an_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
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
     an_Byte an_AdjustCap(double dValue);                           
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
     void an_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2); 
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
     an_Byte an_FixedAdjustCap(an_Fixed fValue);                    
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
     void an_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count); 
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
     void an_SetApexCounterRollOver(an_CAM cam, an_Byte rollOver);  
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
     an_Fixed an_FloatToFixed(float fValue);                        
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
     an_Fixed an_IntToFixed(int value);                             
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
     int an_FixedToInt(an_Fixed fValue);                            
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
     float an_FixedToFloat(an_Fixed fValue);                        
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
     an_Fixed an_FixedAbs(an_Fixed fValue);                         
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
     an_Fixed an_FixedDivide(an_Fixed fLeft, an_Fixed fRight);      
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
     void an_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count); 
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

  /*--------------------------------------------------------------*\
  |                        SetUpdateClocks                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_SetUpdateClocks(an_Chip chip, an_Bool turnOn);         
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Ensures that the Update_CLKS bit is set to the desired value. |
  |  If the bit is already in the requested state, nothing is      |
  |  appended to the reconfiguration data. THIS FUNCTION SHOULD BE |
  |  USED ONLY WITH ANADIGMVORTEX FPAAs DO NOT USE THIS FUNCTION   |
  |  WITH OTHER TYPES OF FPAAs                                     |
  |                                                                |
  \*--------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* APICODE_H */
