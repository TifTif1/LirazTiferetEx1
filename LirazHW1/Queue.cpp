#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->size = size;
	q->nums = new int[size];
	q->last = size - 1;
}

void cleanQueue(Queue* q)
{
	delete[] q->nums;
	q->size = 0;
	q->last = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	q->nums[q->last] = newValue;
	q->last++;
}

int dequeue(Queue* q)
{
	
}
