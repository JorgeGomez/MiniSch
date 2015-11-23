/*============================================================================*/
/*                        			AEP		                                  */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
<<<<<<< HEAD
 * $Source: Kernel.h $
 * $Revision: version 1.0 $
 * $Author: Jose Luis Martinez Vicuña $
 * $Date: Nov/13/2015 $
=======
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
 * This file provides the headers of the functions of Kernel.c which are used
 * to configure the timer that is used to kernel, also the implementation of 
 * the scheduler.
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
/* version 1.0		   |     11/!3/2015     |  Jose Luis Martinez Vicuña      */
/*============================================================================*/
/*
 * $Log: Kernel.h  $
=======
/*                     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
>>>>>>> origin/BranchJose
  ============================================================================*/
#ifndef KERNEL_H_
#define KERNEL_H_

/* Includes */
/*============================================================================*/
#include "HAL/stdtypedef.h"
#include "MAL/Tasks.h"


/* Constants and types */
/*============================================================================*/




/* Exported Variables */
/*============================================================================*/
PUBLIC_DATA T_BOOLEAN rbi_TickFlag;
PUBLIC_DATA const S_TASK cas_TaskList[NUMBER_OF_TASKS];


/* Exported functions prototypes */
/*============================================================================*/

/* Functions prototypes */
/*============================================================================*/
void init_Sch_TimeCntrs(void);
void Sch_function_execution(void);


#endif /* KERNEL_H_  Notice: the file ends with a blank new line to avoid compiler warnings */
