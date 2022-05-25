#include "ApiCode.h"

/********************************************************************\
*                      Dynamx Design Lab C Code                      *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      ApiCode.c                                              *
*  Circuit:   okika_us.okt                                           *
*  Generated: May 05, 2022:  01:38 PM                                *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2015 Okika. All rights reserved.           *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's Address1. */                           
const ot_Byte ot_apiAddress1[ot_apiChipCount] =
{
   0x01,                /* ot_FPAA1: 00000001 */
   0x01,                /* ot_FPAA2: 00000001 */
   0x01,                /* ot_FPAA3: 00000001 */
   0x01,                /* ot_FPAA4: 00000001 */
   0x01                 /* ot_FPAA5: 00000001 */
};

/* This is the initial full configuration stream for FPAA1. */
const ot_Byte ot_FPAA1_PrimaryConfigInfo[] = 
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
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x20,  0x04,  0x00,  0x02,  0x1D,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x24,  0x00,  0x00,  0x02,  0x00,  0x10,  0x00,  0x00,  
   0x00,  0xA0,  0xE0,  0x00,  0x00,  0x00,  0x03,  0x06,  
   0x40,  0x2B,  0xFF,  0x00,  0x0A,  

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
   0xC7, /* Byte address:  7 */
   0x02, /* Bank address:  2 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0xC1,  0x00,  0x00,  0x08,  0x00,  0x00,  0x08,  0x00,  
   0x00,  0x40,  0x00,  0x56,  0x03,  0x08,  0x50,  0xA0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x11,  0x11,  0xFF,  0xFF,  0x55,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x84,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x03, /* Bank address:  3 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0x90,  0x00,  0x20,  0x01,  
   0x14,  0x00,  0x10,  0xCE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x04, /* Bank address:  4 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x07,  0x01,  0x00,  0x02,  0x12,  0x02,  0x82,  0x02,  
   0x19,  0x02,  0x82,  0x00,  0x05,  0x01,  0x13,  0x00,  
   0x10,  0x81,  0x05,  0x01,  0x15,  0x00,  0x10,  0x46,  
   0x46,  0x0D,  0x09,  0x82,  0x94,  0x94,  0x13,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x05, /* Bank address:  5 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x1F,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x06, /* Bank address:  6 */
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
   0x07, /* Bank address:  7 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x18,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x08, /* Bank address:  8 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x31,  0x01,  0x82,  0x00,  
   0x05,  0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  
   0x12,  0x01,  0x81,  0x00,  0xFF,  0xFF,  0x99,  0x99,  
   0xB9,  0x0C,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x09, /* Bank address:  9 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0x08,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0x40,  0x00,  0x20,  0x01,  
   0x13,  0x01,  0x81,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x0A, /* Bank address: 10 */
   0x1A, /* Byte count:   26 */

   /* Data bytes for block */
   0x08,  0x00,  0x01,  0x27,  0x01,  0x00,  0x01,  0x12,  
   0x01,  0x82,  0x01,  0x14,  0x01,  0x82,  0x00,  0x05,  
   0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  0x1A,  
   0x01,  0x81,  

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

/* This is the initial full configuration stream for FPAA2. */
const ot_Byte ot_FPAA2_PrimaryConfigInfo[] = 
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
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x20,  0x04,  0x00,  0x02,  0x1D,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x24,  0x00,  0x00,  0x02,  0x00,  0x10,  0x00,  0x00,  
   0x00,  0xA0,  0xE0,  0x00,  0x00,  0x00,  0x03,  0x06,  
   0x40,  0x2B,  0xFF,  0x00,  0x0A,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x00,  0x00,  0x50,  0x00,  0x00,  
   0x00,  0x0C,  0x00,  0x00,  0x08,  0x00,  0x00,  0x40,  
   0x00,  0x56,  0x03,  0x00,  0x00,  0x08,  0x08,  0x50,  
   0xA0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x11,  0x11,  0xFF,  0xFF,  0x55,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x84,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x03, /* Bank address:  3 */
   0x33, /* Byte count:   51 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0x70,  0x00,  0x20,  0x01,  
   0x14,  0x00,  0x10,  0xCE,  0x00,  0x00,  0x00,  0x00,  
   0x01,  0x00,  0x00,  0x00,  0x07,  0x01,  0x00,  0x02,  
   0x12,  0x02,  0x82,  0x02,  0x17,  0x02,  0x82,  0x00,  
   0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x15,  0x00,  0x10,  0x46,  0x46,  0x0D,  0x09,  0x82,  
   0x94,  0x94,  0x13,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x05, /* Bank address:  5 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x1F,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x06, /* Bank address:  6 */
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
   0x07, /* Bank address:  7 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x18,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x08, /* Bank address:  8 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x31,  0x01,  0x82,  0x00,  
   0x05,  0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  
   0x12,  0x01,  0x81,  0x00,  0xFF,  0xFF,  0x99,  0x99,  
   0xB9,  0x0C,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x09, /* Bank address:  9 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0x08,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0x40,  0x00,  0x20,  0x01,  
   0x13,  0x01,  0x81,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x0A, /* Bank address: 10 */
   0x1A, /* Byte count:   26 */

   /* Data bytes for block */
   0x08,  0x00,  0x01,  0x27,  0x01,  0x00,  0x01,  0x12,  
   0x01,  0x82,  0x01,  0x14,  0x01,  0x82,  0x00,  0x05,  
   0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  0x1A,  
   0x01,  0x81,  

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

/* This is the initial full configuration stream for FPAA3. */
const ot_Byte ot_FPAA3_PrimaryConfigInfo[] = 
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
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x20,  0x04,  0x00,  0x02,  0x1D,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x21,  0x00,  0x00,  0x02,  0x00,  0x10,  0x00,  0x00,  
   0x00,  0xA0,  0xE0,  0x00,  0x00,  0x00,  0x09,  0x06,  
   0x40,  0x2B,  0xFF,  0x00,  0x0A,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0xC1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCA, /* Byte address: 10 */
   0x02, /* Bank address:  2 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x40,  0x00,  0x56,  0x03,  0x00,  0x00,  0x08,  0x00,  
   0x00,  0x08,  0x08,  0x50,  0xA0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xFF,  0xFF,  0x99,  0x99,  0xB9,  0x0C,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x03, /* Bank address:  3 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0x08,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x03, /* Bank address:  3 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0x40,  0x00,  0x20,  0x01,  
   0x13,  0x01,  0x81,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x04, /* Bank address:  4 */
   0x22, /* Byte count:   34 */

   /* Data bytes for block */
   0x20,  0x00,  0x01,  0x27,  0x01,  0x00,  0x01,  0x12,  
   0x01,  0x82,  0x01,  0x14,  0x01,  0x82,  0x00,  0x05,  
   0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  0x1C,  
   0x01,  0x81,  0x46,  0x46,  0x0D,  0x09,  0x82,  0x94,  
   0x94,  0x13,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x05, /* Bank address:  5 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x1B,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x06, /* Bank address:  6 */
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
   0x07, /* Bank address:  7 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x18,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x08, /* Bank address:  8 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x31,  0x01,  0x82,  0x00,  
   0x05,  0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  
   0x12,  0x01,  0x81,  0x00,  0x11,  0x11,  0xFF,  0xFF,  
   0x55,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x09, /* Bank address:  9 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x84,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0xF0,  0x00,  0x20,  0x01,  
   0x14,  0x00,  0x10,  0xCE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x0A, /* Bank address: 10 */
   0x17, /* Byte count:   23 */

   /* Data bytes for block */
   0x07,  0x01,  0x00,  0x02,  0x12,  0x02,  0x82,  0x02,  
   0x1F,  0x02,  0x82,  0x00,  0x05,  0x01,  0x13,  0x00,  
   0x10,  0x81,  0x05,  0x01,  0x15,  0x00,  0x10,  

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

