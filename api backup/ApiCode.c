#include "ApiCode.h"

/********************************************************************\
*                      AnadigmDesigner2 C Code                       *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
*  Circuit:   lut_uss_bilinear-5.ad2                                 *
*  Generated: August 20, 2020:  12:02 PM                             *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2002 Anadigm. All rights reserved.         *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const an_Byte an_apiAddress1[an_apiChipCount] =
{
   0x01,                /* an_FPAA1: 00000001 */
   0x01,                /* an_FPAA2: 00000001 */
   0x01,                /* an_FPAA3: 00000001 */
   0x01,                /* an_FPAA4: 00000001 */
   0x01                 /* an_FPAA5: 00000001 */
};

/* This is the initial full configuration stream for FPAA1. */
const an_Byte an_FPAA1_PrimaryConfigInfo[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0xB7, /* JTAG0     */
   0x20, /* JTAG1     */
   0x01, /* JTAG2     */
   0x00, /* JTAG3     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC4, /* Byte address:  4 */
   0x00, /* Bank address:  0 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x04,  0x0A,  0x00,  0x02,  0x65,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCE, /* Byte address: 14 */
   0x00, /* Bank address:  0 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x51,  0x00,  0x00,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x22,  0x00,  0x00,  0x02,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x05,  0x02,  0x40,  0x5C,  0xFF,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0x02,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC5, /* Byte address:  5 */
   0x02, /* Bank address:  2 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0x80,  0x20,  0x01,  0x00,  0x00,  0x08,  0x00,  0x00,  
   0x08,  0x00,  0x00,  0x40,  0x00,  0x5E,  0x03,  0x08,  
   0x08,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xB9,  0x0C,  0x0C,  0x11,  0x11,  0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCE, /* Byte address: 14 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD4, /* Byte address: 20 */
   0x03, /* Bank address:  3 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x01,  0x12,  0x01,  0x82,  0x01,  0x13,  0x01,  0x81,  
   0x01,  0x19,  0x01,  0x81,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x04, /* Bank address:  4 */
   0x22, /* Byte count:   34 */

   /* Data bytes for block */
   0x80,  0x00,  0x01,  0x07,  0x01,  0x00,  0x00,  0x20,  
   0x00,  0x20,  0x01,  0x13,  0x01,  0x82,  0x00,  0x05,  
   0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x00,  0x90,  
   0x00,  0x10,  0xFF,  0x55,  0xFF,  0x80,  0xFF,  0xFF,  
   0xFF,  0xFF,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x05, /* Bank address:  5 */
   0x14, /* Byte count:   20 */

   /* Data bytes for block */
   0x10,  0x08,  0x00,  0x00,  0x20,  0x02,  0x28,  0x02,  
   0x14,  0x02,  0x82,  0x01,  0x13,  0x01,  0x81,  0x01,  
   0x15,  0x01,  0x81,  0xFC,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x06, /* Bank address:  6 */
   0x22, /* Byte count:   34 */

   /* Data bytes for block */
   0x02,  0x00,  0x01,  0x67,  0x01,  0x00,  0x02,  0x12,  
   0x02,  0x82,  0x02,  0x15,  0x02,  0x82,  0x00,  0x05,  
   0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x00,  0x50,  
   0x00,  0x10,  0x46,  0x46,  0x0D,  0x09,  0x82,  0x94,  
   0x94,  0x13,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x07, /* Bank address:  7 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x1A,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x08, /* Bank address:  8 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x31,  0x01,  0x82,  0x00,  
   0x05,  0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  
   0x12,  0x01,  0x81,  0x46,  0x46,  0x0D,  0x09,  0x82,  
   0x94,  0x94,  0x13,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x09, /* Bank address:  9 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x1C,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x0A, /* Bank address: 10 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x31,  0x01,  0x82,  0x00,  
   0x05,  0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  
   0x12,  0x01,  0x81,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x80, /* Byte address:  0 */
   0x10, /* Bank address: 16 */
   0x00, /* Byte count:   256 */

   /* Data bytes for block */
   0x80,  0x90,  0xA0,  0xAF,  0xBD,  0xCB,  0xD7,  0xE2,  
   0xEC,  0xF3,  0xF9,  0xFD,  0xFF,  0xFF,  0xFD,  0xF9,  
   0xF3,  0xEC,  0xE2,  0xD7,  0xCB,  0xBD,  0xAF,  0xA0,  
   0x90,  0x80,  0x70,  0x60,  0x51,  0x43,  0x35,  0x29,  
   0x1E,  0x14,  0x0D,  0x07,  0x03,  0x01,  0x01,  0x03,  
   0x07,  0x0D,  0x14,  0x1E,  0x29,  0x35,  0x43,  0x51,  
   0x60,  0x70,  0x80,  0x90,  0xA0,  0xAF,  0xBD,  0xCB,  
   0xD7,  0xE2,  0xEC,  0xF3,  0xF9,  0xFD,  0xFF,  0xFF,  
   0xFD,  0xF9,  0xF3,  0xEC,  0xE2,  0xD7,  0xCB,  0xBD,  
   0xAF,  0xA0,  0x90,  0x80,  0x70,  0x60,  0x51,  0x43,  
   0x35,  0x29,  0x1E,  0x14,  0x0D,  0x07,  0x03,  0x01,  
   0x01,  0x03,  0x07,  0x0D,  0x14,  0x1E,  0x29,  0x35,  
   0x43,  0x51,  0x60,  0x70,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  
   0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to its primary configuration data. */                
const an_apiPrimaryConfigInfo an_apiPrimaryConfigData[an_apiChipCount] =
{
   /* FPAA1 */
   {
      an_FPAA1_PrimaryConfigInfo,   /* data */
      558,                          /* length */
   },

   /* FPAA2 */
   {
      (an_Byte*) an_apiInvalid,     /* data */
      an_apiInvalid,                /* length */
   },

   /* FPAA3 */
   {
      (an_Byte*) an_apiInvalid,     /* data */
      an_apiInvalid,                /* length */
   },

   /* FPAA4 */
   {
      (an_Byte*) an_apiInvalid,     /* data */
      an_apiInvalid,                /* length */
   },

   /* FPAA5 */
   {
      (an_Byte*) an_apiInvalid,     /* data */
      an_apiInvalid                 /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const an_Byte an_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA1 */
an_apiReconfigInfo an_FPAA1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA2 */
an_apiReconfigInfo an_FPAA2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA3 */
an_apiReconfigInfo an_FPAA3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA4 */
an_apiReconfigInfo an_FPAA4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA5 */
an_apiReconfigInfo an_FPAA5_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
an_apiReconfigInfo* an_apiReconfigData[an_apiChipCount] =
{
   &an_FPAA1_ReconfigInfo,        /* FPAA1 */
   &an_FPAA2_ReconfigInfo,        /* FPAA2 */
   &an_FPAA3_ReconfigInfo,        /* FPAA3 */
   &an_FPAA4_ReconfigInfo,        /* FPAA4 */
   &an_FPAA5_ReconfigInfo         /* FPAA5 */
};

/* There is one of these buffers for each programmable chip. */     
an_Byte an_FPAA1_ReconfigBuffer[64] = {0};         /* FPAA1 */
an_Byte an_FPAA2_ReconfigBuffer[64] = {0};         /* FPAA2 */
an_Byte an_FPAA3_ReconfigBuffer[64] = {0};         /* FPAA3 */
an_Byte an_FPAA4_ReconfigBuffer[64] = {0};         /* FPAA4 */
an_Byte an_FPAA5_ReconfigBuffer[64] = {0};         /* FPAA5 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
an_Byte* an_apiReconfigBuffer[an_apiChipCount] =
{
   an_FPAA1_ReconfigBuffer,       /* FPAA1 */
   an_FPAA2_ReconfigBuffer,       /* FPAA2 */
   an_FPAA3_ReconfigBuffer,       /* FPAA3 */
   an_FPAA4_ReconfigBuffer,       /* FPAA4 */
   an_FPAA5_ReconfigBuffer        /* FPAA5 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const an_Byte an_apiChipFromCAM[an_apiCAMCount] =
{
   an_FPAA1,            /* "an_FPAA1_F0" in chip "FPAA1" */
   an_FPAA1,            /* "an_FPAA1_F1" in chip "FPAA1" */
   an_FPAA1,            /* "an_FPAA1_FilterBilinear1" in chip "FPAA1" */
   an_FPAA1,            /* "an_FPAA1_GainInv1" in chip "FPAA1" */
   an_FPAA1,            /* "an_FPAA1_LUT" in chip "FPAA1" */
   an_FPAA1,            /* "an_FPAA1_SlLvl" in chip "FPAA1" */
   an_FPAA1,            /* "an_FPAA1_Slicer" in chip "FPAA1" */
   an_FPAA1,            /* "an_FPAA1_TrigComp" in chip "FPAA1" */
   an_FPAA2,            /* "an_FPAA2_F0" in chip "FPAA2" */
   an_FPAA2,            /* "an_FPAA2_F1" in chip "FPAA2" */
   an_FPAA2,            /* "an_FPAA2_FilterBilinear1" in chip "FPAA2" */
   an_FPAA2,            /* "an_FPAA2_GainInv1" in chip "FPAA2" */
   an_FPAA2,            /* "an_FPAA2_LUT" in chip "FPAA2" */
   an_FPAA2,            /* "an_FPAA2_SlLvl" in chip "FPAA2" */
   an_FPAA2,            /* "an_FPAA2_Slicer" in chip "FPAA2" */
   an_FPAA2,            /* "an_FPAA2_TrigComp" in chip "FPAA2" */
   an_FPAA3,            /* "an_FPAA3_F2" in chip "FPAA3" */
   an_FPAA3,            /* "an_FPAA3_F3" in chip "FPAA3" */
   an_FPAA3,            /* "an_FPAA3_FilterBilinear2" in chip "FPAA3" */
   an_FPAA3,            /* "an_FPAA3_GainInv2" in chip "FPAA3" */
   an_FPAA3,            /* "an_FPAA3_LUT1" in chip "FPAA3" */
   an_FPAA3,            /* "an_FPAA3_SlLvl1" in chip "FPAA3" */
   an_FPAA3,            /* "an_FPAA3_Slicer1" in chip "FPAA3" */
   an_FPAA3,            /* "an_FPAA3_TrigComp1" in chip "FPAA3" */
   an_FPAA4,            /* "an_FPAA4_F2" in chip "FPAA4" */
   an_FPAA4,            /* "an_FPAA4_F3" in chip "FPAA4" */
   an_FPAA4,            /* "an_FPAA4_FilterBilinear2" in chip "FPAA4" */
   an_FPAA4,            /* "an_FPAA4_GainInv2" in chip "FPAA4" */
   an_FPAA4,            /* "an_FPAA4_LUT1" in chip "FPAA4" */
   an_FPAA4,            /* "an_FPAA4_SlLvl1" in chip "FPAA4" */
   an_FPAA4,            /* "an_FPAA4_Slicer1" in chip "FPAA4" */
   an_FPAA4,            /* "an_FPAA4_TrigComp1" in chip "FPAA4" */
   an_FPAA5,            /* "an_FPAA5_F2" in chip "FPAA5" */
   an_FPAA5,            /* "an_FPAA5_F3" in chip "FPAA5" */
   an_FPAA5,            /* "an_FPAA5_FilterBilinear2" in chip "FPAA5" */
   an_FPAA5,            /* "an_FPAA5_GainInv2" in chip "FPAA5" */
   an_FPAA5,            /* "an_FPAA5_LUT1" in chip "FPAA5" */
   an_FPAA5,            /* "an_FPAA5_SlLvl1" in chip "FPAA5" */
   an_FPAA5,            /* "an_FPAA5_Slicer1" in chip "FPAA5" */
   an_FPAA5             /* "an_FPAA5_TrigComp1" in chip "FPAA5" */
};

/* Component data table for the apiCapacitor's of F0. */
extern const an_apiCapacitor an_FPAA1_F0_Capacitor[8] = 
{
   /* C2    */ { 0x07, 0x07, }, /* 7, 7 */
   /* C3    */ { 0x07, 0x03, }, /* 7, 3 */
   /* C4    */ { 0x07, 0x02, }, /* 7, 2 */
   /* CA1   */ { 0x07, 0x06, }, /* 7, 6 */
   /* CA2   */ { 0x07, 0x05, }, /* 7, 5 */
   /* CB1   */ { 0x07, 0x01, }, /* 7, 1 */
   /* CB2   */ { 0x07, 0x00, }, /* 7, 0 */
   /* Cp    */ { 0x07, 0x04  }  /* 7, 4 */
};

/* Component data table for the apiCapacitor's of F1. */
extern const an_apiCapacitor an_FPAA1_F1_Capacitor[8] = 
{
   /* C2    */ { 0x09, 0x07, }, /* 9, 7 */
   /* C3    */ { 0x09, 0x03, }, /* 9, 3 */
   /* C4    */ { 0x09, 0x02, }, /* 9, 2 */
   /* CA1   */ { 0x09, 0x06, }, /* 9, 6 */
   /* CA2   */ { 0x09, 0x05, }, /* 9, 5 */
   /* CB1   */ { 0x09, 0x01, }, /* 9, 1 */
   /* CB2   */ { 0x09, 0x00, }, /* 9, 0 */
   /* Cp    */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of FilterBilinear1. */
extern const an_apiCapacitor an_FPAA1_FilterBilinear1_Capacitor[3] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cint  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of GainInv1. */
extern const an_apiCapacitor an_FPAA1_GainInv1_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCin  */ { 0x03, 0x07, }, /* 3, 7 */
   /* aCout */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of LUT. */
extern const an_apiCapacitor an_FPAA1_LUT_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x01  }  /* 5, 1 */
};

/* Component data table for the apiCapacitor's of SlLvl. */
extern const an_apiCapacitor an_FPAA1_SlLvl_Capacitor[4] = 
{
   /* Cin   */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x04, }, /* 5, 4 */
   /* aCin  */ { 0x05, 0x07, }, /* 5, 7 */
   /* aCout */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiComparator's of Slicer. */
extern an_apiComparator an_FPAA1_Slicer_Comparator[1] = 
{
   /* comp1 */
   {
      0x06, /* bank:    6 */
      0x09, /* byteNum: 9 */
      0x000167 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of TrigComp. */
extern an_apiComparator an_FPAA1_TrigComp_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000107 /* currentValue */
   } 
};

/* Component data table for the apiCapacitor's of F0. */
extern const an_apiCapacitor an_FPAA2_F0_Capacitor[8] = 
{
   /* C2    */ { 0x07, 0x07, }, /* 7, 7 */
   /* C3    */ { 0x07, 0x03, }, /* 7, 3 */
   /* C4    */ { 0x07, 0x02, }, /* 7, 2 */
   /* CA1   */ { 0x07, 0x06, }, /* 7, 6 */
   /* CA2   */ { 0x07, 0x05, }, /* 7, 5 */
   /* CB1   */ { 0x07, 0x01, }, /* 7, 1 */
   /* CB2   */ { 0x07, 0x00, }, /* 7, 0 */
   /* Cp    */ { 0x07, 0x04  }  /* 7, 4 */
};

/* Component data table for the apiCapacitor's of F1. */
extern const an_apiCapacitor an_FPAA2_F1_Capacitor[8] = 
{
   /* C2    */ { 0x09, 0x07, }, /* 9, 7 */
   /* C3    */ { 0x09, 0x03, }, /* 9, 3 */
   /* C4    */ { 0x09, 0x02, }, /* 9, 2 */
   /* CA1   */ { 0x09, 0x06, }, /* 9, 6 */
   /* CA2   */ { 0x09, 0x05, }, /* 9, 5 */
   /* CB1   */ { 0x09, 0x01, }, /* 9, 1 */
   /* CB2   */ { 0x09, 0x00, }, /* 9, 0 */
   /* Cp    */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of FilterBilinear1. */
extern const an_apiCapacitor an_FPAA2_FilterBilinear1_Capacitor[3] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cint  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of GainInv1. */
extern const an_apiCapacitor an_FPAA2_GainInv1_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCin  */ { 0x03, 0x07, }, /* 3, 7 */
   /* aCout */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of LUT. */
extern const an_apiCapacitor an_FPAA2_LUT_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x01  }  /* 5, 1 */
};

