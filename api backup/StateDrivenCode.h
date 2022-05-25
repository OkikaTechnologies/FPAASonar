#ifndef STATEDRIVENCODE_H
#define STATEDRIVENCODE_H

/********************************************************************\
*                 State-driven Dynamic Configuration                 *
*--------------------------------------------------------------------*
*                                                                    *
*  File:      StateDrivenCode.h                                      *
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
#                        Data and Definitions                        #
#                                                                    #
\*##################################################################*/

/* Represents an 8 bit data type. */
typedef unsigned char an_Byte;

/* A type to represent a single State. */
typedef short         an_State;

/* This structure contains all the information about a configuration  
of a chip */                                                        
typedef struct an_stateConfigInfo
{
   /* The configuration data. */                                       
   const an_Byte* data;

   /* Total byte count in the configuration data. */                   
   short length;

} an_stateConfigInfo;

/* Define all StateID's */                                          
#define an_FPAA1                       0         /* "FPAA1" */
#define an_FPAA2                       1         /* "FPAA2" */
#define an_FPAA3                       2         /* "FPAA3" */
#define an_FPAA4                       3         /* "FPAA4" */
#define an_FPAA5                       4         /* "FPAA5" */

/* Count of states with initial primary configurations. */          
#define an_statePrimaryCount           5

/* Count of state transitions. */                                   
#define an_stateTransitionCount        5

/* Configuration Data*/
extern const an_Byte an_FPAA1_Data[];
extern const an_Byte an_FPAA2_Data[];
extern const an_Byte an_FPAA3_Data[];
extern const an_Byte an_FPAA4_Data[];
extern const an_Byte an_FPAA5_Data[];

/* Maps states with primary configurations to the configuration data.  
*/                                                                  
extern const an_stateConfigInfo an_statePrimaryData[an_statePrimaryCount];

/* Maps each stateID to its transition data. */                     
extern const an_stateConfigInfo an_stateTransitionData[an_stateTransitionCount];

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
     const an_Byte* an_GetStatePrimaryData(an_State stateID, int* count); 
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
     const an_Byte* an_GetStateTransitionData(an_State stateID, int* count); 
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
