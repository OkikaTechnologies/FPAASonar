#include "StateDrivenCode.h"

/********************************************************************\
*                 State-driven Dynamic Configuration                 *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      StateDrivenCode.c                                      *
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

/********************************************************************\
 *                        Configuration Data                        * 
\********************************************************************/

const an_Byte an_FPAA1_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x02, /* Bank address:  2 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x00,  0x00,  0x00,  0x00,  0x80,  0x20,  0x01,  0x00,  
   0x00,  0x08,  0x00,  0x00,  0x08,  0x00,  0x00,  0x40,  
   0x00,  0x5E,  0x03,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x19,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC5, /* Byte address:  5 */
   0x04, /* Bank address:  4 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x00,  0x80,  0x00,  0x01,  0x07,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x04, /* Bank address:  4 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x90,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x82, /* Byte address:  2 */
   0x06, /* Bank address:  6 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x00,  

   /* Check Byte: Inverse Synch */
   0x2A
};

const an_Byte an_FPAA2_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x02, /* Bank address:  2 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x00,  0x00,  0x50,  0x00,  0x08,  0x10,  0x00,  0x00,  
   0x00,  0x08,  0x00,  0x00,  0x40,  0x00,  0x5E,  0x03,  
   0x00,  0x00,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x17,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC5, /* Byte address:  5 */
   0x04, /* Bank address:  4 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x01,  0x40,  0x00,  0x01,  0x47,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x04, /* Bank address:  4 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x70,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x82, /* Byte address:  2 */
   0x06, /* Bank address:  6 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x00,  

   /* Check Byte: Inverse Synch */
   0x2A
};

const an_Byte an_FPAA3_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x02, /* Bank address:  2 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x50,  0x00,  0x05,  0x00,  0x00,  0x10,  0x00,  0x00,  
   0x00,  0x40,  0x00,  0x5E,  0x03,  0x00,  0x00,  0x08,  
   0x00,  0x00,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x17,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC5, /* Byte address:  5 */
   0x04, /* Bank address:  4 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x01,  0x40,  0x00,  0x01,  0x47,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x04, /* Bank address:  4 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x70,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x82, /* Byte address:  2 */
   0x06, /* Bank address:  6 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A
};

const an_Byte an_FPAA4_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x02, /* Bank address:  2 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x05,  0x00,  0x00,  0x00,  0x00,  0x20,  0x10,  0x00,  
   0x5E,  0x03,  0x00,  0x00,  0x08,  0x00,  0x00,  0x08,  
   0x00,  0x00,  0x40,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x19,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC5, /* Byte address:  5 */
   0x04, /* Bank address:  4 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x00,  0x80,  0x00,  0x01,  0x47,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x04, /* Bank address:  4 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x90,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x82, /* Byte address:  2 */
   0x06, /* Bank address:  6 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x02,  

   /* Check Byte: Inverse Synch */
   0x2A
};

const an_Byte an_FPAA5_Data[] = 
{
   /* The header for the configuration stream */
   0xD5, /* Synch     */
   0x01, /* Address1  */
   0xC1, /* Control   */

   /* Start of data block */
   0xC1, /* Byte address:  1 */
   0x02, /* Bank address:  2 */
   0x13, /* Byte count:   19 */

   /* Data bytes for block */
   0x00,  0x50,  0x00,  0x08,  0x00,  0x10,  0x00,  0x00,  
   0x00,  0x08,  0x00,  0x00,  0x08,  0x00,  0x00,  0x08,  
   0x00,  0x00,  0x08,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x03, /* Bank address:  3 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x17,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xC5, /* Byte address:  5 */
   0x04, /* Bank address:  4 */
   0x05, /* Byte count:    5 */

   /* Data bytes for block */
   0x01,  0x40,  0x00,  0x01,  0x47,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0xDD, /* Byte address: 29 */
   0x04, /* Bank address:  4 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x70,  

   /* Check Byte: Inverse Synch */
   0x2A,

   /* Start of data block */
   0x82, /* Byte address:  2 */
   0x06, /* Bank address:  6 */
   0x01, /* Byte count:    1 */

   /* Data bytes for block */
   0x00,  

   /* Check Byte: Inverse Synch */
   0x2A
};

/* Maps states with primary configurations to the configuration data.  
*/                                                                  
const an_stateConfigInfo an_statePrimaryData[an_statePrimaryCount] =
{
};

/* Maps each stateID to its transition data. */                     
const an_stateConfigInfo an_stateTransitionData[an_stateTransitionCount] =
{
   /* FPAA1 */
   {
      an_FPAA1_Data,                /* data */
      50,                           /* length */
   },

   /* FPAA2 */
   {
      an_FPAA2_Data,                /* data */
      50,                           /* length */
   },

   /* FPAA3 */
   {
      an_FPAA3_Data,                /* data */
      50,                           /* length */
   },

   /* FPAA4 */
   {
      an_FPAA4_Data,                /* data */
      50,                           /* length */
   },

   /* FPAA5 */
   {
      an_FPAA5_Data,                /* data */
      50                            /* length */
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

     const an_Byte* an_GetStatePrimaryData(an_State stateID, int* count)
     {
        /* Set how long it is */
        *count = an_statePrimaryData[stateID].length;
  
        /* Return the pointer to the configuration data */
        return an_statePrimaryData[stateID].data;
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

     const an_Byte* an_GetStateTransitionData(an_State stateID, int* count)
     {
        /* Set how long it is */
        *count = an_stateTransitionData[stateID].length;
  
        /* Return the pointer to the configuration data */
        return an_stateTransitionData[stateID].data;
     }