/* Component data table for the apiCapacitor's of SlLvl. */
extern const an_apiCapacitor an_FPAA2_SlLvl_Capacitor[4] = 
{
   /* Cin   */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x04, }, /* 5, 4 */
   /* aCin  */ { 0x05, 0x07, }, /* 5, 7 */
   /* aCout */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiComparator's of Slicer. */
extern an_apiComparator an_FPAA2_Slicer_Comparator[1] = 
{
   /* comp1 */
   {
      0x06, /* bank:    6 */
      0x09, /* byteNum: 9 */
      0x000167 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of TrigComp. */
extern an_apiComparator an_FPAA2_TrigComp_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000147 /* currentValue */
   } 
};

/* Component data table for the apiCapacitor's of F2. */
extern const an_apiCapacitor an_FPAA3_F2_Capacitor[8] = 
{
   /* C2    */ { 0x09, 0x07, }, /* 9, 7 */
   /* C3    */ { 0x09, 0x03, }, /* 9, 3 */
   /* C4    */ { 0x09, 0x02, }, /* 9, 2 */
   /* CA1   */ { 0x09, 0x06, }, /* 9, 6 */
   /* CA2   */ { 0x09, 0x05, }, /* 9, 5 */
   /* CB1   */ { 0x09, 0x01, }, /* 9, 1 */
   /* CB2   */ { 0x09, 0x00, }, /* 9, 0 */
   /* Cp    */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of F3. */
extern const an_apiCapacitor an_FPAA3_F3_Capacitor[8] = 
{
   /* C2    */ { 0x07, 0x07, }, /* 7, 7 */
   /* C3    */ { 0x07, 0x03, }, /* 7, 3 */
   /* C4    */ { 0x07, 0x02, }, /* 7, 2 */
   /* CA1   */ { 0x07, 0x06, }, /* 7, 6 */
   /* CA2   */ { 0x07, 0x05, }, /* 7, 5 */
   /* CB1   */ { 0x07, 0x01, }, /* 7, 1 */
   /* CB2   */ { 0x07, 0x00, }, /* 7, 0 */
   /* Cp    */ { 0x07, 0x04  }  /* 7, 4 */
};

/* Component data table for the apiCapacitor's of FilterBilinear2. */
extern const an_apiCapacitor an_FPAA3_FilterBilinear2_Capacitor[3] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cint  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of GainInv2. */
extern const an_apiCapacitor an_FPAA3_GainInv2_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCin  */ { 0x03, 0x07, }, /* 3, 7 */
   /* aCout */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of LUT1. */
extern const an_apiCapacitor an_FPAA3_LUT1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x01  }  /* 5, 1 */
};

