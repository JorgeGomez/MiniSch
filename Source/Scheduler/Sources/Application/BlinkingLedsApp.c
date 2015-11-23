/*============================================================================*/
<<<<<<< HEAD
/*                         			AEP		                                  */
=======
/*                        I BS SOFTWARE GROUP                                 */
>>>>>>> origin/BranchJose
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
<<<<<<< HEAD
 * $Source: BlinkingLedsApp.c $
 * $Revision: 1.0 $
 * $Author: Jorge Gomez $
 * $Date: Nov/12/15 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \BlinkingLedsApp
    Provide the application for each task.
    Do the embedded LEDs blink.
=======
 * $Source: filename.c $
 * $Revision: version $
 * $Author: author $
 * $Date: date $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    short description in one sentence end with dot.
    detailed
    multiline
    description of the file
>>>>>>> origin/BranchJose
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
<<<<<<< HEAD
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION 	|  		DATE  		|     COMMENT	     	  |		AUTHOR 	  */
/*----------------------------------------------------------------------------*/
/*   1.0 		|  	Nov/13/15		| 		added task		  |  Jorge Gomez  */
/*============================================================================*/
/*                      					 	                              */
/*============================================================================*/
/*
 * $Log: BlinkingLedsApp.c  $
=======
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*  DATABASE           |        PROJECT     | FILE VERSION (AND INSTANCE)     */
/*----------------------------------------------------------------------------*/
/*                     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.c  $
>>>>>>> origin/BranchJose
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "Application/BlinkingLedsApp.h"


/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/

<<<<<<< HEAD
/**************************************************************
 *  Name                 :  toggle_led1
 *  Description          :  Function for the task number 1
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  This function must each 10 ticks.
 *  Postcondition        :  The LED 1 changes.
 **************************************************************/
=======
/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
*/
>>>>>>> origin/BranchJose
void toggle_led1(void)
{
	led_toggle(LED_1);
}

<<<<<<< HEAD
/**************************************************************
 *  Name                 :  toggle_led2
 *  Description          :  Function for the task number 2
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  This function must each 50 ticks.
 *  Postcondition        :  The LED 2 changes.
 **************************************************************/
=======
/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
*/
>>>>>>> origin/BranchJose
void toggle_led2(void)
{
	led_toggle(LED_2);
}

<<<<<<< HEAD
/**************************************************************
 *  Name                 :  toggle_led3
 *  Description          :  Function for the task number 3
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  This function must each 100 ticks.
 *  Postcondition        :  The LED 3 changes.
 **************************************************************/
=======
/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
*/
>>>>>>> origin/BranchJose
void toggle_led3(void)
{
	led_toggle(LED_3);
}

<<<<<<< HEAD
/**************************************************************
 *  Name                 :  toggle_led4
 *  Description          :  Function for the task number 4
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  This function must each 500 ticks.
 *  Postcondition        :  The LED 4 changes.
 **************************************************************/
=======
/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
*/
>>>>>>> origin/BranchJose
void toggle_led4(void)
{
	led_toggle(LED_4);
}

/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
