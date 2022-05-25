#include "CAMCode.h"

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
*  Circuit:   lut_uss_bilinear-5.ad2                                 *
*  Generated: August 20, 2020:  12:02 PM                             *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

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

     void an_CompSetHyst(an_CAM cam, an_Comparator NewHyst)
     {
        an_SetApexComparator(cam, an_AnadigmApex_Comparator_comp1, an_ComparatorMask_Hysteresis, NewHyst);
     }

  /*--------------------------------------------------------------*\
  |                     CompSetOutputPolarity                      |
  +----------------------------------------------------------------+
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

     void an_CompSetOutputPolarity(an_CAM cam, an_Comparator NewPol)
     {
        if ((NewPol == an_Comparator_Apex_NonInverted) || (NewPol == an_Comparator_Apex_Inverted))
           an_SetApexComparator(cam, an_AnadigmApex_Comparator_comp1, an_ComparatorMask_Polarity, NewPol);
     }


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

     double an_setFilterLowPass(an_CAM cam, double Fo, double G)
     {
        static const double an_Pi = 3.1415926535897931;
        short dCin, dCout;
        short dCint = 255;
        short Cin, Cint, Cout;
        double aG, aomega, aFo;
        long clocka = an_GetApexClockFrequency(cam, an_CAMClock_ClockA);
        // Prewarp omega (Fo) into omega_a with Bilinear Transform
        double omega = 2.0 * clocka * tan(an_Pi*Fo*1000.0/clocka);
        double alpha = (clocka/omega - 0.5);
        double err = 99999;
        double bestErr = 999;
        
        while (dCint>0)
        {
           dCout = an_AdjustCap(dCint/alpha);
           dCin = an_AdjustCap(1.0*G*dCout);
           aG = 1.0*dCin/dCout;
           aomega = 2.0 * dCout *clocka/(2.0 * dCint + dCout);
           err = aG/G + G/aG + aomega/omega + omega/aomega;
           if (err < bestErr)
           {
              bestErr = err;
              Cout = dCout;
              Cint = dCint;
              Cin = dCin;
           }
           dCint--;
        }
        aomega = 2.0 * Cout * clocka/(2.0 * Cint + Cout);
        aFo = 0.001*clocka * atan(0.5 * aomega / clocka) / an_Pi;
        an_SetCapValue(cam, an_AnadigmApex_FilterBilinear_Cin,Cin);
        an_SetCapValue(cam, an_AnadigmApex_FilterBilinear_Cout,Cout);
        an_SetCapValue(cam, an_AnadigmApex_FilterBilinear_Cint,Cint);
        return aFo;
     }


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

     void an_SetBQBandPassCaps(an_CAM cam, an_Byte C2, an_Byte C3, an_Byte C4, an_Byte CB1, an_Byte CB2, an_Byte CA1, an_Byte CA2, an_Byte Cp)
     {
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_C2, C2);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_C3, C3);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_C4, C4);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_CB1, CB1);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_CB2, CB2);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_CA1, CA1);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_CA2, CA2);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_Cp, Cp);
     }

 /*================================================================*\
 )                    Corner Frequency, Gain & Q                    (
 \*================================================================*/

  /*--------------------------------------------------------------*\
  |                      SetBQBandPassFilterI                      |
  +----------------------------------------------------------------+
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

     void an_SetBQBandPassFilterI(an_CAM cam, double Fo, double G, double Q)
     {
        static const double an_Pi = 3.1415926535897931;
        static const double an_TwoPi = 6.2831853071795862;
        static const int maxCA = 510;
        static const int maxCB = 510;
        
        int 	dCp, dC2, dC3, dC4, dCA, dCB;
        int CA1, CA2, CB1, CB2;
        int 	Cp=0, C2=0, C3=0, C4=0, CA=0, CB=0;	//final low Q biquad values
        double	aFoa, aFoa2, aQ, aG0;	//achieved parameter values
        long clocka = an_GetApexClockFrequency(cam, an_CAMClock_ClockA);
        double	FCdiv2PI = clocka/an_TwoPi;
        
        //Limits in this module are extremely complicated due to the interrelation of parameters
        
        double G0 = G;
        
        //Prewarp Fo (kHz) into Foa (Hz)
        double 	Wo  = 2.0*clocka*sin(an_Pi*Fo*1000.0/clocka);
        double  Foa = Wo /an_TwoPi;
        
        // calculate normalized capacitor values
        double nC2 = Wo / clocka;
        
                 //First calculate for low Q circuit
        double  err = 99999, bestErr1 = 9999;
        double bestErr2 = 9999;
        
        dCB = maxCB;
        while(dCB>0)
        {	
           dC3 = an_AdjustCap(nC2*dCB);
           dC4 = an_AdjustCap(1.0*dCB*nC2/Q);
           dCp = an_AdjustCap(G0 * dC4);
           
           aFoa2 = FCdiv2PI*dC3/dCB;
        
           aQ = 1.0*dCB*nC2/dC4;
           
           aG0 = 1.0* dCp/dC4;
        
           err = aQ/Q + Q/aQ + aFoa2/Foa + Foa/aFoa2 + aG0/G0 + G0/aG0;
        
           if (err < bestErr1)
           {
              bestErr1 = err;
              C3 = dC3;
              C4 = dC4;
              Cp = dCp;
              CB = dCB;
           }
              dCB--;
        }
        err = 99999;
        dCA = maxCA;
        while(dCA>0)
        {
           dC2 = an_AdjustCap(nC2*nC2*CB*dCA/C3);
        
           aFoa = FCdiv2PI*sqrt(1.0*dC2*C3/dCA/CB);
        
           err = aFoa/Foa + Foa/aFoa;
        
           if (err < bestErr2)
           {
              bestErr2 = err;
              C2 = dC2;
              CA = dCA;
           }
              dCA--;
        }
        
        CA1 = CA/2;
        CA2 = CA - CA1;
        
        CB1 = CB/2;
        CB2 = CB - CB1;
        
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_C2, C2);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_C3, C3);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_C4, C4);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_CA1, CA1);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_CA2, CA2);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_CB1, CB1);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_CB2, CB2);
        an_SetCapValue(cam, an_AnadigmApex_FilterBiquad_Cp, Cp);
        
     }


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

     double an_fixed_setGainInv(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_FixedChooseCapRatio(G, &cap1, &cap2);
        
        an_SetCapValue(cam, an_AnadigmApex_GainInv_Cin,cap1);
        an_SetCapValue(cam, an_AnadigmApex_GainInv_aCin,cap1);
        an_SetCapValue(cam, an_AnadigmApex_GainInv_Cout,cap2);
        an_SetCapValue(cam, an_AnadigmApex_GainInv_aCout,cap2);
        return an_FixedToFloat(an_FixedDivide(an_IntToFixed(cap1),an_IntToFixed(cap2)));
     }

  /*--------------------------------------------------------------*\
  |                           setGainInv                           |
  +----------------------------------------------------------------+
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

     double an_setGainInv(an_CAM cam, double G)
     {
        an_Byte cap1;
        an_Byte cap2;
        
        an_ChooseCapRatio(G, &cap1, &cap2);
        
        an_SetCapValue(cam, an_AnadigmApex_GainInv_Cin,cap1);
        an_SetCapValue(cam, an_AnadigmApex_GainInv_aCin,cap1);
        an_SetCapValue(cam, an_AnadigmApex_GainInv_Cout,cap2);
        an_SetCapValue(cam, an_AnadigmApex_GainInv_aCout,cap2);
        
        return (double) cap1 / (double) cap2;
     }


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

     void an_changeLUTReset(an_CAM cam, an_Byte ResetValue)
     {
        an_SetApexCounterRollOver(cam, ResetValue);
     }

  /*--------------------------------------------------------------*\
  |                        setWaveformTable                        |
  +----------------------------------------------------------------+
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

     void an_setWaveformTable(an_CAM cam, double* Values, int Size, an_Byte ResetValue)
     {
        an_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int Clut = 128, Cout = 128;
        
        if (Size > 256) Size = 256;
        for (loop = 0; loop < Size; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0)
           Cout = an_AdjustCap(127.0 * 2.0 / maxV);
        
        for (loop = 0; loop < Size; loop++)
        {
           Clut = an_AdjustCap(128.0 + Values[loop] * Cout / 2.0);
           LUTTable[loop] = Clut;
        }
        an_LoadLUT(cam, LUTTable, 0, Size);
        an_SetCapValue(cam, an_AnadigmApex_PeriodicWave_Cout, Cout);
        
        an_SetApexCounterRollOver(cam, ResetValue);
     }


