/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Kernel.c $
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
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "MAL/Kernel.h"


/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/

T_ULONG rul_TimeCounter[NUMBER_OF_TASKS];


/* Private functions prototypes */
/*============================================================================*/


/* Inline functions */
/*============================================================================*/


/* Private functions */
/*============================================================================*/

/*Add a new prototipe if you need a new task*/
PUBLIC_FCT void Task1_10ticks(void);
PUBLIC_FCT void Task2_50ticks(void);
PUBLIC_FCT void Task3_100ticks(void);
PUBLIC_FCT void Task4_500ticks(void);


/* Exported functions */
/*============================================================================*/

/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
*/
void init_Sch_TimeCntrs(void)
{
	T_ULONG lul_Position;
	for(lul_Position = 0; lul_Position < NUMBER_OF_TASKS; lul_Position++)
	{
		rul_TimeCounter[lul_Position] = cas_TaskList[NUMBER_OF_TASKS].Offset;
	}
}

/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
*/
void Sch_function_execution(void)
{
	T_ULONG lul_ArrayPosition;
	while(1)
		{
			if(rbi_TickFlag == TRUE)
			{
				rbi_TickFlag = FALSE;
				for(lul_ArrayPosition = 0; lul_ArrayPosition < NUMBER_OF_TASKS; lul_ArrayPosition++)
				{
					if(rul_TimeCounter[lul_ArrayPosition] != 0)
					{
						rul_TimeCounter[lul_ArrayPosition]--;
					}
					else
					{
						rul_TimeCounter[lul_ArrayPosition] = cas_TaskList[lul_ArrayPosition].Period;
						cas_TaskList[lul_ArrayPosition].PtrFunc();
					}
				}
			}
		}
}


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
