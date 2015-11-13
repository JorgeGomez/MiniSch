/*============================================================================*/
/*                        			AEP		                                  */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.x $
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
 * $Log: filename.h  $
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