/* Component data table for the apiCapacitor's of SlLvl1. */
extern const an_apiCapacitor an_FPAA3_SlLvl1_Capacitor[4] = 
{
   /* Cin   */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x04, }, /* 5, 4 */
   /* aCin  */ { 0x05, 0x07, }, /* 5, 7 */
   /* aCout */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiComparator's of Slicer1. */
extern an_apiComparator an_FPAA3_Slicer1_Comparator[1] = 
{
   /* comp1 */
   {
      0x06, /* bank:    6 */
      0x09, /* byteNum: 9 */
      0x000167 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of TrigComp1. */
extern an_apiComparator an_FPAA3_TrigComp1_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000147 /* currentValue */
   } 
};

/* Component data table for the apiCapacitor's of F2. */
extern const an_apiCapacitor an_FPAA4_F2_Capacitor[8] = 
{
   /* C2    */ { 0x09, 0x07, }, /* 9, 7 */
   /* C3    */ { 0x09, 0x03, }, /* 9, 3 */
   /* C4    */ { 0x09, 0x02, }, /* 9, 2 */
   /* CA1   */ { 0x09, 0x06, }, /* 9, 6 */
   /* CA2   */ { 0x09, 0x05, }, /* 9, 5 */
   /* CB1   */ { 0x09, 0x01, }, /* 9, 1 */
   /* CB2   */ { 0x09, 0x00, }, /* 9, 0 */
   /* Cp    */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of F3. */
extern const an_apiCapacitor an_FPAA4_F3_Capacitor[8] = 
{
   /* C2    */ { 0x07, 0x07, }, /* 7, 7 */
   /* C3    */ { 0x07, 0x03, }, /* 7, 3 */
   /* C4    */ { 0x07, 0x02, }, /* 7, 2 */
   /* CA1   */ { 0x07, 0x06, }, /* 7, 6 */
   /* CA2   */ { 0x07, 0x05, }, /* 7, 5 */
   /* CB1   */ { 0x07, 0x01, }, /* 7, 1 */
   /* CB2   */ { 0x07, 0x00, }, /* 7, 0 */
   /* Cp    */ { 0x07, 0x04  }  /* 7, 4 */
};

/* Component data table for the apiCapacitor's of FilterBilinear2. */
extern const an_apiCapacitor an_FPAA4_FilterBilinear2_Capacitor[3] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cint  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of GainInv2. */
extern const an_apiCapacitor an_FPAA4_GainInv2_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCin  */ { 0x03, 0x07, }, /* 3, 7 */
   /* aCout */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of LUT1. */
extern const an_apiCapacitor an_FPAA4_LUT1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x01  }  /* 5, 1 */
};

/* Component data table for the apiCapacitor's of SlLvl1. */
extern const an_apiCapacitor an_FPAA4_SlLvl1_Capacitor[4] = 
{
   /* Cin   */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x04, }, /* 5, 4 */
   /* aCin  */ { 0x05, 0x07, }, /* 5, 7 */
   /* aCout */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiComparator's of Slicer1. */
extern an_apiComparator an_FPAA4_Slicer1_Comparator[1] = 
{
   /* comp1 */
   {
      0x06, /* bank:    6 */
      0x09, /* byteNum: 9 */
      0x000167 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of TrigComp1. */
extern an_apiComparator an_FPAA4_TrigComp1_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000147 /* currentValue */
   } 
};

/* Component data table for the apiCapacitor's of F2. */
extern const an_apiCapacitor an_FPAA5_F2_Capacitor[8] = 
{
   /* C2    */ { 0x09, 0x07, }, /* 9, 7 */
   /* C3    */ { 0x09, 0x03, }, /* 9, 3 */
   /* C4    */ { 0x09, 0x02, }, /* 9, 2 */
   /* CA1   */ { 0x09, 0x06, }, /* 9, 6 */
   /* CA2   */ { 0x09, 0x05, }, /* 9, 5 */
   /* CB1   */ { 0x09, 0x01, }, /* 9, 1 */
   /* CB2   */ { 0x09, 0x00, }, /* 9, 0 */
   /* Cp    */ { 0x09, 0x04  }  /* 9, 4 */
};

/* Component data table for the apiCapacitor's of F3. */
extern const an_apiCapacitor an_FPAA5_F3_Capacitor[8] = 
{
   /* C2    */ { 0x07, 0x07, }, /* 7, 7 */
   /* C3    */ { 0x07, 0x03, }, /* 7, 3 */
   /* C4    */ { 0x07, 0x02, }, /* 7, 2 */
   /* CA1   */ { 0x07, 0x06, }, /* 7, 6 */
   /* CA2   */ { 0x07, 0x05, }, /* 7, 5 */
   /* CB1   */ { 0x07, 0x01, }, /* 7, 1 */
   /* CB2   */ { 0x07, 0x00, }, /* 7, 0 */
   /* Cp    */ { 0x07, 0x04  }  /* 7, 4 */
};

/* Component data table for the apiCapacitor's of FilterBilinear2. */
extern const an_apiCapacitor an_FPAA5_FilterBilinear2_Capacitor[3] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cint  */ { 0x03, 0x01, }, /* 3, 1 */
   /* Cout  */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of GainInv2. */
extern const an_apiCapacitor an_FPAA5_GainInv2_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x06, }, /* 3, 6 */
   /* Cout  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCin  */ { 0x03, 0x07, }, /* 3, 7 */
   /* aCout */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiCapacitor's of LUT1. */
extern const an_apiCapacitor an_FPAA5_LUT1_Capacitor[1] = 
{
   /* Cout  */ { 0x05, 0x01  }  /* 5, 1 */
};

/* Component data table for the apiCapacitor's of SlLvl1. */
extern const an_apiCapacitor an_FPAA5_SlLvl1_Capacitor[4] = 
{
   /* Cin   */ { 0x05, 0x06, }, /* 5, 6 */
   /* Cout  */ { 0x05, 0x04, }, /* 5, 4 */
   /* aCin  */ { 0x05, 0x07, }, /* 5, 7 */
   /* aCout */ { 0x05, 0x05  }  /* 5, 5 */
};

/* Component data table for the apiComparator's of Slicer1. */
extern an_apiComparator an_FPAA5_Slicer1_Comparator[1] = 
{
   /* comp1 */
   {
      0x06, /* bank:    6 */
      0x09, /* byteNum: 9 */
      0x000167 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of TrigComp1. */
extern an_apiComparator an_FPAA5_TrigComp1_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000147 /* currentValue */
   } 
};

/* Component map for F0 */
void* an_FPAA1_F0_Components[8] = 
{
   (void*) &an_FPAA1_F0_Capacitor[0],     /* C2 */
   (void*) &an_FPAA1_F0_Capacitor[1],     /* C3 */
   (void*) &an_FPAA1_F0_Capacitor[2],     /* C4 */
   (void*) &an_FPAA1_F0_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA1_F0_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA1_F0_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA1_F0_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA1_F0_Capacitor[7]      /* Cp */
};

/* Component map for F1 */
void* an_FPAA1_F1_Components[8] = 
{
   (void*) &an_FPAA1_F1_Capacitor[0],     /* C2 */
   (void*) &an_FPAA1_F1_Capacitor[1],     /* C3 */
   (void*) &an_FPAA1_F1_Capacitor[2],     /* C4 */
   (void*) &an_FPAA1_F1_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA1_F1_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA1_F1_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA1_F1_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA1_F1_Capacitor[7]      /* Cp */
};

/* Component map for FilterBilinear1 */
void* an_FPAA1_FilterBilinear1_Components[3] = 
{
   (void*) &an_FPAA1_FilterBilinear1_Capacitor[0],  /* Cin */
   (void*) &an_FPAA1_FilterBilinear1_Capacitor[1],  /* Cint */
   (void*) &an_FPAA1_FilterBilinear1_Capacitor[2]  /* Cout */
};

