/*
 * MainConfig.h
 *
 *  Created on: Nov 12, 2015
 *      Author: Jorge
 */

#ifndef MAINCONFIG_H_
#define MAINCONFIG_H_

#include "HAL\MPC5606B.h"
#include "HAL\stdtypedef.h"

typedef enum
{
   PRESS = 0,
   NO_PRESS
}T_BUTTON;

/****Macros and Variables****/
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

void init_system(void);

void init_modes_and_clocks(void);
void disableWatchdog(void);
void initPeriClkGen(void);
void config_Emb_IO(void);

T_BUTTON read_button(T_UBYTE lub_Ch);
void led_on(T_UBYTE lub_Ch);
void led_off(T_UBYTE lub_Ch);
void led_toggle(T_UBYTE lub_Ch);

void pit_config_fnc(void);
void pit_isr(void);
void init_pit_interrupts(void);


#endif /* MAINCONFIG_H_ */
