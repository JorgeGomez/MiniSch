/*
 * Kernel.c
 *
 *  Created on: Nov 12, 2015
 *      Author: Jorge
 */
#include "MAL/Kernel.h"

const S_TASK TaskList[NUMBER_OF_TASKS] = 
{
	/*	Name			Execution Period(ticks)		Startup delay(ticks)	*/
	{	Task1,					100,						1	},
	{	Task2,					200, 						2	},
	{	Task3,					300, 						3	},
	{	Task4,					400, 						4	},
};


void Task1(void)
{
	
}

void Task2(void)
{
	
}

void Task3(void)
{
	
}

void Task4(void)
{
	
}