/* Component map for GainInv1 */
void* an_FPAA1_GainInv1_Components[4] = 
{
   (void*) &an_FPAA1_GainInv1_Capacitor[0],  /* Cin */
   (void*) &an_FPAA1_GainInv1_Capacitor[1],  /* Cout */
   (void*) &an_FPAA1_GainInv1_Capacitor[2],  /* aCin */
   (void*) &an_FPAA1_GainInv1_Capacitor[3]  /* aCout */
};

/* Component map for LUT */
void* an_FPAA1_LUT_Components[1] = 
{
   (void*) &an_FPAA1_LUT_Capacitor[0]     /* Cout */
};

/* Component map for SlLvl */
void* an_FPAA1_SlLvl_Components[4] = 
{
   (void*) &an_FPAA1_SlLvl_Capacitor[0],  /* Cin */
   (void*) &an_FPAA1_SlLvl_Capacitor[1],  /* Cout */
   (void*) &an_FPAA1_SlLvl_Capacitor[2],  /* aCin */
   (void*) &an_FPAA1_SlLvl_Capacitor[3]   /* aCout */
};

/* Component map for Slicer */
void* an_FPAA1_Slicer_Components[1] = 
{
   (void*) &an_FPAA1_Slicer_Comparator[0]  /* comp1 */
};

/* Component map for TrigComp */
void* an_FPAA1_TrigComp_Components[1] = 
{
   (void*) &an_FPAA1_TrigComp_Comparator[0]  /* comp1 */
};

/* Component map for F0 */
void* an_FPAA2_F0_Components[8] = 
{
   (void*) &an_FPAA2_F0_Capacitor[0],     /* C2 */
   (void*) &an_FPAA2_F0_Capacitor[1],     /* C3 */
   (void*) &an_FPAA2_F0_Capacitor[2],     /* C4 */
   (void*) &an_FPAA2_F0_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA2_F0_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA2_F0_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA2_F0_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA2_F0_Capacitor[7]      /* Cp */
};

/* Component map for F1 */
void* an_FPAA2_F1_Components[8] = 
{
   (void*) &an_FPAA2_F1_Capacitor[0],     /* C2 */
   (void*) &an_FPAA2_F1_Capacitor[1],     /* C3 */
   (void*) &an_FPAA2_F1_Capacitor[2],     /* C4 */
   (void*) &an_FPAA2_F1_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA2_F1_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA2_F1_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA2_F1_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA2_F1_Capacitor[7]      /* Cp */
};

/* Component map for FilterBilinear1 */
void* an_FPAA2_FilterBilinear1_Components[3] = 
{
   (void*) &an_FPAA2_FilterBilinear1_Capacitor[0],  /* Cin */
   (void*) &an_FPAA2_FilterBilinear1_Capacitor[1],  /* Cint */
   (void*) &an_FPAA2_FilterBilinear1_Capacitor[2]  /* Cout */
};

/* Component map for GainInv1 */
void* an_FPAA2_GainInv1_Components[4] = 
{
   (void*) &an_FPAA2_GainInv1_Capacitor[0],  /* Cin */
   (void*) &an_FPAA2_GainInv1_Capacitor[1],  /* Cout */
   (void*) &an_FPAA2_GainInv1_Capacitor[2],  /* aCin */
   (void*) &an_FPAA2_GainInv1_Capacitor[3]  /* aCout */
};

/* Component map for LUT */
void* an_FPAA2_LUT_Components[1] = 
{
   (void*) &an_FPAA2_LUT_Capacitor[0]     /* Cout */
};

/* Component map for SlLvl */
void* an_FPAA2_SlLvl_Components[4] = 
{
   (void*) &an_FPAA2_SlLvl_Capacitor[0],  /* Cin */
   (void*) &an_FPAA2_SlLvl_Capacitor[1],  /* Cout */
   (void*) &an_FPAA2_SlLvl_Capacitor[2],  /* aCin */
   (void*) &an_FPAA2_SlLvl_Capacitor[3]   /* aCout */
};

/* Component map for Slicer */
void* an_FPAA2_Slicer_Components[1] = 
{
   (void*) &an_FPAA2_Slicer_Comparator[0]  /* comp1 */
};

/* Component map for TrigComp */
void* an_FPAA2_TrigComp_Components[1] = 
{
   (void*) &an_FPAA2_TrigComp_Comparator[0]  /* comp1 */
};

/* Component map for F2 */
void* an_FPAA3_F2_Components[8] = 
{
   (void*) &an_FPAA3_F2_Capacitor[0],     /* C2 */
   (void*) &an_FPAA3_F2_Capacitor[1],     /* C3 */
   (void*) &an_FPAA3_F2_Capacitor[2],     /* C4 */
   (void*) &an_FPAA3_F2_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA3_F2_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA3_F2_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA3_F2_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA3_F2_Capacitor[7]      /* Cp */
};

/* Component map for F3 */
void* an_FPAA3_F3_Components[8] = 
{
   (void*) &an_FPAA3_F3_Capacitor[0],     /* C2 */
   (void*) &an_FPAA3_F3_Capacitor[1],     /* C3 */
   (void*) &an_FPAA3_F3_Capacitor[2],     /* C4 */
   (void*) &an_FPAA3_F3_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA3_F3_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA3_F3_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA3_F3_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA3_F3_Capacitor[7]      /* Cp */
};

/* Component map for FilterBilinear2 */
void* an_FPAA3_FilterBilinear2_Components[3] = 
{
   (void*) &an_FPAA3_FilterBilinear2_Capacitor[0],  /* Cin */
   (void*) &an_FPAA3_FilterBilinear2_Capacitor[1],  /* Cint */
   (void*) &an_FPAA3_FilterBilinear2_Capacitor[2]  /* Cout */
};

/* Component map for GainInv2 */
void* an_FPAA3_GainInv2_Components[4] = 
{
   (void*) &an_FPAA3_GainInv2_Capacitor[0],  /* Cin */
   (void*) &an_FPAA3_GainInv2_Capacitor[1],  /* Cout */
   (void*) &an_FPAA3_GainInv2_Capacitor[2],  /* aCin */
   (void*) &an_FPAA3_GainInv2_Capacitor[3]  /* aCout */
};

/* Component map for LUT1 */
void* an_FPAA3_LUT1_Components[1] = 
{
   (void*) &an_FPAA3_LUT1_Capacitor[0]    /* Cout */
};

/* Component map for SlLvl1 */
void* an_FPAA3_SlLvl1_Components[4] = 
{
   (void*) &an_FPAA3_SlLvl1_Capacitor[0],  /* Cin */
   (void*) &an_FPAA3_SlLvl1_Capacitor[1],  /* Cout */
   (void*) &an_FPAA3_SlLvl1_Capacitor[2],  /* aCin */
   (void*) &an_FPAA3_SlLvl1_Capacitor[3]  /* aCout */
};

/* Component map for Slicer1 */
void* an_FPAA3_Slicer1_Components[1] = 
{
   (void*) &an_FPAA3_Slicer1_Comparator[0]  /* comp1 */
};

/* Component map for TrigComp1 */
void* an_FPAA3_TrigComp1_Components[1] = 
{
   (void*) &an_FPAA3_TrigComp1_Comparator[0]  /* comp1 */
};

/* Component map for F2 */
void* an_FPAA4_F2_Components[8] = 
{
   (void*) &an_FPAA4_F2_Capacitor[0],     /* C2 */
   (void*) &an_FPAA4_F2_Capacitor[1],     /* C3 */
   (void*) &an_FPAA4_F2_Capacitor[2],     /* C4 */
   (void*) &an_FPAA4_F2_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA4_F2_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA4_F2_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA4_F2_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA4_F2_Capacitor[7]      /* Cp */
};

/* Component map for F3 */
void* an_FPAA4_F3_Components[8] = 
{
   (void*) &an_FPAA4_F3_Capacitor[0],     /* C2 */
   (void*) &an_FPAA4_F3_Capacitor[1],     /* C3 */
   (void*) &an_FPAA4_F3_Capacitor[2],     /* C4 */
   (void*) &an_FPAA4_F3_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA4_F3_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA4_F3_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA4_F3_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA4_F3_Capacitor[7]      /* Cp */
};

/* Component map for FilterBilinear2 */
void* an_FPAA4_FilterBilinear2_Components[3] = 
{
   (void*) &an_FPAA4_FilterBilinear2_Capacitor[0],  /* Cin */
   (void*) &an_FPAA4_FilterBilinear2_Capacitor[1],  /* Cint */
   (void*) &an_FPAA4_FilterBilinear2_Capacitor[2]  /* Cout */
};

/* Component map for GainInv2 */
void* an_FPAA4_GainInv2_Components[4] = 
{
   (void*) &an_FPAA4_GainInv2_Capacitor[0],  /* Cin */
   (void*) &an_FPAA4_GainInv2_Capacitor[1],  /* Cout */
   (void*) &an_FPAA4_GainInv2_Capacitor[2],  /* aCin */
   (void*) &an_FPAA4_GainInv2_Capacitor[3]  /* aCout */
};

