#include "StateDrivenCode.h"

/********************************************************************\
*                 State-driven Dynamic Configuration                 *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      StateDrivenCode.c                                      *
*  Generated: May 05, 2022:  01:41 PM                                *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2015 Okika. All rights reserved.           *
*                                                                    *
\********************************************************************/

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/********************************************************************\
 *                        Configuration Data                        * 
\********************************************************************/

const ot_Byte ot_FPAA1_to_FPAA2_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC3, /* Byte address:  3 */
   0x02, /* Bank address:  2 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x50,  0x00,  0x00,  0x00,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x02, /* Bank address:  2 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x40,  0x00,  0x56,  0x03,  0x00,  0x00,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x70,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC5, /* Byte address:  5 */
   0x04, /* Bank address:  4 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x91, /* Byte address: 17 */
   0x04, /* Bank address:  4 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x17,  

   /* Check Byte: Inverse Synch */
   0x2A
};

const ot_Byte ot_FPAA2_to_FPAA3_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x21,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x09,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x02, /* Bank address:  2 */
   0x10, /* Byte count:   16 */

   /* Data bytes for block */
   0xC1,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
   0x00,  0x40,  0x00,  0x56,  0x03,  0x00,  0x00,  0x08,  

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
   0xD9, /* Byte address: 25 */
   0x03, /* Bank address:  3 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x40,  0x00,  0x20,  0x01,  0x13,  0x01,  0x81,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC5, /* Byte address:  5 */
   0x04, /* Bank address:  4 */
   0x1B, /* Byte count:   27 */

   /* Data bytes for block */
   0x00,  0x20,  0x00,  0x01,  0x27,  0x01,  0x00,  0x01,  
   0x12,  0x01,  0x82,  0x01,  0x14,  0x01,  0x82,  0x00,  
   0x05,  0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  
   0x1C,  0x01,  0x81,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x05, /* Bank address:  5 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x1B,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x09, /* Bank address:  9 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x11,  0x11,  0xFF,  0xFF,  0x55,  0xFF,  0x80,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xCD, /* Byte address: 13 */
   0x09, /* Bank address:  9 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0x84,  0x00,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x09, /* Bank address:  9 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0xF0,  0x00,  0x20,  0x01,  0x14,  0x00,  0x10,  0xCE,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x86, /* Byte address:  6 */
   0x0A, /* Bank address: 10 */
   0x1A, /* Byte count:   26 */

   /* Data bytes for block */
   0x00,  0x00,  0x00,  0x07,  0x01,  0x00,  0x02,  0x12,  
   0x02,  0x82,  0x02,  0x1F,  0x02,  0x82,  0x00,  0x05,  
   0x01,  0x13,  0x00,  0x10,  0x81,  0x05,  0x01,  0x15,  
   0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A
};

const ot_Byte ot_FPAA3_to_FPAA4_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x24,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD0, /* Byte address: 16 */
   0x01, /* Bank address:  1 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x03,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x02, /* Bank address:  2 */
   0x0D, /* Byte count:   13 */

   /* Data bytes for block */
   0x00,  0x00,  0x05,  0x00,  0x00,  0x00,  0x10,  0x00,  
   0x56,  0x03,  0x00,  0x00,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD3, /* Byte address: 19 */
   0x02, /* Bank address:  2 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x40,  

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
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0x84,  0x00,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x03, /* Bank address:  3 */
   0x27, /* Byte count:   39 */

   /* Data bytes for block */
   0x90,  0x00,  0x20,  0x01,  0x14,  0x00,  0x10,  0xCE,  
   0x00,  0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
   0x07,  0x01,  0x00,  0x02,  0x12,  0x02,  0x82,  0x02,  
   0x19,  0x02,  0x82,  0x00,  0x05,  0x01,  0x13,  0x00,  
   0x10,  0x81,  0x05,  0x01,  0x15,  0x00,  0x10,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x05, /* Bank address:  5 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x1F,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x09, /* Bank address:  9 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0xFF,  0xFF,  0x99,  0x99,  0xB9,  0x0C,  0x0C,  

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
   0xD9, /* Byte address: 25 */
   0x09, /* Bank address:  9 */
   0x08, /* Byte count:    8 */

   /* Data bytes for block */
   0x40,  0x00,  0x20,  0x01,  0x13,  0x01,  0x81,  0x0C,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x86, /* Byte address:  6 */
   0x0A, /* Bank address: 10 */
   0x1A, /* Byte count:   26 */

   /* Data bytes for block */
   0x08,  0x00,  0x01,  0x27,  0x01,  0x00,  0x01,  0x12,  
   0x01,  0x82,  0x01,  0x14,  0x01,  0x82,  0x00,  0x05,  
   0x00,  0x30,  0x00,  0x10,  0x00,  0x05,  0x01,  0x1A,  
   0x01,  0x81,  

   /* Check Byte: Inverse Synch */
   0x2A
};

