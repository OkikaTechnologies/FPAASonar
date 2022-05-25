#ifndef CAMCODE_H
#define CAMCODE_H

#include "ApiCode.h"

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   lut_uss_bilinear-5.ad2                                 *
*  Generated: August 20, 2020:  12:02 PM                             *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/*##################################################################*\
#                                                                    #
#                           Comparator.cam                           #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                  Hysteresis and Output Polarity                  (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                          CompSetHyst                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_CompSetHyst(an_CAM cam, an_Comparator NewHyst);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function controls the hysteresis of the Comparator.      |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Slicer              an_FPAA1_Slicer     an_FPAA1              |
  |  TrigComp            an_FPAA1_TrigComp   an_FPAA1              |
  |  Slicer              an_FPAA2_Slicer     an_FPAA2              |
  |  TrigComp            an_FPAA2_TrigComp   an_FPAA2              |
  |  Slicer1             an_FPAA3_Slicer1    an_FPAA3              |
  |  TrigComp1           an_FPAA3_TrigComp1  an_FPAA3              |
  |  Slicer1             an_FPAA4_Slicer1    an_FPAA4              |
  |  TrigComp1           an_FPAA4_TrigComp1  an_FPAA4              |
  |  Slicer1             an_FPAA5_Slicer1    an_FPAA5              |
  |  TrigComp1           an_FPAA5_TrigComp1  an_FPAA5              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     CompSetOutputPolarity                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_CompSetOutputPolarity(an_CAM cam, an_Comparator NewPol); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function controls the output polarity of the Comparator. |
  |                                                                |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Slicer              an_FPAA1_Slicer     an_FPAA1              |
  |  TrigComp            an_FPAA1_TrigComp   an_FPAA1              |
  |  Slicer              an_FPAA2_Slicer     an_FPAA2              |
  |  TrigComp            an_FPAA2_TrigComp   an_FPAA2              |
  |  Slicer1             an_FPAA3_Slicer1    an_FPAA3              |
  |  TrigComp1           an_FPAA3_TrigComp1  an_FPAA3              |
  |  Slicer1             an_FPAA4_Slicer1    an_FPAA4              |
  |  TrigComp1           an_FPAA4_TrigComp1  an_FPAA4              |
  |  Slicer1             an_FPAA5_Slicer1    an_FPAA5              |
  |  TrigComp1           an_FPAA5_TrigComp1  an_FPAA5              |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                         FilterBilinear.cam                         #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                    Gain and Corner Frequency                     (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                        setFilterLowPass                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_setFilterLowPass(an_CAM cam, double Fo, double G);   
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating-point method for setting the corner frequency |
  |  [kHz] and gain of a low-pass filter.                          |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  FilterBilinear1     an_FPAA1_FilterBilinear1 an_FPAA1           |
  |  FilterBilinear1     an_FPAA2_FilterBilinear1 an_FPAA2           |
  |  FilterBilinear2     an_FPAA3_FilterBilinear2 an_FPAA3           |
  |  FilterBilinear2     an_FPAA4_FilterBilinear2 an_FPAA4           |
  |  FilterBilinear2     an_FPAA5_FilterBilinear2 an_FPAA5           |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                          FilterBiquad.cam                          #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                       BandPass Capacitors                        (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                       SetBQBandPassCaps                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_SetBQBandPassCaps(an_CAM cam, an_Byte C2, an_Byte C3, an_Byte C4, an_Byte CB1, an_Byte CB2, an_Byte CA1, an_Byte CA2, an_Byte Cp); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function directly sets the capacitors for this CAM. It   |
  |  does not perform any validation of the data for correctness.  |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  F0                  an_FPAA1_F0         an_FPAA1              |
  |  F1                  an_FPAA1_F1         an_FPAA1              |
  |  F0                  an_FPAA2_F0         an_FPAA2              |
  |  F1                  an_FPAA2_F1         an_FPAA2              |
  |  F2                  an_FPAA3_F2         an_FPAA3              |
  |  F3                  an_FPAA3_F3         an_FPAA3              |
  |  F2                  an_FPAA4_F2         an_FPAA4              |
  |  F3                  an_FPAA4_F3         an_FPAA4              |
  |  F2                  an_FPAA5_F2         an_FPAA5              |
  |  F3                  an_FPAA5_F3         an_FPAA5              |
  |                                                                |
  \*--------------------------------------------------------------*/

 /*================================================================*\
 )                    Corner Frequency, Gain & Q                    (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                      SetBQBandPassFilterI                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_SetBQBandPassFilterI(an_CAM cam, double Fo, double G, double Q); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function controls the center frequency [kHz], gain, and  |
  |  Q of this filter.                                             |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  F0                  an_FPAA1_F0         an_FPAA1              |
  |  F1                  an_FPAA1_F1         an_FPAA1              |
  |  F0                  an_FPAA2_F0         an_FPAA2              |
  |  F1                  an_FPAA2_F1         an_FPAA2              |
  |  F2                  an_FPAA3_F2         an_FPAA3              |
  |  F3                  an_FPAA3_F3         an_FPAA3              |
  |  F2                  an_FPAA4_F2         an_FPAA4              |
  |  F3                  an_FPAA4_F3         an_FPAA4              |
  |  F2                  an_FPAA5_F2         an_FPAA5              |
  |  F3                  an_FPAA5_F3         an_FPAA5              |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                            GainInv.cam                             #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                               Gain                               (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                        fixed_setGainInv                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_fixed_setGainInv(an_CAM cam, double G);              
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full fixed-point method for setting the gain of the module. |
  |  It accepts floating-point inputs and returns a floating-point |
  |  result.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainInv1            an_FPAA1_GainInv1   an_FPAA1              |
  |  SlLvl               an_FPAA1_SlLvl      an_FPAA1              |
  |  GainInv1            an_FPAA2_GainInv1   an_FPAA2              |
  |  SlLvl               an_FPAA2_SlLvl      an_FPAA2              |
  |  GainInv2            an_FPAA3_GainInv2   an_FPAA3              |
  |  SlLvl1              an_FPAA3_SlLvl1     an_FPAA3              |
  |  GainInv2            an_FPAA4_GainInv2   an_FPAA4              |
  |  SlLvl1              an_FPAA4_SlLvl1     an_FPAA4              |
  |  GainInv2            an_FPAA5_GainInv2   an_FPAA5              |
  |  SlLvl1              an_FPAA5_SlLvl1     an_FPAA5              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           setGainInv                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double an_setGainInv(an_CAM cam, double G);                    
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  A full floating point method for setting the gain of this     |
  |  module.                                                       |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  GainInv1            an_FPAA1_GainInv1   an_FPAA1              |
  |  SlLvl               an_FPAA1_SlLvl      an_FPAA1              |
  |  GainInv1            an_FPAA2_GainInv1   an_FPAA2              |
  |  SlLvl               an_FPAA2_SlLvl      an_FPAA2              |
  |  GainInv2            an_FPAA3_GainInv2   an_FPAA3              |
  |  SlLvl1              an_FPAA3_SlLvl1     an_FPAA3              |
  |  GainInv2            an_FPAA4_GainInv2   an_FPAA4              |
  |  SlLvl1              an_FPAA4_SlLvl1     an_FPAA4              |
  |  GainInv2            an_FPAA5_GainInv2   an_FPAA5              |
  |  SlLvl1              an_FPAA5_SlLvl1     an_FPAA5              |
  |                                                                |
  \*--------------------------------------------------------------*/