/* Component map for LUT1 */
void* an_FPAA4_LUT1_Components[1] = 
{
   (void*) &an_FPAA4_LUT1_Capacitor[0]    /* Cout */
};

/* Component map for SlLvl1 */
void* an_FPAA4_SlLvl1_Components[4] = 
{
   (void*) &an_FPAA4_SlLvl1_Capacitor[0],  /* Cin */
   (void*) &an_FPAA4_SlLvl1_Capacitor[1],  /* Cout */
   (void*) &an_FPAA4_SlLvl1_Capacitor[2],  /* aCin */
   (void*) &an_FPAA4_SlLvl1_Capacitor[3]  /* aCout */
};

/* Component map for Slicer1 */
void* an_FPAA4_Slicer1_Components[1] = 
{
   (void*) &an_FPAA4_Slicer1_Comparator[0]  /* comp1 */
};

/* Component map for TrigComp1 */
void* an_FPAA4_TrigComp1_Components[1] = 
{
   (void*) &an_FPAA4_TrigComp1_Comparator[0]  /* comp1 */
};

/* Component map for F2 */
void* an_FPAA5_F2_Components[8] = 
{
   (void*) &an_FPAA5_F2_Capacitor[0],     /* C2 */
   (void*) &an_FPAA5_F2_Capacitor[1],     /* C3 */
   (void*) &an_FPAA5_F2_Capacitor[2],     /* C4 */
   (void*) &an_FPAA5_F2_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA5_F2_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA5_F2_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA5_F2_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA5_F2_Capacitor[7]      /* Cp */
};

/* Component map for F3 */
void* an_FPAA5_F3_Components[8] = 
{
   (void*) &an_FPAA5_F3_Capacitor[0],     /* C2 */
   (void*) &an_FPAA5_F3_Capacitor[1],     /* C3 */
   (void*) &an_FPAA5_F3_Capacitor[2],     /* C4 */
   (void*) &an_FPAA5_F3_Capacitor[3],     /* CA1 */
   (void*) &an_FPAA5_F3_Capacitor[4],     /* CA2 */
   (void*) &an_FPAA5_F3_Capacitor[5],     /* CB1 */
   (void*) &an_FPAA5_F3_Capacitor[6],     /* CB2 */
   (void*) &an_FPAA5_F3_Capacitor[7]      /* Cp */
};

/* Component map for FilterBilinear2 */
void* an_FPAA5_FilterBilinear2_Components[3] = 
{
   (void*) &an_FPAA5_FilterBilinear2_Capacitor[0],  /* Cin */
   (void*) &an_FPAA5_FilterBilinear2_Capacitor[1],  /* Cint */
   (void*) &an_FPAA5_FilterBilinear2_Capacitor[2]  /* Cout */
};

/* Component map for GainInv2 */
void* an_FPAA5_GainInv2_Components[4] = 
{
   (void*) &an_FPAA5_GainInv2_Capacitor[0],  /* Cin */
   (void*) &an_FPAA5_GainInv2_Capacitor[1],  /* Cout */
   (void*) &an_FPAA5_GainInv2_Capacitor[2],  /* aCin */
   (void*) &an_FPAA5_GainInv2_Capacitor[3]  /* aCout */
};

/* Component map for LUT1 */
void* an_FPAA5_LUT1_Components[1] = 
{
   (void*) &an_FPAA5_LUT1_Capacitor[0]    /* Cout */
};

/* Component map for SlLvl1 */
void* an_FPAA5_SlLvl1_Components[4] = 
{
   (void*) &an_FPAA5_SlLvl1_Capacitor[0],  /* Cin */
   (void*) &an_FPAA5_SlLvl1_Capacitor[1],  /* Cout */
   (void*) &an_FPAA5_SlLvl1_Capacitor[2],  /* aCin */
   (void*) &an_FPAA5_SlLvl1_Capacitor[3]  /* aCout */
};

/* Component map for Slicer1 */
void* an_FPAA5_Slicer1_Components[1] = 
{
   (void*) &an_FPAA5_Slicer1_Comparator[0]  /* comp1 */
};

/* Component map for TrigComp1 */
void* an_FPAA5_TrigComp1_Components[1] = 
{
   (void*) &an_FPAA5_TrigComp1_Comparator[0]  /* comp1 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** an_apiCAMComponentData[an_apiCAMCount] =
{
   an_FPAA1_F0_Components,                  /* an_FPAA1_F0 */
   an_FPAA1_F1_Components,                  /* an_FPAA1_F1 */
   an_FPAA1_FilterBilinear1_Components,     /* an_FPAA1_FilterBilinear1 */
   an_FPAA1_GainInv1_Components,            /* an_FPAA1_GainInv1 */
   an_FPAA1_LUT_Components,                 /* an_FPAA1_LUT */
   an_FPAA1_SlLvl_Components,               /* an_FPAA1_SlLvl */
   an_FPAA1_Slicer_Components,              /* an_FPAA1_Slicer */
   an_FPAA1_TrigComp_Components,            /* an_FPAA1_TrigComp */
   an_FPAA2_F0_Components,                  /* an_FPAA2_F0 */
   an_FPAA2_F1_Components,                  /* an_FPAA2_F1 */
   an_FPAA2_FilterBilinear1_Components,     /* an_FPAA2_FilterBilinear1 */
   an_FPAA2_GainInv1_Components,            /* an_FPAA2_GainInv1 */
   an_FPAA2_LUT_Components,                 /* an_FPAA2_LUT */
   an_FPAA2_SlLvl_Components,               /* an_FPAA2_SlLvl */
   an_FPAA2_Slicer_Components,              /* an_FPAA2_Slicer */
   an_FPAA2_TrigComp_Components,            /* an_FPAA2_TrigComp */
   an_FPAA3_F2_Components,                  /* an_FPAA3_F2 */
   an_FPAA3_F3_Components,                  /* an_FPAA3_F3 */
   an_FPAA3_FilterBilinear2_Components,     /* an_FPAA3_FilterBilinear2 */
   an_FPAA3_GainInv2_Components,            /* an_FPAA3_GainInv2 */
   an_FPAA3_LUT1_Components,                /* an_FPAA3_LUT1 */
   an_FPAA3_SlLvl1_Components,              /* an_FPAA3_SlLvl1 */
   an_FPAA3_Slicer1_Components,             /* an_FPAA3_Slicer1 */
   an_FPAA3_TrigComp1_Components,           /* an_FPAA3_TrigComp1 */
   an_FPAA4_F2_Components,                  /* an_FPAA4_F2 */
   an_FPAA4_F3_Components,                  /* an_FPAA4_F3 */
   an_FPAA4_FilterBilinear2_Components,     /* an_FPAA4_FilterBilinear2 */
   an_FPAA4_GainInv2_Components,            /* an_FPAA4_GainInv2 */
   an_FPAA4_LUT1_Components,                /* an_FPAA4_LUT1 */
   an_FPAA4_SlLvl1_Components,              /* an_FPAA4_SlLvl1 */
   an_FPAA4_Slicer1_Components,             /* an_FPAA4_Slicer1 */
   an_FPAA4_TrigComp1_Components,           /* an_FPAA4_TrigComp1 */
   an_FPAA5_F2_Components,                  /* an_FPAA5_F2 */
   an_FPAA5_F3_Components,                  /* an_FPAA5_F3 */
   an_FPAA5_FilterBilinear2_Components,     /* an_FPAA5_FilterBilinear2 */
   an_FPAA5_GainInv2_Components,            /* an_FPAA5_GainInv2 */
   an_FPAA5_LUT1_Components,                /* an_FPAA5_LUT1 */
   an_FPAA5_SlLvl1_Components,              /* an_FPAA5_SlLvl1 */
   an_FPAA5_Slicer1_Components,             /* an_FPAA5_Slicer1 */
   an_FPAA5_TrigComp1_Components            /* an_FPAA5_TrigComp1 */
};