/* This is the initial full configuration stream for FPAA4. */
const ot_Byte ot_FPAA4_PrimaryConfigInfo[] = 
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
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x20,  0x04,  0x00,  0x02,  0x1D,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x24,  0x00,  0x00,  0x02,  0x00,  0x10,  0x00,  0x00,  
   0x00,  0xA0,  0xE0,  0x00,  0x00,  0x00,  0x03,  0x06,  
   0x40,  0x2B,  0xFF,  0x00,  0x0A,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x19, /* Byte count:   25 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x00,  0x00,  0x05,  0x00,  0x00,  
   0x00,  0x10,  0x00,  0x56,  0x03,  0x00,  0x00,  0x08,  
   0x00,  0x00,  0x08,  0x00,  0x00,  0x40,  0x08,  0x50,  
   0xA0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x11,  0x11,  0xFF,  0xFF,  0x55,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x84,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x03, /* Bank address:  3 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0x90,  0x00,  0x20,  0x01,  
   0x14,  0x00,  0x10,  0xCE,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x04, /* Bank address:  4 */
   0x1F, /* Byte count:   31 */

   /* Data bytes for block */
   0x07,  0x01,  0x00,  0x02,  0x12,  0x02,  0x82,  0x02,  
   0x19,  0x02,  0x82,  0x00,  0x05,  0x01,  0x13,  0x00,  
   0x10,  0x81,  0x05,  0x01,  0x15,  0x00,  0x10,  0x46,  
   0x46,  0x0D,  0x09,  0x82,  0x94,  0x94,  0x13,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x05, /* Bank address:  5 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x1F,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x06, /* Bank address:  6 */
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
   0x07, /* Bank address:  7 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x18,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x08, /* Bank address:  8 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x31,  0x01,  0x82,  0x00,  
   0x05,  0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  
   0x12,  0x01,  0x81,  0x00,  0xFF,  0xFF,  0x99,  0x99,  
   0xB9,  0x0C,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x09, /* Bank address:  9 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0x08,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0x40,  0x00,  0x20,  0x01,  
   0x13,  0x01,  0x81,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x0A, /* Bank address: 10 */
   0x1A, /* Byte count:   26 */

   /* Data bytes for block */
   0x08,  0x00,  0x01,  0x27,  0x01,  0x00,  0x01,  0x12,  
   0x01,  0x82,  0x01,  0x14,  0x01,  0x82,  0x00,  0x05,  
   0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  0x1A,  
   0x01,  0x81,  

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

/* This is the initial full configuration stream for FPAA5. */
const ot_Byte ot_FPAA5_PrimaryConfigInfo[] = 
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
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x20,  0x04,  0x00,  0x02,  0x1D,  0x00,  0x00,  0x40,  
   0x00,  0x00,  0x51,  0xFF,  0x0F,  0xF1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x15, /* Byte count:   21 */

   /* Data bytes for block */
   0x24,  0x00,  0x00,  0x02,  0x00,  0x10,  0x00,  0x00,  
   0x00,  0xA1,  0xE1,  0x00,  0x00,  0x00,  0x03,  0x06,  
   0x40,  0x2B,  0xFF,  0x00,  0x0A,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDE, /* Byte address: 30 */
   0x01, /* Bank address:  1 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x02,  0xFF,  0x00,  0x00,  0x50,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC9, /* Byte address:  9 */
   0x02, /* Bank address:  2 */
   0x0E, /* Byte count:   14 */

   /* Data bytes for block */
   0x46,  0x03,  0x00,  0x46,  0x03,  0x00,  0x46,  0x03,  
   0x00,  0x56,  0x03,  0x08,  0x50,  0xA0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x03, /* Bank address:  3 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x11,  0x11,  0xFF,  0xFF,  0x55,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x84,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x03, /* Bank address:  3 */
   0x33, /* Byte count:   51 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0x70,  0x00,  0x20,  0x01,  
   0x14,  0x00,  0x10,  0xCE,  0x00,  0x00,  0x00,  0x00,  
   0x01,  0x00,  0x00,  0x01,  0x07,  0x01,  0x00,  0x02,  
   0x12,  0x02,  0x82,  0x02,  0x17,  0x02,  0x82,  0x00,  
   0x05,  0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  0x01,  
   0x15,  0x00,  0x10,  0x46,  0x46,  0x0D,  0x09,  0x82,  
   0x94,  0x94,  0x13,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD1, /* Byte address: 17 */
   0x05, /* Bank address:  5 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x1F,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x06, /* Bank address:  6 */
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
   0x07, /* Bank address:  7 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x12,  0x01,  0x82,  0x01,  
   0x18,  0x01,  0x82,  0x00,  0x30,  0x00,  0x10,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x08, /* Bank address:  8 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x01,  0x31,  0x01,  0x82,  0x00,  
   0x05,  0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  
   0x12,  0x01,  0x81,  0x00,  0xFF,  0xFF,  0x99,  0x99,  
   0xB9,  0x0C,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x09, /* Bank address:  9 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0x08,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD5, /* Byte address: 21 */
   0x09, /* Bank address:  9 */
   0x0C, /* Byte count:   12 */

   /* Data bytes for block */
   0x20,  0x00,  0x20,  0x00,  0x40,  0x00,  0x20,  0x01,  
   0x13,  0x01,  0x81,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC6, /* Byte address:  6 */
   0x0A, /* Bank address: 10 */
   0x1A, /* Byte count:   26 */

   /* Data bytes for block */
   0x08,  0x00,  0x01,  0x27,  0x01,  0x00,  0x01,  0x12,  
   0x01,  0x82,  0x01,  0x14,  0x01,  0x82,  0x00,  0x05,  
   0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  0x1A,  
   0x01,  0x81,  

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
const ot_apiPrimaryConfigInfo ot_apiPrimaryConfigData[ot_apiChipCount] =
{
   /* FPAA1 */
   {
      ot_FPAA1_PrimaryConfigInfo,   /* data */
      557,                          /* length */
   },

   /* FPAA2 */
   {
      ot_FPAA2_PrimaryConfigInfo,   /* data */
      564,                          /* length */
   },

   /* FPAA3 */
   {
      ot_FPAA3_PrimaryConfigInfo,   /* data */
      556,                          /* length */
   },

   /* FPAA4 */
   {
      ot_FPAA4_PrimaryConfigInfo,   /* data */
      562,                          /* length */
   },

   /* FPAA5 */
   {
      ot_FPAA5_PrimaryConfigInfo,   /* data */
      562                           /* length */
   }
};

/* This is the constant synchronizing header byte. */               
const ot_Byte ot_apiSynchByte = 0xD5;  /* 11010101 */

