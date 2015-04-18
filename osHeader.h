/*
 * osHeader.h
 *
 *  Created on: 2012-01-09
 *      Author: Mustapha MEKHATRIA
 */

#ifndef OSHEADER_H_
#define OSHEADER_H_

#define TaskId_1 10
#define TaskId_2 20

struct TaskTable
{
	void (*ptrTask) (void);//address
	int Priority; //pr
	int Ready;//rdy
	int TaskId;//id
}arrTaskTable[3];


int iTaskcount;

int PriorityTable[3];
int iHighPriorityTask;
int iIndexPriority;

int iWait;


void startOS(void);
void Sched(void);
void createTask(void (*ptrTask)(void), int iPriority, int iTaskId );
void startTask(int iTaskId);
void waitTask();
void ContextSwitch(void);

void Task1(void);
void Task2(void);



#endif /* OSHEADER_H_ */