/*##################################################################*\
#                                                                    #
#                          PeriodicWave.cam                          #
#                                                                    #
\*##################################################################*/

 /*================================================================*\
 )                         Waveform Control                         (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                         changeLUTReset                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_changeLUTReset(an_CAM cam, an_Byte ResetValue);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function allows a change in the counter reset value for  |
  |  this module. It allows for varying table operations without   |
  |  having to reload the table.                                   |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  LUT                 an_FPAA1_LUT        an_FPAA1              |
  |  LUT                 an_FPAA2_LUT        an_FPAA2              |
  |  LUT1                an_FPAA3_LUT1       an_FPAA3              |
  |  LUT1                an_FPAA4_LUT1       an_FPAA4              |
  |  LUT1                an_FPAA5_LUT1       an_FPAA5              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        setWaveformTable                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void an_setWaveformTable(an_CAM cam, double* Values, int Size, an_Byte ResetValue); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function sets up the Waveform Generator values for       |
  |  operation over time and reset value.                          |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  LUT                 an_FPAA1_LUT        an_FPAA1              |
  |  LUT                 an_FPAA2_LUT        an_FPAA2              |
  |  LUT1                an_FPAA3_LUT1       an_FPAA3              |
  |  LUT1                an_FPAA4_LUT1       an_FPAA4              |
  |  LUT1                an_FPAA5_LUT1       an_FPAA5              |
  |                                                                |
  \*--------------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif /* CAMCODE_H */
