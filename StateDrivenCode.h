#ifndef STATEDRIVENCODE_H
#define STATEDRIVENCODE_H

/********************************************************************\
*                 State-driven Dynamic Configuration                 *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      StateDrivenCode.h                                      *
*  Generated: May 05, 2022:  01:41 PM                                *
*  Version:   2.8.0.10 -  (Standard) - Release                       *
*  Copyright: Copyright © 2015 Okika. All rights reserved.           *
*                                                                    *
\********************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/*##################################################################*\
#                                                                    #
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Represents an 8 bit data type. */
typedef unsigned char ot_Byte;

/* A type to represent a single State. */
typedef short         ot_State;

/* This structure contains all the information about a configuration  
of a chip */                                                        
typedef struct ot_stateConfigInfo
{
   /* The configuration data. */                                       
   const ot_Byte* data;

   /* Total byte count in the configuration data. */                   
   short length;

} ot_stateConfigInfo;

/* Define all StateID's */                                          
#define ot_FPAA1_to_FPAA2              0         /* "FPAA1 to FPAA2" */
#define ot_FPAA2_to_FPAA3              1         /* "FPAA2 to FPAA3" */
#define ot_FPAA3_to_FPAA4              2         /* "FPAA3 to FPAA4" */
#define ot_FPAA4_to_FPAA5              3         /* "FPAA4 to FPAA5" */
#define ot_FPAA5_to_FPAA1              4         /* "FPAA5 to FPAA1" */

/* Count of states with initial primary configurations. */          
#define ot_statePrimaryCount           0

/* Count of state transitions. */                                   
#define ot_stateTransitionCount        5

/* Configuration Data*/
extern const ot_Byte ot_FPAA1_to_FPAA2_Data[];
extern const ot_Byte ot_FPAA2_to_FPAA3_Data[];
extern const ot_Byte ot_FPAA3_to_FPAA4_Data[];
extern const ot_Byte ot_FPAA4_to_FPAA5_Data[];
extern const ot_Byte ot_FPAA5_to_FPAA1_Data[];

/* Maps states with primary configurations to the configuration data.  
*/                                                                  
extern const ot_stateConfigInfo ot_statePrimaryData[ot_statePrimaryCount];

/* Maps each stateID to its transition data. */                     
extern const ot_stateConfigInfo ot_stateTransitionData[ot_stateTransitionCount];

/*##################################################################*\
#                                                                    #
#                             Functions                              #
#                                                                    #
\*##################################################################*/

  /*--------------------------------------------------------------*\
  |                      GetStatePrimaryData                       |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const ot_Byte* ot_GetStatePrimaryData(ot_State stateID, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the primary configuration data for the state. The   |
  |  returned data begins with the synch byte and ends with the    |
  |  last error byte. There are no pad bytes included. The number  |
  |  of bytes in the configuration data is set in count.           |
  |                                                                |
  \*--------------------------------------------------------------*/

  /*--------------------------------------------------------------*\
  |                     GetStateTransitionData                     |
  +----------------------------------------------------------------+
  |                                                                |
  |  Function Declaration                                          |
  \*  ------------------------------                              */
     const ot_Byte* ot_GetStateTransitionData(ot_State stateID, int* count); 
  /*                                                              *\
  |                                                                |
  |  Description                                                   |
  |  ------------------------------                                |
  |  Retrieves the transition data for the state. The returned     |
  |  data begins with the synch byte and ends with the last error  |
  |  byte. There are no pad bytes included. The number of bytes in |
  |  the configuration data is set in count.                       |
  |                                                                |
  \*--------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* STATEDRIVENCODE_H */