/* This array maps a chip ID to its clock powerup byte */           
an_Byte an_apiClockPowerByte[an_apiChipCount] =
{
   0x00,
   0x00,
   0x00,
   0x00,
   0x00
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA1 */                                                       
short an_FPAA1_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   8,      /* ApexClock3 */
   20,     /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA2 */                                                       
short an_FPAA2_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   8,      /* ApexClock3 */
   20,     /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA3 */                                                       
short an_FPAA3_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   8,      /* ApexClock3 */
   20,     /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA4 */                                                       
short an_FPAA4_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   8,      /* ApexClock3 */
   20,     /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA5 */                                                       
short an_FPAA5_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   8,      /* ApexClock3 */
   20,     /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's clock data. */                         
short* an_apiClockDivisorData[an_apiChipCount] =
{
   an_FPAA1_Clocks,
   an_FPAA2_Clocks,
   an_FPAA3_Clocks,
   an_FPAA4_Clocks,
   an_FPAA5_Clocks
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's master clock frequency. */             
const long an_apiMasterClockData[an_apiChipCount] =
{
   (long) 16000000.000000,
   (long) 16000000.000000,
   (long) 16000000.000000,
   (long) 16000000.000000,
   (long) 16000000.000000
};

/* Table to map module virtual clocks to actual chip clock for module  
F0 */                                                               
const an_ApexClockDivisor an_FPAA1_F0_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
F1 */                                                               
const an_ApexClockDivisor an_FPAA1_F1_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear1 */                                                  
const an_ApexClockDivisor an_FPAA1_FilterBilinear1_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
F0 */                                                               
const an_ApexClockDivisor an_FPAA2_F0_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
F1 */                                                               
const an_ApexClockDivisor an_FPAA2_F1_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear1 */                                                  
const an_ApexClockDivisor an_FPAA2_FilterBilinear1_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
F2 */                                                               
const an_ApexClockDivisor an_FPAA3_F2_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
F3 */                                                               
const an_ApexClockDivisor an_FPAA3_F3_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
const an_ApexClockDivisor an_FPAA3_FilterBilinear2_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
F2 */                                                               
const an_ApexClockDivisor an_FPAA4_F2_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
F3 */                                                               
const an_ApexClockDivisor an_FPAA4_F3_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
const an_ApexClockDivisor an_FPAA4_FilterBilinear2_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
F2 */                                                               
const an_ApexClockDivisor an_FPAA5_F2_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
F3 */                                                               
const an_ApexClockDivisor an_FPAA5_F3_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
const an_ApexClockDivisor an_FPAA5_FilterBilinear2_CAMClocks[4] =
{
   an_ApexClockDivisor_Clock0,           /* ClockA */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockB */
   (an_ApexClockDivisor) an_apiInvalid,  /* ClockC */
   (an_ApexClockDivisor) an_apiInvalid   /* ClockD */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the CAM's virtual clock mapping. */               
const an_ApexClockDivisor* an_apiCAMClockToApexChipClock[an_apiCAMCount] =
{
   an_FPAA1_F0_CAMClocks,
   an_FPAA1_F1_CAMClocks,
   an_FPAA1_FilterBilinear1_CAMClocks,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   an_FPAA2_F0_CAMClocks,
   an_FPAA2_F1_CAMClocks,
   an_FPAA2_FilterBilinear1_CAMClocks,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   an_FPAA3_F2_CAMClocks,
   an_FPAA3_F3_CAMClocks,
   an_FPAA3_FilterBilinear2_CAMClocks,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   an_FPAA4_F2_CAMClocks,
   an_FPAA4_F3_CAMClocks,
   an_FPAA4_FilterBilinear2_CAMClocks,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   an_FPAA5_F2_CAMClocks,
   an_FPAA5_F3_CAMClocks,
   an_FPAA5_FilterBilinear2_CAMClocks,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid,
   (an_ApexClockDivisor*) an_apiInvalid
};

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
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the chip. The    |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const an_Byte* an_GetPrimaryConfigData(an_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = an_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return an_apiPrimaryConfigData[chip].data;
     }

  /*--------------------------------------------------------------*\
  |                          GetResetData                          |
  +----------------------------------------------------------------+
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

     const an_Byte* an_GetResetData(an_Chip chip, int* count)
     {
        /* Initialize our data template */
        static an_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = an_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(resetData);
        
        /* Return the pointer to the data */
        return resetData;
     }

/********************************************************************\
 *                         Power Management                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                       GetVortexSleepData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_GetVortexSleepData(an_Chip chip, int* count, an_Bool powerDown)
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_VortexControlByte_EndExecute,   /* Control Byte          */
        
           /* Address: Byte 14, Bank 1 */
           /* The Byte value is required to have bit 7 set...) */
           0x8E,
           0x01,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bit */
        sleepData[6] = powerDown ? 0x0 : 0x1;
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

  /*--------------------------------------------------------------*\
  |                        GetApexSleepData                        |
  +----------------------------------------------------------------+
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

     const an_Byte* an_GetApexSleepData(an_Chip chip, int* count, 
                                       an_Bool powerDown,
                                       an_Bool VMR,
                                       an_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static an_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           an_ApexControlByte_EndExecute,     /* Control Byte          */
        
           /* Address: Byte 17 (0x11), Bank 0 */
           0x91,
           0x00,
        
           /* Data count and data byte place holder */
           0x01,
           0x00,
        
           /* Synch */
           0x2A
        };
        
        /* Set the proper power-up bits */
        sleepData[6] = 0x80;                      /* Everything powered down value */
        if(!powerDown) sleepData[6]   += 0x01;    /* set analog cells power up bit */
        if(VMR) sleepData[6]          += 0x70;    /* set VMR bits power up         */
        if(watchDog) sleepData[6]     += 0x02;    /* set watchDog enable bit       */
        
        /* Set it to use this chip's Address1*/
        sleepData[1] = an_apiAddress1[chip];
        
        /* Set how long it is */
        *count = sizeof(sleepData);
        
        /* Return the pointer to the data */
        return sleepData;
     }