const ot_Byte ot_FPAA4_to_FPAA5_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xCB, /* Byte address: 11 */
   0x01, /* Bank address:  1 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0xA1,  0xE1,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x02, /* Bank address:  2 */
   0x12, /* Byte count:   18 */

   /* Data bytes for block */
   0x50,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x46,  
   0x03,  0x00,  0x46,  0x03,  0x00,  0x46,  0x03,  0x00,  
   0x56,  0x03,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x70,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x04, /* Bank address:  4 */
   0x07, /* Byte count:    7 */

   /* Data bytes for block */
   0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x01,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x91, /* Byte address: 17 */
   0x04, /* Bank address:  4 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x17,  

   /* Check Byte: Inverse Synch */
   0x2A
};

const ot_Byte ot_FPAA5_to_FPAA1_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xCB, /* Byte address: 11 */
   0x01, /* Bank address:  1 */
   0x02, /* Byte count:    2 */

   /* Data bytes for block */
   0xA0,  0xE0,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC2, /* Byte address:  2 */
   0x02, /* Bank address:  2 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x00,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC7, /* Byte address:  7 */
   0x02, /* Bank address:  2 */
   0x0A, /* Byte count:   10 */

   /* Data bytes for block */
   0xC1,  0x00,  0x00,  0x08,  0x00,  0x00,  0x08,  0x00,  
   0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xD9, /* Byte address: 25 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x90,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC5, /* Byte address:  5 */
   0x04, /* Bank address:  4 */
   0x04, /* Byte count:    4 */

   /* Data bytes for block */
   0x00,  0x00,  0x00,  0x00,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x91, /* Byte address: 17 */
   0x04, /* Bank address:  4 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x19,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* Maps states with primary configurations to the configuration data.  
*/                                                                  
const ot_stateConfigInfo ot_statePrimaryData[ot_statePrimaryCount] =
{
};

/* Maps each stateID to its transition data. */                     
const ot_stateConfigInfo ot_stateTransitionData[ot_stateTransitionCount] =
{
   /* FPAA1 to FPAA2 */
   {
      ot_FPAA1_to_FPAA2_Data,       /* data */
      38,                           /* length */
   },

   /* FPAA2 to FPAA3 */
   {
      ot_FPAA2_to_FPAA3_Data,       /* data */
      157,                          /* length */
   },

   /* FPAA3 to FPAA4 */
   {
      ot_FPAA3_to_FPAA4_Data,       /* data */
      159,                          /* length */
   },

   /* FPAA4 to FPAA5 */
   {
      ot_FPAA4_to_FPAA5_Data,       /* data */
      52,                           /* length */
   },

   /* FPAA5 to FPAA1 */
   {
      ot_FPAA5_to_FPAA1_Data,       /* data */
      46                            /* length */
   }
};

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

  /*--------------------------------------------------------------*\
  |                      GetStatePrimaryData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the state. The   |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

     const ot_Byte* ot_GetStatePrimaryData(ot_State stateID, int* count)
     {
        /* Set how long it is */
        *count = ot_statePrimaryData[stateID].length;
  
        /* Return the pointer to the configuration data */
        return ot_statePrimaryData[stateID].data;
     }

  /*--------------------------------------------------------------*\
  |                     GetStateTransitionData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the transition data for the state. The returned     |
  |  data begins with the synch byte and ends with the last error  |
  |  byte. There are no pad bytes included. The number of bytes in |
  |  the configuration data is set in count.                       |
  |                                                                |
  \*--------------------------------------------------------------*/

     const ot_Byte* ot_GetStateTransitionData(ot_State stateID, int* count)
     {
        /* Set how long it is */
        *count = ot_stateTransitionData[stateID].length;
  
        /* Return the pointer to the configuration data */
        return ot_stateTransitionData[stateID].data;
     }

