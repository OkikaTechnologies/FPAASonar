#ifndef CAMCODE_H
#define CAMCODE_H

#include "ApiCode.h"

/********************************************************************\
*                      Dynamx Design Lab C Code                      *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.h                                              *
*  Circuit:   okika_us.okt                                           *
*  Generated: May 05, 2022:  01:38 PM                                *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2015 Okika. All rights reserved.           *
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
     void ot_CompSetHyst(ot_CAM cam, ot_Comparator NewHyst);        
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function controls the hysteresis of the Comparator.      |
  |                                                                |
  |                                                                |
  |  Instance Name       cam                 chip                  |
  |  ------------------------------------------------------------  |
  |  Comparator2         ot_FPAA1_Comparator2 ot_FPAA1             |
  |  Comparator3         ot_FPAA1_Comparator3 ot_FPAA1             |
  |  Comparator4         ot_FPAA2_Comparator4 ot_FPAA2             |
  |  Comparator5         ot_FPAA2_Comparator5 ot_FPAA2             |
  |  Comparator4         ot_FPAA3_Comparator4 ot_FPAA3             |
  |  Comparator5         ot_FPAA3_Comparator5 ot_FPAA3             |
  |  Comparator4         ot_FPAA4_Comparator4 ot_FPAA4             |
  |  Comparator5         ot_FPAA4_Comparator5 ot_FPAA4             |
  |  Comparator4         ot_FPAA5_Comparator4 ot_FPAA5             |
  |  Comparator5         ot_FPAA5_Comparator5 ot_FPAA5             |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     CompSetOutputPolarity                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_CompSetOutputPolarity(ot_CAM cam, ot_Comparator NewPol); 
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
  |  Comparator2         ot_FPAA1_Comparator2 ot_FPAA1             |
  |  Comparator3         ot_FPAA1_Comparator3 ot_FPAA1             |
  |  Comparator4         ot_FPAA2_Comparator4 ot_FPAA2             |
  |  Comparator5         ot_FPAA2_Comparator5 ot_FPAA2             |
  |  Comparator4         ot_FPAA3_Comparator4 ot_FPAA3             |
  |  Comparator5         ot_FPAA3_Comparator5 ot_FPAA3             |
  |  Comparator4         ot_FPAA4_Comparator4 ot_FPAA4             |
  |  Comparator5         ot_FPAA4_Comparator5 ot_FPAA4             |
  |  Comparator4         ot_FPAA5_Comparator4 ot_FPAA5             |
  |  Comparator5         ot_FPAA5_Comparator5 ot_FPAA5             |
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
     double ot_setFilterLowPass(ot_CAM cam, double Fo, double G);   
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
  |  FilterBilinear1     ot_FPAA1_FilterBilinear1 ot_FPAA1           |
  |  FilterBilinear2     ot_FPAA2_FilterBilinear2 ot_FPAA2           |
  |  FilterBilinear2     ot_FPAA3_FilterBilinear2 ot_FPAA3           |
  |  FilterBilinear2     ot_FPAA4_FilterBilinear2 ot_FPAA4           |
  |  FilterBilinear2     ot_FPAA5_FilterBilinear2 ot_FPAA5           |
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
     void ot_SetBQBandPassCaps(ot_CAM cam, ot_Byte C2, ot_Byte C3, ot_Byte C4, ot_Byte CB1, ot_Byte CB2, ot_Byte CA1, ot_Byte CA2, ot_Byte Cp); 
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
  |  FilterBiquad1       ot_FPAA1_FilterBiquad1 ot_FPAA1           |
  |  FilterBiquad2       ot_FPAA1_FilterBiquad2 ot_FPAA1           |
  |  FilterBiquad3       ot_FPAA2_FilterBiquad3 ot_FPAA2           |
  |  FilterBiquad4       ot_FPAA2_FilterBiquad4 ot_FPAA2           |
  |  FilterBiquad3       ot_FPAA3_FilterBiquad3 ot_FPAA3           |
  |  FilterBiquad4       ot_FPAA3_FilterBiquad4 ot_FPAA3           |
  |  FilterBiquad3       ot_FPAA4_FilterBiquad3 ot_FPAA4           |
  |  FilterBiquad4       ot_FPAA4_FilterBiquad4 ot_FPAA4           |
  |  FilterBiquad3       ot_FPAA5_FilterBiquad3 ot_FPAA5           |
  |  FilterBiquad4       ot_FPAA5_FilterBiquad4 ot_FPAA5           |
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
     void ot_SetBQBandPassFilterI(ot_CAM cam, double Fo, double G, double Q); 
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
  |  FilterBiquad1       ot_FPAA1_FilterBiquad1 ot_FPAA1           |
  |  FilterBiquad2       ot_FPAA1_FilterBiquad2 ot_FPAA1           |
  |  FilterBiquad3       ot_FPAA2_FilterBiquad3 ot_FPAA2           |
  |  FilterBiquad4       ot_FPAA2_FilterBiquad4 ot_FPAA2           |
  |  FilterBiquad3       ot_FPAA3_FilterBiquad3 ot_FPAA3           |
  |  FilterBiquad4       ot_FPAA3_FilterBiquad4 ot_FPAA3           |
  |  FilterBiquad3       ot_FPAA4_FilterBiquad3 ot_FPAA4           |
  |  FilterBiquad4       ot_FPAA4_FilterBiquad4 ot_FPAA4           |
  |  FilterBiquad3       ot_FPAA5_FilterBiquad3 ot_FPAA5           |
  |  FilterBiquad4       ot_FPAA5_FilterBiquad4 ot_FPAA5           |
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
     double ot_fixed_setGainInv(ot_CAM cam, double G);              
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
  |  GainInv1            ot_FPAA1_GainInv1   ot_FPAA1              |
  |  GainInv2            ot_FPAA1_GainInv2   ot_FPAA1              |
  |  GainInv3            ot_FPAA2_GainInv3   ot_FPAA2              |
  |  GainInv4            ot_FPAA2_GainInv4   ot_FPAA2              |
  |  GainInv3            ot_FPAA3_GainInv3   ot_FPAA3              |
  |  GainInv4            ot_FPAA3_GainInv4   ot_FPAA3              |
  |  GainInv3            ot_FPAA4_GainInv3   ot_FPAA4              |
  |  GainInv4            ot_FPAA4_GainInv4   ot_FPAA4              |
  |  GainInv3            ot_FPAA5_GainInv3   ot_FPAA5              |
  |  GainInv4            ot_FPAA5_GainInv4   ot_FPAA5              |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                           setGainInv                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     double ot_setGainInv(ot_CAM cam, double G);                    
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
  |  GainInv1            ot_FPAA1_GainInv1   ot_FPAA1              |
  |  GainInv2            ot_FPAA1_GainInv2   ot_FPAA1              |
  |  GainInv3            ot_FPAA2_GainInv3   ot_FPAA2              |
  |  GainInv4            ot_FPAA2_GainInv4   ot_FPAA2              |
  |  GainInv3            ot_FPAA3_GainInv3   ot_FPAA3              |
  |  GainInv4            ot_FPAA3_GainInv4   ot_FPAA3              |
  |  GainInv3            ot_FPAA4_GainInv3   ot_FPAA4              |
  |  GainInv4            ot_FPAA4_GainInv4   ot_FPAA4              |
  |  GainInv3            ot_FPAA5_GainInv3   ot_FPAA5              |
  |  GainInv4            ot_FPAA5_GainInv4   ot_FPAA5              |
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
     void ot_changeLUTReset(ot_CAM cam, ot_Byte ResetValue);        
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
  |  PeriodicWave1       ot_FPAA1_PeriodicWave1 ot_FPAA1           |
  |  PeriodicWave2       ot_FPAA2_PeriodicWave2 ot_FPAA2           |
  |  PeriodicWave2       ot_FPAA3_PeriodicWave2 ot_FPAA3           |
  |  PeriodicWave2       ot_FPAA4_PeriodicWave2 ot_FPAA4           |
  |  PeriodicWave2       ot_FPAA5_PeriodicWave2 ot_FPAA5           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                        setWaveformTable                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     void ot_setWaveformTable(ot_CAM cam, double* Values, int Size, ot_Byte ResetValue); 
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
  |  PeriodicWave1       ot_FPAA1_PeriodicWave1 ot_FPAA1           |
  |  PeriodicWave2       ot_FPAA2_PeriodicWave2 ot_FPAA2           |
  |  PeriodicWave2       ot_FPAA3_PeriodicWave2 ot_FPAA3           |
  |  PeriodicWave2       ot_FPAA4_PeriodicWave2 ot_FPAA4           |
  |  PeriodicWave2       ot_FPAA5_PeriodicWave2 ot_FPAA5           |
  |                                                                |
  \*--------------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif /* CAMCODE_H */
