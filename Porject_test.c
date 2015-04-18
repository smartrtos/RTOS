/*
 ============================================================================
 Name        : Porject_test.c
 Author      : Mustapha MEKHATRIA
 Version     : 1.0
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "osHeader.h"

int  main(void)
{
	//Create task
	printf("Creat task \n");

	createTask(Task1, 1, TaskId_1);
	createTask(Task2, 2, TaskId_2);

	//Start OS
	startOS();

	return 0;

}

void Task1()
{

	while(1)
	{
		printf("I am task 1 \n");

		//wait
		Sleep(1000);//1 sec

		//Stop the task
		waitTask();

	}

}

void Task2()
{
	while(1)
	{
		printf("I am task 2 \n");

		//wait
		Sleep(1000);//1 sec

		//start the task
		startTask(TaskId_1);
	}
}


