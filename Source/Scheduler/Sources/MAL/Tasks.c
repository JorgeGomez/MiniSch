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
 * $Source: Tasks.c $
 * $Revision: 1.0 $
 * $Author: Jorge Gomez $
 * $Date: Nov/12/15 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \Tasks
    This file contain the tasks.
    Modify this file to add a new task.
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
/*   1.0 		|  	Nov/13/15		| 	  Added new tasks  	  |  Jorge Gomez  */
/*============================================================================*/
/*                      				 		                              */
/*============================================================================*/
/*
 * $Log: Tasks.c  $
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

#include "MAL/Tasks.h"


/* Constants and types  */
/*============================================================================*/

<<<<<<< HEAD
/*
 * --------------------List of task for the scheduler-----------------------------
 * */
=======
/*List of task for the scheduler*/
>>>>>>> origin/BranchJose
const S_TASK cas_TaskList[NUMBER_OF_TASKS] = 
{
	/*	Name					Execution Period(ticks)		Startup delay(ticks)	*/
	{	Task1_10ticks,					10,							1	},
	{	Task2_50ticks,					50, 						2	},
	{	Task3_100ticks,					100, 						3	},
	{	Task4_500ticks,					500, 						4	}
/*	{	Taskn,							Period, 				  offset}	Add if you need a new task*/
};


/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/

<<<<<<< HEAD
/*
 * --------Add a new definition if you need a new task--------------------------
 * */

/**************************************************************
 *  Name                 :  Task1_10ticks
 *  Description          :  Init function of Scheduler module
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  This function must be called after cpu initialization.
 *  Postcondition        :  Function gsc_sch_core_exec can be called.
 **************************************************************/
=======
/*Add a new definition if you need a new task*/

/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
*/
>>>>>>> origin/BranchJose
 void Task1_10ticks(void)
{
	toggle_led1();
}

<<<<<<< HEAD
 /**************************************************************
  *  Name                 :  Task2_50ticks
  *  Description          :  Init function of Scheduler module
  *  Parameters           :  void
  *  Return               :  void
  *  Precondition         :  This function must be called after cpu initialization.
  *  Postcondition        :  Function gsc_sch_core_exec can be called.
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
void Task2_50ticks(void)
{
	toggle_led2();
}

<<<<<<< HEAD
/**************************************************************
 *  Name                 :  Task3_100ticks
 *  Description          :  Init function of Scheduler module
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  This function must be called after cpu initialization.
 *  Postcondition        :  Function gsc_sch_core_exec can be called.
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
void Task3_100ticks(void)
{
	toggle_led3();
}

<<<<<<< HEAD
/**************************************************************
 *  Name                 :  Task4_500ticks
 *  Description          :  Init function of Scheduler module
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  This function must be called after cpu initialization.
 *  Postcondition        :  Function gsc_sch_core_exec can be called.
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
void Task4_500ticks(void)
{
	toggle_led4();
}


/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