/********************************************************************\
 *                         Reconfiguration                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                  InitializeVortexReconfigData                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_InitializeVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_ClearVortexReconfigData(chip);
        
        /* This is here to save the trouble of having to call it every time after sending
        a primary configuration.  It could be removed if the first reconfiguration after the
        primary configuration contains clock updates.  See the documentation of ClockUpdatesFinished
        for more detail. */
        an_ClockUpdatesFinished(chip);
     }

  /*--------------------------------------------------------------*\
  |                   InitializeApexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Configures memory for the reconfiguration data and does       |
  |  initial setup of the header. Must be called prior to using    |
  |  any other reconfiguration functions for the chip.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_InitializeApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = an_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        an_ClearApexReconfigData(chip);
        
        /* This is here to save the trouble of having to call it every time after sending
        a primary configuration.  It could be removed if the first reconfiguration after the
        primary configuration contains clock updates.  See the documentation of ClockUpdatesFinished
        for more detail. */
        an_ClockUpdatesFinished(chip);
     }

  /*--------------------------------------------------------------*\
  |                    ClearVortexReconfigData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeVortexReconfigData was first       |
  |  called. This does not free any memory.                        |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_ClearVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_apiReconfigData[chip]->length = 3;
        an_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_VortexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                     ClearApexReconfigData                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Resets the reconfiguration data for the chip back to what it  |
  |  was when ApiCall:InitializeApexReconfigData was first called. |
  |  This does not free any memory.                                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_ClearApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        an_apiReconfigData[chip]->length = 3;
        an_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = an_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = an_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = an_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = an_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_InitializeVortexReconfigData.    |
  |  an_InitializeVortexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_ShutdownVortexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                    ShutdownApexReconfigData                    |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by an_InitializeApexReconfigData.      |
  |  an_InitializeApexReconfigData must be called again prior to   |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_ShutdownApexReconfigData(an_Chip chip)
     {
        /* Get a pointer to the info struct */
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Update the stream info */
        pInfo->data = NULL;
        pInfo->length = 0;
        pInfo->flags  = 0;
     }

  /*--------------------------------------------------------------*\
  |                     GetVortexReconfigData                      |
  +----------------------------------------------------------------+
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

     const an_Byte* an_GetVortexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                      GetApexReconfigData                       |
  +----------------------------------------------------------------+
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

     const an_Byte* an_GetApexReconfigData(an_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Set how big it is. If it is 3, then there is no real data. */
        *count = (pInfo->length == 3) ? 0 : pInfo->length;
        
        /* Return the pointer to the data */
        return pInfo->data;
     }

  /*--------------------------------------------------------------*\
  |                 SetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for a Vortex chip.                                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_SetVortexReconfigControlFlags(an_Chip chip, an_VortexControlByte flags)
     {
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                  SetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_SetApexReconfigControlFlags(an_Chip chip, an_ApexControlByte flags)
     {
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] = flags;
     }

  /*--------------------------------------------------------------*\
  |                 SetApexReconfigControlFlagsNOP                 |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets flags in the control byte of the reconfiguration data    |
  |  for an Apex chip.                                             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_SetApexReconfigControlFlagsNOP(an_Chip chip, an_ApexControlByte flags)
     {
        
     }

  /*--------------------------------------------------------------*\
  |                 GetVortexReconfigControlFlags                  |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_VortexControlByte an_GetVortexReconfigControlFlags(an_Chip chip)
     {
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

  /*--------------------------------------------------------------*\
  |                  GetApexReconfigControlFlags                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the flags in the control byte of the                |
  |  reconfiguration data for the chip.                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_ApexControlByte an_GetApexReconfigControlFlags(an_Chip chip)
     {
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
     }

/********************************************************************\
 *                         Clock Functions                          * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                        GetClockDivisor                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the current value of a clock divisor for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     short an_GetClockDivisor(an_Chip chip, an_ClockDivisor divisor)
     {
        return an_apiClockDivisorData[chip][divisor];
     }

  /*--------------------------------------------------------------*\
  |                      GetApexClockDivisor                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the current value of a clock divisor for the chip.    |
  |                                                                |
  \*--------------------------------------------------------------*/

     short an_GetApexClockDivisor(an_Chip chip, an_ApexClockDivisor divisor)
     {
        return an_apiClockDivisorData[chip][divisor];
     }

  /*--------------------------------------------------------------*\
  |                         GetMasterClock                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the frequency of the master clock in Hz for the chip. |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Frequency an_GetMasterClock(an_Chip chip)
     {
        return an_apiMasterClockData[chip];
     }

  /*--------------------------------------------------------------*\
  |                        SetClockDivisor                         |
  +----------------------------------------------------------------+
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

     void an_SetClockDivisor(an_Chip chip, an_ClockDivisor divisor, short value)
     {
        /* The 8 bit value that the chip understands as a divisor */
        an_Byte chipCode;
        
        /* If there is nothing to change, just get out */
        if (an_apiClockDivisorData[chip][divisor] == value)
        {
           return;
        }
        
        /* Make sure the Update_CLKS bit is set, otherwise no clock change will execute */
        an_SetUpdateClocks(chip, 1);
         
        /* Each divisor maps to a code that needs to be sent to the chip to realize
           that divisor */
        chipCode = (1 == value) ? 0 : value >> 1;
        
        /* Update the value of the clock divisor internally for the chip */
        an_apiClockDivisorData[chip][divisor] = value;
        
        /* And now add it on to the config stream */
        an_BuildReconfigDataBlock(chip, 0, (an_Byte) (divisor + 12), &chipCode, 1);
     }

  /*--------------------------------------------------------------*\
  |                      SetApexClockDivisor                       |
  +----------------------------------------------------------------+
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

     void an_SetApexClockDivisor(an_Chip chip, an_ApexClockDivisor divisor, short value)
     {
        /* The 8 bit value that the chip understands as a divisor */
        an_Byte chipCode;
        an_apiReconfigInfo* pInfo; 
        
        /* If there is nothing to change, just get out */
        if (an_apiClockDivisorData[chip][divisor] == value)
        {
           return;
        }
        
        /* Make sure the Update_CLKS bit is set, otherwise no clock change will execute */
        //an_SetUpdateClocks(chip, 1);
                 
        pInfo = an_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        pInfo->data[2] |= an_ApexControlByte_UpdateClocks;
        
         
        /* Each divisor maps to a code that needs to be sent to the chip to realize
           that divisor */
        chipCode = (1 == value) ? 0 : value >> 1;
        
        /* Update the value of the clock divisor internally for the chip */
        an_apiClockDivisorData[chip][divisor] = value;
        
        /* And now add it on to the config stream */
        an_BuildReconfigDataBlock(chip, 0, (an_Byte) (divisor + 0), &chipCode, 1);
     }

  /*--------------------------------------------------------------*\
  |                     IncrementClockDivisor                      |
  +----------------------------------------------------------------+
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

     void an_IncrementClockDivisor(an_Chip chip, an_ClockDivisor divisor)
     {
        /* Determine what the incremented value should be. */
        short value = (1 == an_apiClockDivisorData[chip][divisor]) ? 2 :
           an_apiClockDivisorData[chip][divisor] + 2;
        
        /* Now clip it to 510, the maximum divisor value */
        value = (value > 510) ? 510 : value;
        
        /* And generate the update */
        an_SetClockDivisor(chip, divisor, value);
     }

  /*--------------------------------------------------------------*\
  |                   IncrementApexClockDivisor                    |
  +----------------------------------------------------------------+
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

     void an_IncrementApexClockDivisor(an_Chip chip, an_ApexClockDivisor divisor)
     {
        /* Determine what the incremented value should be. */
        short value = (1 == an_apiClockDivisorData[chip][divisor]) ? 2 :
           an_apiClockDivisorData[chip][divisor] + 2;
        
        /* Now clip it to 510, the maximum divisor value */
        value = (value > 510) ? 510 : value;
        
        /* And generate the update */
        an_SetApexClockDivisor(chip, divisor, value);
     }

  /*--------------------------------------------------------------*\
  |                     DecrementClockDivisor                      |
  +----------------------------------------------------------------+
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

     void an_DecrementClockDivisor(an_Chip chip, an_ClockDivisor divisor)
     {
        /* Determine what the decremented value should be */
        short value = (1 == an_apiClockDivisorData[chip][divisor]) ? 1 :
            an_apiClockDivisorData[chip][divisor] - 2;
        
        /* Now clip it to 1, the minimum divisor value */
        value = (value < 1) ? 1 : value;
        
        /* And generate the update */
        an_SetClockDivisor(chip, divisor, value);
     }

  /*--------------------------------------------------------------*\
  |                   DecrementApexClockDivisor                    |
  +----------------------------------------------------------------+
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

     void an_DecrementApexClockDivisor(an_Chip chip, an_ApexClockDivisor divisor)
     {
        /* Determine what the decremented value should be */
        short value = (1 == an_apiClockDivisorData[chip][divisor]) ? 1 :
            an_apiClockDivisorData[chip][divisor] - 2;
        
        /* Now clip it to 1, the minimum divisor value */
        value = (value < 1) ? 1 : value;
        
        /* And generate the update */
        an_SetApexClockDivisor(chip, divisor, value);
     }

  /*--------------------------------------------------------------*\
  |                      ClockUpdatesFinished                      |
  +----------------------------------------------------------------+
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

     void an_ClockUpdatesFinished(an_Chip chip)
     {
        an_SetUpdateClocks(chip, 0);
     }

/********************************************************************\
 *                          CAM Functions                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     GetApexClockFrequency                      |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the frequency in hz for the CAM clock desired. The    |
  |  clock values are taken from the chip the CAM is in. This      |
  |  should only be called from within CAM functions, and is not   |
  |  intended for use otherwise.                                   |
  |                                                                |
  \*--------------------------------------------------------------*/

     //NEED TO TAKE WHICH PRESCALER WAS USED INTO ACCOUNT, i.e., an_ClockDivisor_PreScale
an_Frequency an_GetApexClockFrequency(an_CAM cam, an_CAMClock camClock)
     {
        an_Chip chip = an_apiChipFromCAM[cam];
        int sysClockScale;
        int chipClockNumber = an_apiCAMClockToApexChipClock[cam][camClock];
         
        //Sys1 == true;  Sys2 == false.
        if(an_apiClockDivisorData[chip][an_ApexClockDivisor_ClockSys1Sys2Flag] & (1<<chipClockNumber)){
           //Using Sys1
           sysClockScale = an_apiClockDivisorData[chip][an_ApexClockDivisor_ClockSys1];
        }else{
           //Using Sys2
           sysClockScale = an_apiClockDivisorData[chip][an_ApexClockDivisor_ClockSys2];
        }
        
        return an_apiMasterClockData[chip] / 
           (sysClockScale * an_apiClockDivisorData[chip][chipClockNumber]);
     }

  /*--------------------------------------------------------------*\
  |                          SetCapValue                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Set a capacitor to a given value. The new 8-bit value is      |
  |  value. capID is the name given to represent the capacitor in  |
  |  the CAM net list. This should only be called from within CAM  |
  |  functions, and is not intended for use otherwise.             |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_SetCapValue(an_CAM cam, an_Component capID, an_Byte value)
     {
        /* First figure out what cap this is for */
        const an_apiCapacitor* pCap = an_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        an_BuildReconfigDataBlock(an_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
     }

  /*--------------------------------------------------------------*\
  |                       SetApexComparator                        |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets different properties of the comparator. The properties   |
  |  to set are determined by compMask. The values to set them to  |
  |  are the values in value. This should only be called from      |
  |  within CAM functions, and is not intended for use otherwise.  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_SetApexComparator(an_CAM cam, an_Component compID, an_ComparatorMask compMask, an_Comparator values)
     {
        /* This will hold the final three-byte value of the comparator */
        an_Byte newValues[3];
         
        /* Figure out which comparator this is for */
        an_apiComparator* pComparator = an_apiCAMComponentData[cam][compID];
        
        /* Set the new values */
        pComparator->currentValue = (pComparator->currentValue & ~compMask) | values;
        
        /* Extract the short into the three bytes that make up the comparator */
        newValues[0] = pComparator->currentValue & 0xFF;
        newValues[1] = (pComparator->currentValue >> 8) & 0xFF;
        newValues[2] = (pComparator->currentValue >> 16) & 0xFF;
         
        /* And now do the update */
        an_BuildReconfigDataBlock(
           an_apiChipFromCAM[cam], 
           pComparator->bank, 
           pComparator->byteNum,
           newValues,
           3);
     }

  /*--------------------------------------------------------------*\
  |                         ChooseCapRatio                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_ChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_AdjustCap(dGain * capTry2);
        
           /* See how good it came out */
           realizedGain  = (double) capTry1 / (double) capTry2;
           realizedError = fabs( ( dGain - realizedGain) / dGain);
        
           /* If its the best so far, then store the results */
           if( realizedError < currentError ) 
           { 
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                           AdjustCap                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        an_Byte capValue = (an_Byte) (dValue + 0.5);
        
        /* Constrain to 1 - 255 */
        if (dValue < 1.0)
        {
          capValue = 1;
        }
        else if (dValue > 255.0)
        {
          capValue = 255;
        }
         
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                      FixedChooseCapRatio                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Given a desired gain, this function will calculate the ideal  |
  |  capacitor values. The realized capacitor values will be       |
  |  returned in the pointers that are passed in.                  |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_FixedChooseCapRatio(double dGain, an_Byte* pCap1, an_Byte* pCap2)
     {
         an_Fixed realizedGain;
        an_Fixed workGain = an_FloatToFixed(dGain);
        an_Fixed realizedError;
        an_Fixed currentError = 0x7FFFFFFF;
         
        an_Byte capTry1;
        an_Byte capTry2;
        
        /* Start off with some default values */
        an_Byte currentCap1 = 1;
        an_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = an_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = an_FixedDivide(an_IntToFixed(capTry1), an_IntToFixed(capTry2));
           realizedError = an_FixedDivide(an_FixedAbs(workGain - realizedGain), workGain);
        
           /* If it's the best so far, then store the results */
           if (realizedError < currentError)
           {
              currentError = realizedError;
        
              currentCap1 = capTry1;
              currentCap2 = capTry2;
           }
        }
        
        *pCap1 = currentCap1;
        *pCap2 = currentCap2;
     }

  /*--------------------------------------------------------------*\
  |                         FixedAdjustCap                         |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Returns the 8-bit capacitor value most closely representing   |
  |  the passed in value.                                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Byte an_FixedAdjustCap(an_Fixed fValue)
     {
        an_Byte capValue = (an_Byte) an_FixedToInt(fValue);
        
        if (fValue < 0x00010000)
        {
           capValue = 1;
        }
        else if (fValue > 0x00FF0000)
        {
           capValue = 255;
        }
        
        return capValue;
     }

  /*--------------------------------------------------------------*\
  |                            LoadLUT                             |
  +----------------------------------------------------------------+
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

     void an_LoadLUT(an_CAM cam, an_Byte* values, an_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        an_BuildReconfigDataBlock(an_apiChipFromCAM[cam], bank, byte, values, count);
     }

  /*--------------------------------------------------------------*\
  |                     SetApexCounterRollOver                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Sets the programmable counter roll over value.                |
  |                                                                |
  \*--------------------------------------------------------------*/

     void an_SetApexCounterRollOver(an_CAM cam, an_Byte rollOver)
     {
        /* Store the change in the reconfiguration data */
        an_BuildReconfigDataBlock(an_apiChipFromCAM[cam], 1, 20, &rollOver, 1);
     }

