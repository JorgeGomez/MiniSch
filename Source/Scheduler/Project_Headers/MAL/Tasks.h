/*============================================================================*/
<<<<<<< HEAD
/*                                  AEP                                       */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*      This file provides the headers of the functions of Tasks.c            */
/*============================================================================*/
/*!
 * $Source: Tasks.h $
 * $Revision: version 1.0 $
 * $Author: Jose Luis Martinez Vicuña $
 * $Date: Nov/13/2015 $
=======
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.x $
 * $Revision: version $
 * $Author: author $
 * $Date: date $
>>>>>>> origin/BranchJose
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
<<<<<<< HEAD
 * This file provides the headers of the functions of the Tasks which are defined
 * in Tasks.c, also is the structure S__TASK which receives the function, period
 * and an offset and the number of tasks to be executed.
=======
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
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*  DATABASE           |        PROJECT     | FILE VERSION (AND INSTANCE)     */
/*----------------------------------------------------------------------------*/
<<<<<<< HEAD
/*                     |      Scheduler     |            1.0                  */
/*					   |					|      Project_Headers/MAL  	  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/* version 1.0		   |     11/13/2015     |  Jose Luis Martinez Vicuña      */
/*============================================================================*/
/*
 * $Log: Tasks.h  $
=======
/*                     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
>>>>>>> origin/BranchJose
  ============================================================================*/
#ifndef TASKS_H_
#define TASKS_H_

/* Includes */
/*============================================================================*/
#include "HAL/stdtypedef.h"

/* Constants and types */
/*============================================================================*/
typedef void(*T_PFUNC)(void);

typedef struct{
	T_PFUNC PtrFunc;
	T_ULONG Period;
	T_UBYTE Offset;
}S_TASK;

typedef enum {
	TASK1,
	TASK2,
	TASK3,
	TASK4,
	/*number of task*/
	NUMBER_OF_TASKS
}E_NUMTASK;

/* Exported Variables */
/*============================================================================*/



/* Exported functions prototypes */
/*============================================================================*/
PUBLIC_FCT void toggle_led1(void);
PUBLIC_FCT void toggle_led2(void);
PUBLIC_FCT void toggle_led3(void);
PUBLIC_FCT void toggle_led4(void);

/* Functions prototypes */
/*============================================================================*/
void Task1_10ticks(void);
void Task2_50ticks(void);
void Task3_100ticks(void);
void Task4_500ticks(void);

#endif /* TASKS_H_ */  /* Notice: the file ends with a blank new line to avoid compiler warnings */