/* apiReconfigInfo for FPAA1 */
ot_apiReconfigInfo ot_FPAA1_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA2 */
ot_apiReconfigInfo ot_FPAA2_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA3 */
ot_apiReconfigInfo ot_FPAA3_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA4 */
ot_apiReconfigInfo ot_FPAA4_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* apiReconfigInfo for FPAA5 */
ot_apiReconfigInfo ot_FPAA5_ReconfigInfo =
{
   NULL,   /* data */
   0,      /* length */
   64,     /* capacity */
   0,      /* lastUpdateIndex */
   0       /* flags */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h fileto the apiReconfigInfo struct of that chip. */        
ot_apiReconfigInfo* ot_apiReconfigData[ot_apiChipCount] =
{
   &ot_FPAA1_ReconfigInfo,        /* FPAA1 */
   &ot_FPAA2_ReconfigInfo,        /* FPAA2 */
   &ot_FPAA3_ReconfigInfo,        /* FPAA3 */
   &ot_FPAA4_ReconfigInfo,        /* FPAA4 */
   &ot_FPAA5_ReconfigInfo         /* FPAA5 */
};

/* There is one of these buffers for each programmable chip. */     
ot_Byte ot_FPAA1_ReconfigBuffer[64] = {0};         /* FPAA1 */
ot_Byte ot_FPAA2_ReconfigBuffer[64] = {0};         /* FPAA2 */
ot_Byte ot_FPAA3_ReconfigBuffer[64] = {0};         /* FPAA3 */
ot_Byte ot_FPAA4_ReconfigBuffer[64] = {0};         /* FPAA4 */
ot_Byte ot_FPAA5_ReconfigBuffer[64] = {0};         /* FPAA5 */

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the reconfiguration buffer of that chip. */       
ot_Byte* ot_apiReconfigBuffer[ot_apiChipCount] =
{
   ot_FPAA1_ReconfigBuffer,       /* FPAA1 */
   ot_FPAA2_ReconfigBuffer,       /* FPAA2 */
   ot_FPAA3_ReconfigBuffer,       /* FPAA3 */
   ot_FPAA4_ReconfigBuffer,       /* FPAA4 */
   ot_FPAA5_ReconfigBuffer        /* FPAA5 */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the numeric ID of the chip which the CAM is in. */  
const ot_Byte ot_apiChipFromCAM[ot_apiCAMCount] =
{
   ot_FPAA1,            /* "ot_FPAA1_Comparator2" in chip "FPAA1" */
   ot_FPAA1,            /* "ot_FPAA1_Comparator3" in chip "FPAA1" */
   ot_FPAA1,            /* "ot_FPAA1_FilterBilinear1" in chip "FPAA1" */
   ot_FPAA1,            /* "ot_FPAA1_FilterBiquad1" in chip "FPAA1" */
   ot_FPAA1,            /* "ot_FPAA1_FilterBiquad2" in chip "FPAA1" */
   ot_FPAA1,            /* "ot_FPAA1_GainInv1" in chip "FPAA1" */
   ot_FPAA1,            /* "ot_FPAA1_GainInv2" in chip "FPAA1" */
   ot_FPAA1,            /* "ot_FPAA1_PeriodicWave1" in chip "FPAA1" */
   ot_FPAA2,            /* "ot_FPAA2_Comparator4" in chip "FPAA2" */
   ot_FPAA2,            /* "ot_FPAA2_Comparator5" in chip "FPAA2" */
   ot_FPAA2,            /* "ot_FPAA2_FilterBilinear2" in chip "FPAA2" */
   ot_FPAA2,            /* "ot_FPAA2_FilterBiquad3" in chip "FPAA2" */
   ot_FPAA2,            /* "ot_FPAA2_FilterBiquad4" in chip "FPAA2" */
   ot_FPAA2,            /* "ot_FPAA2_GainInv3" in chip "FPAA2" */
   ot_FPAA2,            /* "ot_FPAA2_GainInv4" in chip "FPAA2" */
   ot_FPAA2,            /* "ot_FPAA2_PeriodicWave2" in chip "FPAA2" */
   ot_FPAA3,            /* "ot_FPAA3_Comparator4" in chip "FPAA3" */
   ot_FPAA3,            /* "ot_FPAA3_Comparator5" in chip "FPAA3" */
   ot_FPAA3,            /* "ot_FPAA3_FilterBilinear2" in chip "FPAA3" */
   ot_FPAA3,            /* "ot_FPAA3_FilterBiquad3" in chip "FPAA3" */
   ot_FPAA3,            /* "ot_FPAA3_FilterBiquad4" in chip "FPAA3" */
   ot_FPAA3,            /* "ot_FPAA3_GainInv3" in chip "FPAA3" */
   ot_FPAA3,            /* "ot_FPAA3_GainInv4" in chip "FPAA3" */
   ot_FPAA3,            /* "ot_FPAA3_PeriodicWave2" in chip "FPAA3" */
   ot_FPAA4,            /* "ot_FPAA4_Comparator4" in chip "FPAA4" */
   ot_FPAA4,            /* "ot_FPAA4_Comparator5" in chip "FPAA4" */
   ot_FPAA4,            /* "ot_FPAA4_FilterBilinear2" in chip "FPAA4" */
   ot_FPAA4,            /* "ot_FPAA4_FilterBiquad3" in chip "FPAA4" */
   ot_FPAA4,            /* "ot_FPAA4_FilterBiquad4" in chip "FPAA4" */
   ot_FPAA4,            /* "ot_FPAA4_GainInv3" in chip "FPAA4" */
   ot_FPAA4,            /* "ot_FPAA4_GainInv4" in chip "FPAA4" */
   ot_FPAA4,            /* "ot_FPAA4_PeriodicWave2" in chip "FPAA4" */
   ot_FPAA5,            /* "ot_FPAA5_Comparator4" in chip "FPAA5" */
   ot_FPAA5,            /* "ot_FPAA5_Comparator5" in chip "FPAA5" */
   ot_FPAA5,            /* "ot_FPAA5_FilterBilinear2" in chip "FPAA5" */
   ot_FPAA5,            /* "ot_FPAA5_FilterBiquad3" in chip "FPAA5" */
   ot_FPAA5,            /* "ot_FPAA5_FilterBiquad4" in chip "FPAA5" */
   ot_FPAA5,            /* "ot_FPAA5_GainInv3" in chip "FPAA5" */
   ot_FPAA5,            /* "ot_FPAA5_GainInv4" in chip "FPAA5" */
   ot_FPAA5             /* "ot_FPAA5_PeriodicWave2" in chip "FPAA5" */
};

/* Component data table for the apiComparator's of Comparator2. */
extern ot_apiComparator ot_FPAA1_Comparator2_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000107 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of Comparator3. */
extern ot_apiComparator ot_FPAA1_Comparator3_Comparator[1] = 
{
   /* comp1 */
   {
      0x0A, /* bank:    10 */
      0x09, /* byteNum: 9 */
      0x000127 /* currentValue */
   } 
};

/* Component data table for the apiCapacitor's of FilterBilinear1. */
extern const ot_apiCapacitor ot_FPAA1_FilterBilinear1_Capacitor[3] = 
{
   /* Cin   */ { 0x09, 0x07, }, /* 9, 7 */
   /* Cint  */ { 0x09, 0x05, }, /* 9, 5 */
   /* Cout  */ { 0x09, 0x06  }  /* 9, 6 */
};

/* Component data table for the apiCapacitor's of FilterBiquad1. */
extern const ot_apiCapacitor ot_FPAA1_FilterBiquad1_Capacitor[8] = 
{
   /* C2    */ { 0x05, 0x07, }, /* 5, 7 */
   /* C3    */ { 0x05, 0x03, }, /* 5, 3 */
   /* C4    */ { 0x05, 0x02, }, /* 5, 2 */
   /* CA1   */ { 0x05, 0x06, }, /* 5, 6 */
   /* CA2   */ { 0x05, 0x05, }, /* 5, 5 */
   /* CB1   */ { 0x05, 0x01, }, /* 5, 1 */
   /* CB2   */ { 0x05, 0x00, }, /* 5, 0 */
   /* Cp    */ { 0x05, 0x04  }  /* 5, 4 */
};

/* Component data table for the apiCapacitor's of FilterBiquad2. */
extern const ot_apiCapacitor ot_FPAA1_FilterBiquad2_Capacitor[8] = 
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

/* Component data table for the apiCapacitor's of GainInv1. */
extern const ot_apiCapacitor ot_FPAA1_GainInv1_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cout  */ { 0x03, 0x01, }, /* 3, 1 */
   /* aCin  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCout */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of GainInv2. */
extern const ot_apiCapacitor ot_FPAA1_GainInv2_Capacitor[4] = 
{
   /* Cin   */ { 0x09, 0x03, }, /* 9, 3 */
   /* Cout  */ { 0x09, 0x01, }, /* 9, 1 */
   /* aCin  */ { 0x09, 0x04, }, /* 9, 4 */
   /* aCout */ { 0x09, 0x02  }  /* 9, 2 */
};

/* Component data table for the apiCapacitor's of PeriodicWave1. */
extern const ot_apiCapacitor ot_FPAA1_PeriodicWave1_Capacitor[1] = 
{
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiComparator's of Comparator4. */
extern ot_apiComparator ot_FPAA2_Comparator4_Comparator[1] = 
{
   /* comp1 */
   {
      0x0A, /* bank:    10 */
      0x09, /* byteNum: 9 */
      0x000127 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of Comparator5. */
extern ot_apiComparator ot_FPAA2_Comparator5_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000107 /* currentValue */
   } 
};

/* Component data table for the apiCapacitor's of FilterBilinear2. */
extern const ot_apiCapacitor ot_FPAA2_FilterBilinear2_Capacitor[3] = 
{
   /* Cin   */ { 0x09, 0x07, }, /* 9, 7 */
   /* Cint  */ { 0x09, 0x05, }, /* 9, 5 */
   /* Cout  */ { 0x09, 0x06  }  /* 9, 6 */
};

/* Component data table for the apiCapacitor's of FilterBiquad3. */
extern const ot_apiCapacitor ot_FPAA2_FilterBiquad3_Capacitor[8] = 
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

/* Component data table for the apiCapacitor's of FilterBiquad4. */
extern const ot_apiCapacitor ot_FPAA2_FilterBiquad4_Capacitor[8] = 
{
   /* C2    */ { 0x05, 0x07, }, /* 5, 7 */
   /* C3    */ { 0x05, 0x03, }, /* 5, 3 */
   /* C4    */ { 0x05, 0x02, }, /* 5, 2 */
   /* CA1   */ { 0x05, 0x06, }, /* 5, 6 */
   /* CA2   */ { 0x05, 0x05, }, /* 5, 5 */
   /* CB1   */ { 0x05, 0x01, }, /* 5, 1 */
   /* CB2   */ { 0x05, 0x00, }, /* 5, 0 */
   /* Cp    */ { 0x05, 0x04  }  /* 5, 4 */
};

/* Component data table for the apiCapacitor's of GainInv3. */
extern const ot_apiCapacitor ot_FPAA2_GainInv3_Capacitor[4] = 
{
   /* Cin   */ { 0x09, 0x03, }, /* 9, 3 */
   /* Cout  */ { 0x09, 0x01, }, /* 9, 1 */
   /* aCin  */ { 0x09, 0x04, }, /* 9, 4 */
   /* aCout */ { 0x09, 0x02  }  /* 9, 2 */
};

/* Component data table for the apiCapacitor's of GainInv4. */
extern const ot_apiCapacitor ot_FPAA2_GainInv4_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cout  */ { 0x03, 0x01, }, /* 3, 1 */
   /* aCin  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCout */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of PeriodicWave2. */
extern const ot_apiCapacitor ot_FPAA2_PeriodicWave2_Capacitor[1] = 
{
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiComparator's of Comparator4. */
extern ot_apiComparator ot_FPAA3_Comparator4_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000127 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of Comparator5. */
extern ot_apiComparator ot_FPAA3_Comparator5_Comparator[1] = 
{
   /* comp1 */
   {
      0x0A, /* bank:    10 */
      0x09, /* byteNum: 9 */
      0x000107 /* currentValue */
   } 
};

/* Component data table for the apiCapacitor's of FilterBilinear2. */
extern const ot_apiCapacitor ot_FPAA3_FilterBilinear2_Capacitor[3] = 
{
   /* Cin   */ { 0x03, 0x07, }, /* 3, 7 */
   /* Cint  */ { 0x03, 0x05, }, /* 3, 5 */
   /* Cout  */ { 0x03, 0x06  }  /* 3, 6 */
};

/* Component data table for the apiCapacitor's of FilterBiquad3. */
extern const ot_apiCapacitor ot_FPAA3_FilterBiquad3_Capacitor[8] = 
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

/* Component data table for the apiCapacitor's of FilterBiquad4. */
extern const ot_apiCapacitor ot_FPAA3_FilterBiquad4_Capacitor[8] = 
{
   /* C2    */ { 0x05, 0x07, }, /* 5, 7 */
   /* C3    */ { 0x05, 0x03, }, /* 5, 3 */
   /* C4    */ { 0x05, 0x02, }, /* 5, 2 */
   /* CA1   */ { 0x05, 0x06, }, /* 5, 6 */
   /* CA2   */ { 0x05, 0x05, }, /* 5, 5 */
   /* CB1   */ { 0x05, 0x01, }, /* 5, 1 */
   /* CB2   */ { 0x05, 0x00, }, /* 5, 0 */
   /* Cp    */ { 0x05, 0x04  }  /* 5, 4 */
};

/* Component data table for the apiCapacitor's of GainInv3. */
extern const ot_apiCapacitor ot_FPAA3_GainInv3_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cout  */ { 0x03, 0x01, }, /* 3, 1 */
   /* aCin  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCout */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of GainInv4. */
extern const ot_apiCapacitor ot_FPAA3_GainInv4_Capacitor[4] = 
{
   /* Cin   */ { 0x09, 0x03, }, /* 9, 3 */
   /* Cout  */ { 0x09, 0x01, }, /* 9, 1 */
   /* aCin  */ { 0x09, 0x04, }, /* 9, 4 */
   /* aCout */ { 0x09, 0x02  }  /* 9, 2 */
};

/* Component data table for the apiCapacitor's of PeriodicWave2. */
extern const ot_apiCapacitor ot_FPAA3_PeriodicWave2_Capacitor[1] = 
{
   /* Cout  */ { 0x09, 0x05  }  /* 9, 5 */
};

/* Component data table for the apiComparator's of Comparator4. */
extern ot_apiComparator ot_FPAA4_Comparator4_Comparator[1] = 
{
   /* comp1 */
   {
      0x0A, /* bank:    10 */
      0x09, /* byteNum: 9 */
      0x000127 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of Comparator5. */
extern ot_apiComparator ot_FPAA4_Comparator5_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000107 /* currentValue */
   } 
};

/* Component data table for the apiCapacitor's of FilterBilinear2. */
extern const ot_apiCapacitor ot_FPAA4_FilterBilinear2_Capacitor[3] = 
{
   /* Cin   */ { 0x09, 0x07, }, /* 9, 7 */
   /* Cint  */ { 0x09, 0x05, }, /* 9, 5 */
   /* Cout  */ { 0x09, 0x06  }  /* 9, 6 */
};

/* Component data table for the apiCapacitor's of FilterBiquad3. */
extern const ot_apiCapacitor ot_FPAA4_FilterBiquad3_Capacitor[8] = 
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

/* Component data table for the apiCapacitor's of FilterBiquad4. */
extern const ot_apiCapacitor ot_FPAA4_FilterBiquad4_Capacitor[8] = 
{
   /* C2    */ { 0x05, 0x07, }, /* 5, 7 */
   /* C3    */ { 0x05, 0x03, }, /* 5, 3 */
   /* C4    */ { 0x05, 0x02, }, /* 5, 2 */
   /* CA1   */ { 0x05, 0x06, }, /* 5, 6 */
   /* CA2   */ { 0x05, 0x05, }, /* 5, 5 */
   /* CB1   */ { 0x05, 0x01, }, /* 5, 1 */
   /* CB2   */ { 0x05, 0x00, }, /* 5, 0 */
   /* Cp    */ { 0x05, 0x04  }  /* 5, 4 */
};

/* Component data table for the apiCapacitor's of GainInv3. */
extern const ot_apiCapacitor ot_FPAA4_GainInv3_Capacitor[4] = 
{
   /* Cin   */ { 0x09, 0x03, }, /* 9, 3 */
   /* Cout  */ { 0x09, 0x01, }, /* 9, 1 */
   /* aCin  */ { 0x09, 0x04, }, /* 9, 4 */
   /* aCout */ { 0x09, 0x02  }  /* 9, 2 */
};

/* Component data table for the apiCapacitor's of GainInv4. */
extern const ot_apiCapacitor ot_FPAA4_GainInv4_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cout  */ { 0x03, 0x01, }, /* 3, 1 */
   /* aCin  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCout */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of PeriodicWave2. */
extern const ot_apiCapacitor ot_FPAA4_PeriodicWave2_Capacitor[1] = 
{
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component data table for the apiComparator's of Comparator4. */
extern ot_apiComparator ot_FPAA5_Comparator4_Comparator[1] = 
{
   /* comp1 */
   {
      0x0A, /* bank:    10 */
      0x09, /* byteNum: 9 */
      0x000127 /* currentValue */
   } 
};

/* Component data table for the apiComparator's of Comparator5. */
extern ot_apiComparator ot_FPAA5_Comparator5_Comparator[1] = 
{
   /* comp1 */
   {
      0x04, /* bank:    4 */
      0x09, /* byteNum: 9 */
      0x000107 /* currentValue */
   } 
};

/* Component data table for the apiCapacitor's of FilterBilinear2. */
extern const ot_apiCapacitor ot_FPAA5_FilterBilinear2_Capacitor[3] = 
{
   /* Cin   */ { 0x09, 0x07, }, /* 9, 7 */
   /* Cint  */ { 0x09, 0x05, }, /* 9, 5 */
   /* Cout  */ { 0x09, 0x06  }  /* 9, 6 */
};

/* Component data table for the apiCapacitor's of FilterBiquad3. */
extern const ot_apiCapacitor ot_FPAA5_FilterBiquad3_Capacitor[8] = 
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

/* Component data table for the apiCapacitor's of FilterBiquad4. */
extern const ot_apiCapacitor ot_FPAA5_FilterBiquad4_Capacitor[8] = 
{
   /* C2    */ { 0x05, 0x07, }, /* 5, 7 */
   /* C3    */ { 0x05, 0x03, }, /* 5, 3 */
   /* C4    */ { 0x05, 0x02, }, /* 5, 2 */
   /* CA1   */ { 0x05, 0x06, }, /* 5, 6 */
   /* CA2   */ { 0x05, 0x05, }, /* 5, 5 */
   /* CB1   */ { 0x05, 0x01, }, /* 5, 1 */
   /* CB2   */ { 0x05, 0x00, }, /* 5, 0 */
   /* Cp    */ { 0x05, 0x04  }  /* 5, 4 */
};

/* Component data table for the apiCapacitor's of GainInv3. */
extern const ot_apiCapacitor ot_FPAA5_GainInv3_Capacitor[4] = 
{
   /* Cin   */ { 0x09, 0x03, }, /* 9, 3 */
   /* Cout  */ { 0x09, 0x01, }, /* 9, 1 */
   /* aCin  */ { 0x09, 0x04, }, /* 9, 4 */
   /* aCout */ { 0x09, 0x02  }  /* 9, 2 */
};

/* Component data table for the apiCapacitor's of GainInv4. */
extern const ot_apiCapacitor ot_FPAA5_GainInv4_Capacitor[4] = 
{
   /* Cin   */ { 0x03, 0x03, }, /* 3, 3 */
   /* Cout  */ { 0x03, 0x01, }, /* 3, 1 */
   /* aCin  */ { 0x03, 0x04, }, /* 3, 4 */
   /* aCout */ { 0x03, 0x02  }  /* 3, 2 */
};

/* Component data table for the apiCapacitor's of PeriodicWave2. */
extern const ot_apiCapacitor ot_FPAA5_PeriodicWave2_Capacitor[1] = 
{
   /* Cout  */ { 0x03, 0x05  }  /* 3, 5 */
};

/* Component map for Comparator2 */
void* ot_FPAA1_Comparator2_Components[1] = 
{
   (void*) &ot_FPAA1_Comparator2_Comparator[0]  /* comp1 */
};

/* Component map for Comparator3 */
void* ot_FPAA1_Comparator3_Components[1] = 
{
   (void*) &ot_FPAA1_Comparator3_Comparator[0]  /* comp1 */
};

/* Component map for FilterBilinear1 */
void* ot_FPAA1_FilterBilinear1_Components[3] = 
{
   (void*) &ot_FPAA1_FilterBilinear1_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA1_FilterBilinear1_Capacitor[1],  /* Cint */
   (void*) &ot_FPAA1_FilterBilinear1_Capacitor[2]  /* Cout */
};

/* Component map for FilterBiquad1 */
void* ot_FPAA1_FilterBiquad1_Components[8] = 
{
   (void*) &ot_FPAA1_FilterBiquad1_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA1_FilterBiquad1_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA1_FilterBiquad1_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA1_FilterBiquad1_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA1_FilterBiquad1_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA1_FilterBiquad1_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA1_FilterBiquad1_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA1_FilterBiquad1_Capacitor[7]  /* Cp */
};

/* Component map for FilterBiquad2 */
void* ot_FPAA1_FilterBiquad2_Components[8] = 
{
   (void*) &ot_FPAA1_FilterBiquad2_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA1_FilterBiquad2_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA1_FilterBiquad2_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA1_FilterBiquad2_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA1_FilterBiquad2_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA1_FilterBiquad2_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA1_FilterBiquad2_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA1_FilterBiquad2_Capacitor[7]  /* Cp */
};

/* Component map for GainInv1 */
void* ot_FPAA1_GainInv1_Components[4] = 
{
   (void*) &ot_FPAA1_GainInv1_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA1_GainInv1_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA1_GainInv1_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA1_GainInv1_Capacitor[3]  /* aCout */
};

/* Component map for GainInv2 */
void* ot_FPAA1_GainInv2_Components[4] = 
{
   (void*) &ot_FPAA1_GainInv2_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA1_GainInv2_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA1_GainInv2_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA1_GainInv2_Capacitor[3]  /* aCout */
};

/* Component map for PeriodicWave1 */
void* ot_FPAA1_PeriodicWave1_Components[1] = 
{
   (void*) &ot_FPAA1_PeriodicWave1_Capacitor[0]  /* Cout */
};

/* Component map for Comparator4 */
void* ot_FPAA2_Comparator4_Components[1] = 
{
   (void*) &ot_FPAA2_Comparator4_Comparator[0]  /* comp1 */
};

/* Component map for Comparator5 */
void* ot_FPAA2_Comparator5_Components[1] = 
{
   (void*) &ot_FPAA2_Comparator5_Comparator[0]  /* comp1 */
};

/* Component map for FilterBilinear2 */
void* ot_FPAA2_FilterBilinear2_Components[3] = 
{
   (void*) &ot_FPAA2_FilterBilinear2_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA2_FilterBilinear2_Capacitor[1],  /* Cint */
   (void*) &ot_FPAA2_FilterBilinear2_Capacitor[2]  /* Cout */
};

/* Component map for FilterBiquad3 */
void* ot_FPAA2_FilterBiquad3_Components[8] = 
{
   (void*) &ot_FPAA2_FilterBiquad3_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA2_FilterBiquad3_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA2_FilterBiquad3_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA2_FilterBiquad3_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA2_FilterBiquad3_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA2_FilterBiquad3_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA2_FilterBiquad3_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA2_FilterBiquad3_Capacitor[7]  /* Cp */
};

/* Component map for FilterBiquad4 */
void* ot_FPAA2_FilterBiquad4_Components[8] = 
{
   (void*) &ot_FPAA2_FilterBiquad4_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA2_FilterBiquad4_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA2_FilterBiquad4_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA2_FilterBiquad4_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA2_FilterBiquad4_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA2_FilterBiquad4_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA2_FilterBiquad4_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA2_FilterBiquad4_Capacitor[7]  /* Cp */
};

/* Component map for GainInv3 */
void* ot_FPAA2_GainInv3_Components[4] = 
{
   (void*) &ot_FPAA2_GainInv3_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA2_GainInv3_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA2_GainInv3_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA2_GainInv3_Capacitor[3]  /* aCout */
};

/* Component map for GainInv4 */
void* ot_FPAA2_GainInv4_Components[4] = 
{
   (void*) &ot_FPAA2_GainInv4_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA2_GainInv4_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA2_GainInv4_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA2_GainInv4_Capacitor[3]  /* aCout */
};

/* Component map for PeriodicWave2 */
void* ot_FPAA2_PeriodicWave2_Components[1] = 
{
   (void*) &ot_FPAA2_PeriodicWave2_Capacitor[0]  /* Cout */
};

/* Component map for Comparator4 */
void* ot_FPAA3_Comparator4_Components[1] = 
{
   (void*) &ot_FPAA3_Comparator4_Comparator[0]  /* comp1 */
};

/* Component map for Comparator5 */
void* ot_FPAA3_Comparator5_Components[1] = 
{
   (void*) &ot_FPAA3_Comparator5_Comparator[0]  /* comp1 */
};

/* Component map for FilterBilinear2 */
void* ot_FPAA3_FilterBilinear2_Components[3] = 
{
   (void*) &ot_FPAA3_FilterBilinear2_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA3_FilterBilinear2_Capacitor[1],  /* Cint */
   (void*) &ot_FPAA3_FilterBilinear2_Capacitor[2]  /* Cout */
};

/* Component map for FilterBiquad3 */
void* ot_FPAA3_FilterBiquad3_Components[8] = 
{
   (void*) &ot_FPAA3_FilterBiquad3_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA3_FilterBiquad3_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA3_FilterBiquad3_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA3_FilterBiquad3_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA3_FilterBiquad3_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA3_FilterBiquad3_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA3_FilterBiquad3_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA3_FilterBiquad3_Capacitor[7]  /* Cp */
};

/* Component map for FilterBiquad4 */
void* ot_FPAA3_FilterBiquad4_Components[8] = 
{
   (void*) &ot_FPAA3_FilterBiquad4_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA3_FilterBiquad4_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA3_FilterBiquad4_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA3_FilterBiquad4_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA3_FilterBiquad4_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA3_FilterBiquad4_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA3_FilterBiquad4_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA3_FilterBiquad4_Capacitor[7]  /* Cp */
};

/* Component map for GainInv3 */
void* ot_FPAA3_GainInv3_Components[4] = 
{
   (void*) &ot_FPAA3_GainInv3_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA3_GainInv3_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA3_GainInv3_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA3_GainInv3_Capacitor[3]  /* aCout */
};

/* Component map for GainInv4 */
void* ot_FPAA3_GainInv4_Components[4] = 
{
   (void*) &ot_FPAA3_GainInv4_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA3_GainInv4_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA3_GainInv4_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA3_GainInv4_Capacitor[3]  /* aCout */
};

/* Component map for PeriodicWave2 */
void* ot_FPAA3_PeriodicWave2_Components[1] = 
{
   (void*) &ot_FPAA3_PeriodicWave2_Capacitor[0]  /* Cout */
};

/* Component map for Comparator4 */
void* ot_FPAA4_Comparator4_Components[1] = 
{
   (void*) &ot_FPAA4_Comparator4_Comparator[0]  /* comp1 */
};

/* Component map for Comparator5 */
void* ot_FPAA4_Comparator5_Components[1] = 
{
   (void*) &ot_FPAA4_Comparator5_Comparator[0]  /* comp1 */
};

/* Component map for FilterBilinear2 */
void* ot_FPAA4_FilterBilinear2_Components[3] = 
{
   (void*) &ot_FPAA4_FilterBilinear2_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA4_FilterBilinear2_Capacitor[1],  /* Cint */
   (void*) &ot_FPAA4_FilterBilinear2_Capacitor[2]  /* Cout */
};

/* Component map for FilterBiquad3 */
void* ot_FPAA4_FilterBiquad3_Components[8] = 
{
   (void*) &ot_FPAA4_FilterBiquad3_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA4_FilterBiquad3_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA4_FilterBiquad3_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA4_FilterBiquad3_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA4_FilterBiquad3_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA4_FilterBiquad3_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA4_FilterBiquad3_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA4_FilterBiquad3_Capacitor[7]  /* Cp */
};

/* Component map for FilterBiquad4 */
void* ot_FPAA4_FilterBiquad4_Components[8] = 
{
   (void*) &ot_FPAA4_FilterBiquad4_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA4_FilterBiquad4_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA4_FilterBiquad4_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA4_FilterBiquad4_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA4_FilterBiquad4_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA4_FilterBiquad4_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA4_FilterBiquad4_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA4_FilterBiquad4_Capacitor[7]  /* Cp */
};

/* Component map for GainInv3 */
void* ot_FPAA4_GainInv3_Components[4] = 
{
   (void*) &ot_FPAA4_GainInv3_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA4_GainInv3_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA4_GainInv3_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA4_GainInv3_Capacitor[3]  /* aCout */
};

/* Component map for GainInv4 */
void* ot_FPAA4_GainInv4_Components[4] = 
{
   (void*) &ot_FPAA4_GainInv4_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA4_GainInv4_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA4_GainInv4_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA4_GainInv4_Capacitor[3]  /* aCout */
};

/* Component map for PeriodicWave2 */
void* ot_FPAA4_PeriodicWave2_Components[1] = 
{
   (void*) &ot_FPAA4_PeriodicWave2_Capacitor[0]  /* Cout */
};

/* Component map for Comparator4 */
void* ot_FPAA5_Comparator4_Components[1] = 
{
   (void*) &ot_FPAA5_Comparator4_Comparator[0]  /* comp1 */
};

/* Component map for Comparator5 */
void* ot_FPAA5_Comparator5_Components[1] = 
{
   (void*) &ot_FPAA5_Comparator5_Comparator[0]  /* comp1 */
};

/* Component map for FilterBilinear2 */
void* ot_FPAA5_FilterBilinear2_Components[3] = 
{
   (void*) &ot_FPAA5_FilterBilinear2_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA5_FilterBilinear2_Capacitor[1],  /* Cint */
   (void*) &ot_FPAA5_FilterBilinear2_Capacitor[2]  /* Cout */
};

/* Component map for FilterBiquad3 */
void* ot_FPAA5_FilterBiquad3_Components[8] = 
{
   (void*) &ot_FPAA5_FilterBiquad3_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA5_FilterBiquad3_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA5_FilterBiquad3_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA5_FilterBiquad3_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA5_FilterBiquad3_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA5_FilterBiquad3_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA5_FilterBiquad3_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA5_FilterBiquad3_Capacitor[7]  /* Cp */
};

/* Component map for FilterBiquad4 */
void* ot_FPAA5_FilterBiquad4_Components[8] = 
{
   (void*) &ot_FPAA5_FilterBiquad4_Capacitor[0],  /* C2 */
   (void*) &ot_FPAA5_FilterBiquad4_Capacitor[1],  /* C3 */
   (void*) &ot_FPAA5_FilterBiquad4_Capacitor[2],  /* C4 */
   (void*) &ot_FPAA5_FilterBiquad4_Capacitor[3],  /* CA1 */
   (void*) &ot_FPAA5_FilterBiquad4_Capacitor[4],  /* CA2 */
   (void*) &ot_FPAA5_FilterBiquad4_Capacitor[5],  /* CB1 */
   (void*) &ot_FPAA5_FilterBiquad4_Capacitor[6],  /* CB2 */
   (void*) &ot_FPAA5_FilterBiquad4_Capacitor[7]  /* Cp */
};

/* Component map for GainInv3 */
void* ot_FPAA5_GainInv3_Components[4] = 
{
   (void*) &ot_FPAA5_GainInv3_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA5_GainInv3_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA5_GainInv3_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA5_GainInv3_Capacitor[3]  /* aCout */
};

/* Component map for GainInv4 */
void* ot_FPAA5_GainInv4_Components[4] = 
{
   (void*) &ot_FPAA5_GainInv4_Capacitor[0],  /* Cin */
   (void*) &ot_FPAA5_GainInv4_Capacitor[1],  /* Cout */
   (void*) &ot_FPAA5_GainInv4_Capacitor[2],  /* aCin */
   (void*) &ot_FPAA5_GainInv4_Capacitor[3]  /* aCout */
};

/* Component map for PeriodicWave2 */
void* ot_FPAA5_PeriodicWave2_Components[1] = 
{
   (void*) &ot_FPAA5_PeriodicWave2_Capacitor[0]  /* Cout */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to its component map */                              
void** ot_apiCAMComponentData[ot_apiCAMCount] =
{
   ot_FPAA1_Comparator2_Components,         /* ot_FPAA1_Comparator2 */
   ot_FPAA1_Comparator3_Components,         /* ot_FPAA1_Comparator3 */
   ot_FPAA1_FilterBilinear1_Components,     /* ot_FPAA1_FilterBilinear1 */
   ot_FPAA1_FilterBiquad1_Components,       /* ot_FPAA1_FilterBiquad1 */
   ot_FPAA1_FilterBiquad2_Components,       /* ot_FPAA1_FilterBiquad2 */
   ot_FPAA1_GainInv1_Components,            /* ot_FPAA1_GainInv1 */
   ot_FPAA1_GainInv2_Components,            /* ot_FPAA1_GainInv2 */
   ot_FPAA1_PeriodicWave1_Components,       /* ot_FPAA1_PeriodicWave1 */
   ot_FPAA2_Comparator4_Components,         /* ot_FPAA2_Comparator4 */
   ot_FPAA2_Comparator5_Components,         /* ot_FPAA2_Comparator5 */
   ot_FPAA2_FilterBilinear2_Components,     /* ot_FPAA2_FilterBilinear2 */
   ot_FPAA2_FilterBiquad3_Components,       /* ot_FPAA2_FilterBiquad3 */
   ot_FPAA2_FilterBiquad4_Components,       /* ot_FPAA2_FilterBiquad4 */
   ot_FPAA2_GainInv3_Components,            /* ot_FPAA2_GainInv3 */
   ot_FPAA2_GainInv4_Components,            /* ot_FPAA2_GainInv4 */
   ot_FPAA2_PeriodicWave2_Components,       /* ot_FPAA2_PeriodicWave2 */
   ot_FPAA3_Comparator4_Components,         /* ot_FPAA3_Comparator4 */
   ot_FPAA3_Comparator5_Components,         /* ot_FPAA3_Comparator5 */
   ot_FPAA3_FilterBilinear2_Components,     /* ot_FPAA3_FilterBilinear2 */
   ot_FPAA3_FilterBiquad3_Components,       /* ot_FPAA3_FilterBiquad3 */
   ot_FPAA3_FilterBiquad4_Components,       /* ot_FPAA3_FilterBiquad4 */
   ot_FPAA3_GainInv3_Components,            /* ot_FPAA3_GainInv3 */
   ot_FPAA3_GainInv4_Components,            /* ot_FPAA3_GainInv4 */
   ot_FPAA3_PeriodicWave2_Components,       /* ot_FPAA3_PeriodicWave2 */
   ot_FPAA4_Comparator4_Components,         /* ot_FPAA4_Comparator4 */
   ot_FPAA4_Comparator5_Components,         /* ot_FPAA4_Comparator5 */
   ot_FPAA4_FilterBilinear2_Components,     /* ot_FPAA4_FilterBilinear2 */
   ot_FPAA4_FilterBiquad3_Components,       /* ot_FPAA4_FilterBiquad3 */
   ot_FPAA4_FilterBiquad4_Components,       /* ot_FPAA4_FilterBiquad4 */
   ot_FPAA4_GainInv3_Components,            /* ot_FPAA4_GainInv3 */
   ot_FPAA4_GainInv4_Components,            /* ot_FPAA4_GainInv4 */
   ot_FPAA4_PeriodicWave2_Components,       /* ot_FPAA4_PeriodicWave2 */
   ot_FPAA5_Comparator4_Components,         /* ot_FPAA5_Comparator4 */
   ot_FPAA5_Comparator5_Components,         /* ot_FPAA5_Comparator5 */
   ot_FPAA5_FilterBilinear2_Components,     /* ot_FPAA5_FilterBilinear2 */
   ot_FPAA5_FilterBiquad3_Components,       /* ot_FPAA5_FilterBiquad3 */
   ot_FPAA5_FilterBiquad4_Components,       /* ot_FPAA5_FilterBiquad4 */
   ot_FPAA5_GainInv3_Components,            /* ot_FPAA5_GainInv3 */
   ot_FPAA5_GainInv4_Components,            /* ot_FPAA5_GainInv4 */
   ot_FPAA5_PeriodicWave2_Components        /* ot_FPAA5_PeriodicWave2 */
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA1 */                                                       
short ot_FPAA1_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   64,     /* ApexClock3 */
   8,      /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA2 */                                                       
short ot_FPAA2_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   64,     /* ApexClock3 */
   8,      /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA3 */                                                       
short ot_FPAA3_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   64,     /* ApexClock3 */
   8,      /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA4 */                                                       
short ot_FPAA4_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   64,     /* ApexClock3 */
   8,      /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* Table to map clock divider ID's to the divider's current value for  
chip FPAA5 */                                                       
short ot_FPAA5_Clocks[12] =
{
   0,      /* ApexClock5DelayPeriods */
   1,      /* ApexClock5 */
   0,      /* ApexClock4DelayPeriods */
   1,      /* ApexClock4 */
   64,     /* ApexClock3 */
   8,      /* ApexClock2 */
   1,      /* ApexClock1 */
   4,      /* ApexClock0 */
   0,      /* ClockPowerUps DO NOT USE*/
   1,      /* Sys1Divisor */
   1,      /* Sys2Divisor */
   250     /* Sys1/Sys2 flags - true implies Sys1 */
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's clock data. */                         
short* ot_apiClockDivisorData[ot_apiChipCount] =
{
   ot_FPAA1_Clocks,
   ot_FPAA2_Clocks,
   ot_FPAA3_Clocks,
   ot_FPAA4_Clocks,
   ot_FPAA5_Clocks
};

/* This array maps the numeric ID assigned to each chip in the      
ApiCode.h file to the chip's master clock frequency. */             
const long ot_apiMasterClockData[ot_apiChipCount] =
{
   (long) 16000000.000000,
   (long) 16000000.000000,
   (long) 16000000.000000,
   (long) 16000000.000000,
   (long) 16000000.000000
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear1 */                                                  
const ot_ApexClockDivisor ot_FPAA1_FilterBilinear1_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad1 */                                                    
const ot_ApexClockDivisor ot_FPAA1_FilterBiquad1_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad2 */                                                    
const ot_ApexClockDivisor ot_FPAA1_FilterBiquad2_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
const ot_ApexClockDivisor ot_FPAA2_FilterBilinear2_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad3 */                                                    
const ot_ApexClockDivisor ot_FPAA2_FilterBiquad3_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad4 */                                                    
const ot_ApexClockDivisor ot_FPAA2_FilterBiquad4_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
const ot_ApexClockDivisor ot_FPAA3_FilterBilinear2_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad3 */                                                    
const ot_ApexClockDivisor ot_FPAA3_FilterBiquad3_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad4 */                                                    
const ot_ApexClockDivisor ot_FPAA3_FilterBiquad4_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
const ot_ApexClockDivisor ot_FPAA4_FilterBilinear2_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad3 */                                                    
const ot_ApexClockDivisor ot_FPAA4_FilterBiquad3_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad4 */                                                    
const ot_ApexClockDivisor ot_FPAA4_FilterBiquad4_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBilinear2 */                                                  
const ot_ApexClockDivisor ot_FPAA5_FilterBilinear2_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad3 */                                                    
const ot_ApexClockDivisor ot_FPAA5_FilterBiquad3_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* Table to map module virtual clocks to actual chip clock for module  
FilterBiquad4 */                                                    
const ot_ApexClockDivisor ot_FPAA5_FilterBiquad4_CAMClocks[4] =
{
   ot_ApexClockDivisor_Clock0,           /* ClockA */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockB */
   (ot_ApexClockDivisor) ot_apiInvalid,  /* ClockC */
   (ot_ApexClockDivisor) ot_apiInvalid   /* ClockD */
};

/* This array maps the numeric ID assigned to each CAM in the       
ApiCode.h file to the CAM's virtual clock mapping. */               
const ot_ApexClockDivisor* ot_apiCAMClockToApexChipClock[ot_apiCAMCount] =
{
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid,
   (ot_ApexClockDivisor*) ot_apiInvalid
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

     const ot_Byte* ot_GetPrimaryConfigData(ot_Chip chip, int* count)
     {
        /* Set how long it is */
        *count = ot_apiPrimaryConfigData[chip].length;
        
        /* Return the pointer to the configuration data */
        return ot_apiPrimaryConfigData[chip].data;
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

     const ot_Byte* ot_GetResetData(ot_Chip chip, int* count)
     {
        /* Initialize our data template */
        static ot_Byte resetData[] =
        {
           0xD5, /* Synch                 */
           0x00, /* Address1 Placeholder  */
           0x6F  /* Control Byte (48 Vortex | 27 Apex) */
        };
        
        /* Set it to use this chip's Address1 */
        resetData[1] = ot_apiAddress1[chip];
        
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

     const ot_Byte* ot_GetVortexSleepData(ot_Chip chip, int* count, ot_Bool powerDown)
     {
        /* Initialize our data template */
        static ot_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           ot_VortexControlByte_EndExecute,   /* Control Byte          */
        
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
        sleepData[1] = ot_apiAddress1[chip];
        
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

     const ot_Byte* ot_GetApexSleepData(ot_Chip chip, int* count, 
                                       ot_Bool powerDown,
                                       ot_Bool VMR,
                                       ot_Bool watchDog
                                       )
     {
        /* Initialize our data template */
        static ot_Byte sleepData[] =
        {
           0xD5,                            /* Synch                 */
           0x00,                            /* Address1 Placeholder  */
           ot_ApexControlByte_EndExecute,     /* Control Byte          */
        
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
        sleepData[1] = ot_apiAddress1[chip];
        
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

     void ot_InitializeVortexReconfigData(ot_Chip chip)
     {
        /* Get a pointer to the info struct */
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = ot_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        ot_ClearVortexReconfigData(chip);
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

     void ot_InitializeApexReconfigData(ot_Chip chip)
     {
        /* Get a pointer to the info struct */
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
        /* Initialize the pointer to the buffer */
        pInfo->data = ot_apiReconfigBuffer[chip];
        
        /* Now do everything that needs to be done in a reset situation */
        ot_ClearApexReconfigData(chip);
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

     void ot_ClearVortexReconfigData(ot_Chip chip)
     {
        /* Get a pointer to the info struct */
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        ot_apiReconfigData[chip]->length = 3;
        ot_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = ot_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = ot_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = ot_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = ot_VortexControlByte_EndExecute;     /* Control Byte */
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

     void ot_ClearApexReconfigData(ot_Chip chip)
     {
        /* Get a pointer to the info struct */
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
        /* We don't have to remove any data, just adjust the info */
        ot_apiReconfigData[chip]->length = 3;
        ot_apiReconfigData[chip]->lastUpdateIndex = 0;
        
        /* Reset the stream info flags */
        pInfo->flags = ot_ApiReconfigState_Initialized;
        
        /* Configure the data header for a reconfiguration */
        pInfo->data[0] = ot_apiSynchByte;       /* Synch Byte   */
        pInfo->data[1] = ot_apiAddress1[chip];  /* Address1    */
        pInfo->data[2] = ot_ApexControlByte_EndExecute;     /* Control Byte */
     }

  /*--------------------------------------------------------------*\
  |                   ShutdownVortexReconfigData                   |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Frees memory allocated by ot_InitializeVortexReconfigData.    |
  |  ot_InitializeVortexReconfigData must be called again prior to |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void ot_ShutdownVortexReconfigData(ot_Chip chip)
     {
        /* Get a pointer to the info struct */
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
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
  |  Frees memory allocated by ot_InitializeApexReconfigData.      |
  |  ot_InitializeApexReconfigData must be called again prior to   |
  |  using any other reconfiguration functions for the chip.       |
  |                                                                |
  \*--------------------------------------------------------------*/

     void ot_ShutdownApexReconfigData(ot_Chip chip)
     {
        /* Get a pointer to the info struct */
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
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

     const ot_Byte* ot_GetVortexReconfigData(ot_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
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

     const ot_Byte* ot_GetApexReconfigData(ot_Chip chip, int* count)
     {
        /* Get a pointer to the info struct */
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
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

     void ot_SetVortexReconfigControlFlags(ot_Chip chip, ot_VortexControlByte flags)
     {
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
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

     void ot_SetApexReconfigControlFlags(ot_Chip chip, ot_ApexControlByte flags)
     {
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
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

     void ot_SetApexReconfigControlFlagsNOP(ot_Chip chip, ot_ApexControlByte flags)
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

     ot_VortexControlByte ot_GetVortexReconfigControlFlags(ot_Chip chip)
     {
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
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

     ot_ApexControlByte ot_GetApexReconfigControlFlags(ot_Chip chip)
     {
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
        
        /* Control byte is index 2 */
        return pInfo->data[2];
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

     //NEED TO TAKE WHICH PRESCALER WAS USED INTO ACCOUNT, i.e., ot_ClockDivisor_PreScale
ot_Frequency ot_GetApexClockFrequency(ot_CAM cam, ot_CAMClock camClock)
     {
        ot_Chip chip = ot_apiChipFromCAM[cam];
        int sysClockScale;
        int chipClockNumber = ot_apiCAMClockToApexChipClock[cam][camClock];
         
        //Sys1 == true;  Sys2 == false.
        if(ot_apiClockDivisorData[chip][ot_ApexClockDivisor_ClockSys1Sys2Flag] & (1<<chipClockNumber)){
           //Using Sys1
           sysClockScale = ot_apiClockDivisorData[chip][ot_ApexClockDivisor_ClockSys1];
        }else{
           //Using Sys2
           sysClockScale = ot_apiClockDivisorData[chip][ot_ApexClockDivisor_ClockSys2];
        }
        
        return ot_apiMasterClockData[chip] / 
           (sysClockScale * ot_apiClockDivisorData[chip][chipClockNumber]);
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

     void ot_SetCapValue(ot_CAM cam, ot_Component capID, ot_Byte value)
     {
        /* First figure out what cap this is for */
        const ot_apiCapacitor* pCap = ot_apiCAMComponentData[cam][capID];
        
        /* And then just do a regular one-byte update */
        ot_BuildReconfigDataBlock(ot_apiChipFromCAM[cam], pCap->bank, pCap->byteNum, &value, 1);
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

     void ot_SetApexComparator(ot_CAM cam, ot_Component compID, ot_ComparatorMask compMask, ot_Comparator values)
     {
        /* This will hold the final three-byte value of the comparator */
        ot_Byte newValues[3];
         
        /* Figure out which comparator this is for */
        ot_apiComparator* pComparator = ot_apiCAMComponentData[cam][compID];
        
        /* Set the new values */
        pComparator->currentValue = (pComparator->currentValue & ~compMask) | values;
        
        /* Extract the short into the three bytes that make up the comparator */
        newValues[0] = pComparator->currentValue & 0xFF;
        newValues[1] = (pComparator->currentValue >> 8) & 0xFF;
        newValues[2] = (pComparator->currentValue >> 16) & 0xFF;
         
        /* And now do the update */
        ot_BuildReconfigDataBlock(
           ot_apiChipFromCAM[cam], 
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

     void ot_ChooseCapRatio(double dGain, ot_Byte* pCap1, ot_Byte* pCap2)
     {
        double realizedGain;
        double realizedError;
        double currentError = 99999;
        
        ot_Byte capTry1;
        ot_Byte capTry2;
        
        /* Start off with some default values */
        ot_Byte currentCap1 = 1;
        ot_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = ot_AdjustCap(dGain * capTry2);
        
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

     ot_Byte ot_AdjustCap(double dValue)
     {
        /* Start by just rounding.  We will handle special cases later */
        ot_Byte capValue = (ot_Byte) (dValue + 0.5);
        
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

     void ot_FixedChooseCapRatio(double dGain, ot_Byte* pCap1, ot_Byte* pCap2)
     {
         ot_Fixed realizedGain;
        ot_Fixed workGain = ot_FloatToFixed(dGain);
        ot_Fixed realizedError;
        ot_Fixed currentError = 0x7FFFFFFF;
         
        ot_Byte capTry1;
        ot_Byte capTry2;
        
        /* Start off with some default values */
        ot_Byte currentCap1 = 1;
        ot_Byte currentCap2 = 1;
        
        /* Run all the way down the scale looking for the best ratio... */
        for (capTry2 = 255; capTry2 > 0; capTry2--)
        {
           capTry1 = ot_FixedAdjustCap(workGain * capTry2);
        
           /* See how good it came out */
           realizedGain = ot_FixedDivide(ot_IntToFixed(capTry1), ot_IntToFixed(capTry2));
           realizedError = ot_FixedDivide(ot_FixedAbs(workGain - realizedGain), workGain);
        
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

     ot_Byte ot_FixedAdjustCap(ot_Fixed fValue)
     {
        ot_Byte capValue = (ot_Byte) ot_FixedToInt(fValue);
        
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

     void ot_LoadLUT(ot_CAM cam, ot_Byte* values, ot_Byte startIndex, short count)
     {
        int bank = 16 + (int) (startIndex / 32);
        int byte = startIndex % 32;
         
        /* Look up the chip and do the update */
        ot_BuildReconfigDataBlock(ot_apiChipFromCAM[cam], bank, byte, values, count);
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

     void ot_SetApexCounterRollOver(ot_CAM cam, ot_Byte rollOver)
     {
        /* Store the change in the reconfiguration data */
        ot_BuildReconfigDataBlock(ot_apiChipFromCAM[cam], 1, 20, &rollOver, 1);
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

     ot_Fixed ot_FloatToFixed(float fValue)
     {
        return (ot_Fixed) (fValue * 65536.0);
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

     ot_Fixed ot_IntToFixed(int value)
     {
        return ((ot_Fixed) (value)) << 16;
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

     int ot_FixedToInt(ot_Fixed fValue)
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

     float ot_FixedToFloat(ot_Fixed fValue)
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

     ot_Fixed ot_FixedAbs(ot_Fixed fValue)
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

     ot_Fixed ot_FixedDivide(ot_Fixed fLeft, ot_Fixed fRight)
     {
        unsigned int left_neg = (fLeft & 0x80000000) != 0;
        unsigned int right_neg = (fRight & 0x80000000) != 0;
         
        /* Make sure we're using positive numbers for the division. We'll handle sign later. */
        unsigned long lefttemp = (left_neg ? -fLeft : fLeft);
        unsigned long righttemp = (right_neg ? -fRight : fRight);
         
        ot_Fixed result = 0;
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

     void ot_BuildReconfigDataBlock(ot_Chip chip, ot_Byte bank, ot_Byte byteNum, ot_Byte* values, short count)
     {
        ot_apiReconfigInfo* pInfo = ot_apiReconfigData[chip];
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
        pInfo->data[pInfo->length + (3 + count)] = ~ot_apiSynchByte;
        
        /* Need to store where the address of this update is so we know for the next one */
        pInfo->lastUpdateIndex = pInfo->length;
        
        /* Update how much stuff is in this stream */
        pInfo->length = pInfo->length + updateSize;
     }