/********************************************************************\
 *                         Fixed-Point Math                         * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                          FloatToFixed                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from float to ApiName::fixed                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_FloatToFixed(float fValue)
     {
        return (an_Fixed) (fValue * 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                           IntToFixed                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from int to ApiName::fixed                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_IntToFixed(int value)
     {
        return ((an_Fixed) (value)) << 16;
     }

  /*--------------------------------------------------------------*\
  |                           FixedToInt                           |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to int                            |
  |                                                                |
  \*--------------------------------------------------------------*/

     int an_FixedToInt(an_Fixed fValue)
     {
        return (int) ((fValue + 0x8000) >> 16);
     }

  /*--------------------------------------------------------------*\
  |                          FixedToFloat                          |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Convert from ApiName::fixed to float                          |
  |                                                                |
  \*--------------------------------------------------------------*/

     float an_FixedToFloat(an_Fixed fValue)
     {
        //return (float) ((fValue + 0x8000) / 65536.0);
        return (float) (fValue / 65536.0);
     }

  /*--------------------------------------------------------------*\
  |                            FixedAbs                            |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  This function returns the absolute value of a fixed-point     |
  |  number.                                                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     an_Fixed an_FixedAbs(an_Fixed fValue)
     {
        /* Sign is indicated by the MSB of the value. If set, number is negative. */
        if ((fValue & 0x80000000) != 0)
        {
           return -fValue;
        }
        else
        {
           return fValue;
        }
     }

  /*--------------------------------------------------------------*\
  |                          FixedDivide                           |
  +----------------------------------------------------------------+
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

     an_Fixed an_FixedDivide(an_Fixed fLeft, an_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        an_Fixed result = 0;
        unsigned char shiftbits = 16;
        
        /* We'll check the simple cases. */
        /* First, no integer component in the numerator (i.e. left < 1).
         * If this is the case, then we chop off the upper word (turn the number into a 0:32
         * number), and perform the division. */
        if ((lefttemp >> 16) == 0)	
           result = (lefttemp << 16) / righttemp;
        else
           /* Second, no fractional portion in the denominator (i.e. it's a whole number).
            * If this is the case, then we chop off the lower word (turn the number into a 32:0
            * number), and perform the division. */
           if ((righttemp << 16) == 0)
              result = lefttemp / (righttemp >> 16);
           else
           {
              /* Check to see if the numerator is less than the denominator.
               * If so, we'll shift up the numerator as far as we can of the 16 bits
               * we want to shift by, do the divison, then shift the result by the remaining
               * bits of the 16 bits. */
              if (lefttemp < righttemp)
              {
                 while ((shiftbits) && ((lefttemp & 0x80000000) == 0))
                 {
                    lefttemp <<= 1;
                    shiftbits--;
                 }
                 result = (lefttemp / righttemp) << shiftbits;
              }
              else
              {
                 /* Finally, if all else fails, we will do this the long way. Like elementary math,
                  * we will do this by repeatedly dividing, and using the remainder as part of the
                  * next division, until we have no remainder, or we run out of the 16-bits we need
                  * to do the 16:32 effect. */
                 while (((lefttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x80000000) == 0) &&
                        ((righttemp & 0x0000FFFF) != 0))
                 {
                    lefttemp <<= 1;
                    righttemp <<= 1;
                 }
                 result = lefttemp / righttemp;
                 lefttemp = lefttemp % righttemp;
         
                 while ((lefttemp > 0) &&
                        (shiftbits > 0 ))
                 {
                    while (((lefttemp & 0x80000000) == 0) &&
                       (shiftbits != 0))
                    {
                       lefttemp <<= 1;
                       result <<= 1;
                       shiftbits--;
                    }
        
                    result += lefttemp / righttemp;
                    lefttemp = lefttemp % righttemp;
                 }
              }
           }
        
        /* Lastly, we check to see whether one, but not both, of the operators was negative.
         * If so, negate the result. */
        if (left_neg ^ right_neg)
           result = -result;
        
        return result;
     }

/********************************************************************\
 *                           Internal API                           * 
\********************************************************************/

  /*--------------------------------------------------------------*\
  |                     BuildReconfigDataBlock                     |
  +----------------------------------------------------------------+
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

     void an_BuildReconfigDataBlock(an_Chip chip, an_Byte bank, an_Byte byteNum, an_Byte* values, short count)
     {
        an_apiReconfigInfo* pInfo = an_apiReconfigData[chip];
        short updateIndex = 0;
        
        /* The size we expect this update to be.  This may change, depending on 
           update mode and CRC setting */
        short updateSize = 4 + count;
        
        /* If there was a previous update, we need to set its
           update to follow bit*/
        if (pInfo->lastUpdateIndex)
        {
           /* Set the update to follow bit */
           pInfo->data[pInfo->lastUpdateIndex] = pInfo->data[pInfo->lastUpdateIndex] | 0x40;
        }
        
        /* The address.  High bit must always be set. */
        pInfo->data[pInfo->length]     = byteNum | 0x80;
        pInfo->data[pInfo->length + 1] = bank;
        
        /* Number of bytes to write */
        pInfo->data[pInfo->length + 2] = (count == 256) ? 0 : count;
        
        /* The data */
        for (updateIndex = 0; updateIndex < count; updateIndex++)
        {
           pInfo->data[pInfo->length + (3 + updateIndex)] = values[updateIndex];
        }
        
        /* Error checking byte */
        pInfo->data[pInfo->length + (3 + count)] = ~an_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

  /*--------------------------------------------------------------*\
  |                        SetUpdateClocks                         |
  +----------------------------------------------------------------+
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

     void an_SetUpdateClocks(an_Chip chip, an_Bool turnOn)
     {
        /* Get the current state of the byte */
        an_Byte powerByte = an_apiClockPowerByte[chip];
        an_Byte reconfigByte = 0;
        
        /* If the bit is already set as desired, just get out */
        if ( ( (powerByte & 0x40) && turnOn) ||
             (!(powerByte & 0x40) && !turnOn) )
        {
           return;
        }
        
        /* Change the appropriate bits for the reconfiguration. */
        reconfigByte = turnOn ? ((powerByte | 0x40)) : (powerByte & 0x3F);
        
        /* Set just the UPDATE_CLKS bit back without affecting the others */
        an_apiClockPowerByte[chip] = (turnOn ? 0x40 : 0x00) | (an_apiClockPowerByte[chip] & 0x3F);
        
        /* Add it to the reconfig data */
        an_BuildReconfigDataBlock(chip, 0, 19, (an_Byte*) &reconfigByte, 1);
     }

