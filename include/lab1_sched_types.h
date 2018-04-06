/*
*	DKU Operating System Lab
*	    Lab1 (Scheduler Algorithm Simulator)
*	    Student id : 
*	    Student name : 
*
*   lab1_sched_types.h :
*       - lab1 header file.
*       - must contains scueduler algorithm function's declations.
*
*/

#ifndef _LAB1_HEADER_H
#define _LAB1_HEADER_H


/*
 * You need to Declare functions in  here
 */

#define TRUE 1
#define FALSE 0

typedef struct _data{
    char name;
    int arrivalTime;
    int serviceTime;
}qData;

typedef struct _node{
	qData data;
	struct _node *prev;
	struct _node *next;
}Node;

typedef struct _queue
{
	int numOfData;
	Node *head;
	Node *tail;
}Queue;

void qInit(Queue *q);
void qPush(Queue *q, qData data);
qData qPop(Queue *q);
qData qNull();
int checkNull(qData x);
void sjfPush(Queue *q, qData data);
int getTotalServiceTime(qData* task, int numOfTask);
void quickSort(qData **x, int left, int right);
void sort(qData** task, int numOfTask);

void SJF(qData task[], int numOfTask);
void RR(qData task[], int numOfTask);

#endif /* LAB1_HEADER_H*/



