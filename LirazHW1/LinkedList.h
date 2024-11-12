#ifndef LINKEDLISTH
#define LINKEDLISTH


typedef struct StackNode
{
	unsigned int num;
	struct StackNode* next;
} StackNode;

void addNode(StackNode** head, unsigned int num);
int removeNode(StackNode** head);



#endif#pragma once
