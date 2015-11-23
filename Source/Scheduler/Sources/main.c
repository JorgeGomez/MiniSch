/*============================================================================*/
<<<<<<< HEAD
/*                         			AEP		                                  */
/*                        I BS SOFTWARE GROUP                                 */
>>>>>>> origin/BranchJose
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
<<<<<<< HEAD
 * $Source: main.c $
 * $Revision: 1.0 $
 * $Author: Jorge Gomez $
 * $Date: Nov/12/15 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \main
    MAIN FUNCTION.
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
/*                    			OBJECT HISTORY                          	  */
/*============================================================================*/
/*  REVISION 	|  		DATE  		|     COMMENT 	     	  |		AUTHOR 	  */
/*----------------------------------------------------------------------------*/
/*   1.0 		|  	Nov/13/15		|   add main function     |  Jorge Gomez  */
/*============================================================================*/
/*                               				                              */
/*============================================================================*/
/*
 * $Log: main.c  $
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
#include "HAL/MainConfig.h"
#include "MAL/Kernel.h"


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
 *  Name                 :  main
 *  Description          :  Main function of the program
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  The correct initialization of the startup code.
 *  Postcondition        :  The cpu can be configured and the program can start.
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
void main(void) 
{
	init_system();
	init_Sch_TimeCntrs();
	
	Sch_function_execution();	
}


/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
