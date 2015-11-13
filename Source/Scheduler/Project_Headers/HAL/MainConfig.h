/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
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
#ifndef MAINCONFIG_H_
#define MAINCONFIG_H_

/* Includes */
/*============================================================================*/
#include "HAL\MPC5606B.h"
#include "HAL\stdtypedef.h"


/* Constants and types */
/*============================================================================*/
typedef enum
{
   PRESS = 0,
   NO_PRESS
}T_BUTTON;

/****Macros****/
#define ON 		0
#define OFF 	1

#define PUSHB_1 	64
#define PUSHB_2 	65
#define PUSHB_3 	66
#define PUSHB_4 	67

#define LED_1		68
#define LED_2		69
#define LED_3		70
#define LED_4		71

/* Exported Variables */
/*============================================================================*/
 

/* Exported functions prototypes */
/*============================================================================*/

/* Functions prototypes */
/*============================================================================*/
void init_system(void);
T_BUTTON read_button(T_UBYTE lub_Ch);
void led_on(T_UBYTE lub_Ch);
void led_off(T_UBYTE lub_Ch);
void led_toggle(T_UBYTE lub_Ch);

#endif /* MAINCONFIG_H_ */ /* Notice: the file ends with a blank new line to avoid compiler warnings */
