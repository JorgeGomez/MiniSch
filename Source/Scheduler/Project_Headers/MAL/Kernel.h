/*
 * Kernel.h
 *
 *  Created on: Nov 12, 2015
 *      Author: Jorge
 */

#ifndef KERNEL_H_
#define KERNEL_H_

#include "HAL/stdtypedef.h"

typedef struct{
	T_PPROC Ptr;
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
};

void Task1(void);
void Task2(void);
void Task3(void);
void Task4(void);

#endif /* KERNEL_H_ */
