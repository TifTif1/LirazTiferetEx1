#include <iostream>
#include "Queue.h"

/*
Function that inits a queue
input: Queue struct and it's size
*/
void initQueue(Queue* q, unsigned int size)
{
	q->nums = new unsigned int[size];
	q->size = size;
	q->last = 0;
	q->first = 0;
	q->itemsNum = 0;
}

/*
Function that clean a queue
input: a queue
*/
void cleanQueue(Queue* q)
{
	int i = 0;
	for (i = 0; i < q->size; i++)
	{
		q->nums[i] = NULL;
	}
	q->size = 0;
	q->last = 0;
	q->first = 0;
	q->itemsNum = 0;
}

/*
Function that add value to the queue
input: the queue and the new value
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->nums[q->last] = newValue;
		q->last = (q->last+1) % q->size;
		q->itemsNum++;
	}
	else
	{
		std::cout << "The queue is full" << std::endl;
	}
}

/*
Function that takes out the first num from the queue
input: the queue
*/
int dequeue(Queue* q)
{
	int num = 0;
	if (isEmpty(q))
	{
		return -1;
	}
	else
	{
		num = q->nums[q->first];
		q->first = (q->first+1) % q->size;
		q->itemsNum--;
		return num;
	}
	
}

/*
Function that check if queue is empty
input: the queue
output: true or false(empty or not)
*/
bool isEmpty(Queue* s)
{
	return (s->itemsNum == 0);
}

/*
Function that check if queue is full
input: the queue
output: true or false(full or not)
*/
bool isFull(Queue* s)
{
	return (s->itemsNum == s->size);
}