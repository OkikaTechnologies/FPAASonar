#include "CAMCode.h"

/********************************************************************\
*                      Dynamx Design Lab C Code                      *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      CAMCode.c                                              *
*  Circuit:   okika_us.okt                                           *
*  Generated: May 05, 2022:  01:38 PM                                *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2015 Okika. All rights reserved.           *
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

     void ot_CompSetHyst(ot_CAM cam, ot_Comparator NewHyst)
     {
        ot_SetApexComparator(cam, ot_okikaApex_Comparator_comp1, ot_ComparatorMask_Hysteresis, NewHyst);
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

     void ot_CompSetOutputPolarity(ot_CAM cam, ot_Comparator NewPol)
     {
        if ((NewPol == ot_Comparator_Apex_NonInverted) || (NewPol == ot_Comparator_Apex_Inverted))
           ot_SetApexComparator(cam, ot_okikaApex_Comparator_comp1, ot_ComparatorMask_Polarity, NewPol);
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
  |  FilterBilinear1     ot_FPAA1_FilterBilinear1 ot_FPAA1           |
  |  FilterBilinear2     ot_FPAA2_FilterBilinear2 ot_FPAA2           |
  |  FilterBilinear2     ot_FPAA3_FilterBilinear2 ot_FPAA3           |
  |  FilterBilinear2     ot_FPAA4_FilterBilinear2 ot_FPAA4           |
  |  FilterBilinear2     ot_FPAA5_FilterBilinear2 ot_FPAA5           |
  |                                                                |
  \*--------------------------------------------------------------*/

     double ot_setFilterLowPass(ot_CAM cam, double Fo, double G)
     {
        static const double an_Pi = 3.1415926535897931;
        short dCin, dCout;
        short dCint = 255;
        short Cin, Cint, Cout;
        double aG, aomega, aFo;
        long clocka = ot_GetApexClockFrequency(cam, ot_CAMClock_ClockA);
        // Prewarp omega (Fo) into omega_a with Bilinear Transform
        double omega = 2.0 * clocka * tan(an_Pi*Fo*1000.0/clocka);
        double alpha = (clocka/omega - 0.5);
        double err = 99999;
        double bestErr = 999;
        
        while (dCint>0)
        {
           dCout = ot_AdjustCap(dCint/alpha);
           dCin = ot_AdjustCap(1.0*G*dCout);
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
        ot_SetCapValue(cam, ot_okikaApex_FilterBilinear_Cin,Cin);
        ot_SetCapValue(cam, ot_okikaApex_FilterBilinear_Cout,Cout);
        ot_SetCapValue(cam, ot_okikaApex_FilterBilinear_Cint,Cint);
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

     void ot_SetBQBandPassCaps(ot_CAM cam, ot_Byte C2, ot_Byte C3, ot_Byte C4, ot_Byte CB1, ot_Byte CB2, ot_Byte CA1, ot_Byte CA2, ot_Byte Cp)
     {
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_C2, C2);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_C3, C3);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_C4, C4);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_CB1, CB1);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_CB2, CB2);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_CA1, CA1);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_CA2, CA2);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_Cp, Cp);
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

     void ot_SetBQBandPassFilterI(ot_CAM cam, double Fo, double G, double Q)
     {
        static const double an_Pi = 3.1415926535897931;
        static const double an_TwoPi = 6.2831853071795862;
        static const int maxCA = 510;
        static const int maxCB = 510;
        
        int 	dCp, dC2, dC3, dC4, dCA, dCB;
        int CA1, CA2, CB1, CB2;
        int 	Cp=0, C2=0, C3=0, C4=0, CA=0, CB=0;	//final low Q biquad values
        double	aFoa, aFoa2, aQ, aG0;	//achieved parameter values
        long clocka = ot_GetApexClockFrequency(cam, ot_CAMClock_ClockA);
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
           dC3 = ot_AdjustCap(nC2*dCB);
           dC4 = ot_AdjustCap(1.0*dCB*nC2/Q);
           dCp = ot_AdjustCap(G0 * dC4);
           
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
           dC2 = ot_AdjustCap(nC2*nC2*CB*dCA/C3);
        
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
        
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_C2, C2);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_C3, C3);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_C4, C4);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_CA1, CA1);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_CA2, CA2);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_CB1, CB1);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_CB2, CB2);
        ot_SetCapValue(cam, ot_okikaApex_FilterBiquad_Cp, Cp);
        
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

     double ot_fixed_setGainInv(ot_CAM cam, double G)
     {
        ot_Byte cap1;
        ot_Byte cap2;
        
        ot_FixedChooseCapRatio(G, &cap1, &cap2);
        
        ot_SetCapValue(cam, ot_okikaApex_GainInv_Cin,cap1);
        ot_SetCapValue(cam, ot_okikaApex_GainInv_aCin,cap1);
        ot_SetCapValue(cam, ot_okikaApex_GainInv_Cout,cap2);
        ot_SetCapValue(cam, ot_okikaApex_GainInv_aCout,cap2);
        return ot_FixedToFloat(ot_FixedDivide(ot_IntToFixed(cap1),ot_IntToFixed(cap2)));
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

     double ot_setGainInv(ot_CAM cam, double G)
     {
        ot_Byte cap1;
        ot_Byte cap2;
        
        ot_ChooseCapRatio(G, &cap1, &cap2);
        
        ot_SetCapValue(cam, ot_okikaApex_GainInv_Cin,cap1);
        ot_SetCapValue(cam, ot_okikaApex_GainInv_aCin,cap1);
        ot_SetCapValue(cam, ot_okikaApex_GainInv_Cout,cap2);
        ot_SetCapValue(cam, ot_okikaApex_GainInv_aCout,cap2);
        
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
  |  PeriodicWave1       ot_FPAA1_PeriodicWave1 ot_FPAA1           |
  |  PeriodicWave2       ot_FPAA2_PeriodicWave2 ot_FPAA2           |
  |  PeriodicWave2       ot_FPAA3_PeriodicWave2 ot_FPAA3           |
  |  PeriodicWave2       ot_FPAA4_PeriodicWave2 ot_FPAA4           |
  |  PeriodicWave2       ot_FPAA5_PeriodicWave2 ot_FPAA5           |
  |                                                                |
  \*--------------------------------------------------------------*/

     void ot_changeLUTReset(ot_CAM cam, ot_Byte ResetValue)
     {
        ot_SetApexCounterRollOver(cam, ResetValue);
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
  |  PeriodicWave1       ot_FPAA1_PeriodicWave1 ot_FPAA1           |
  |  PeriodicWave2       ot_FPAA2_PeriodicWave2 ot_FPAA2           |
  |  PeriodicWave2       ot_FPAA3_PeriodicWave2 ot_FPAA3           |
  |  PeriodicWave2       ot_FPAA4_PeriodicWave2 ot_FPAA4           |
  |  PeriodicWave2       ot_FPAA5_PeriodicWave2 ot_FPAA5           |
  |                                                                |
  \*--------------------------------------------------------------*/

     void ot_setWaveformTable(ot_CAM cam, double* Values, int Size, ot_Byte ResetValue)
     {
        ot_Byte LUTTable[256];
        int loop;
        double maxV = 0.0;
        int Clut = 128, Cout = 128;
        
        if (Size > 256) Size = 256;
        for (loop = 0; loop < Size; loop++)
           if (maxV < fabs(Values[loop]))
              maxV = fabs(Values[loop]);
        if (maxV > 0)
           Cout = ot_AdjustCap(127.0 * 2.0 / maxV);
        
        for (loop = 0; loop < Size; loop++)
        {
           Clut = ot_AdjustCap(128.0 + Values[loop] * Cout / 2.0);
           LUTTable[loop] = Clut;
        }
        ot_LoadLUT(cam, LUTTable, 0, Size);
        ot_SetCapValue(cam, ot_okikaApex_PeriodicWave_Cout, Cout);
        
        ot_SetApexCounterRollOver(cam, ResetValue);
     }


