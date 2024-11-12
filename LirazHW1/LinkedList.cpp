#include <iostream>
#include "LinkedList.h"


void addNode(StackNode** head, unsigned int num)
{
	StackNode* newHead = new StackNode;
	newHead->num = num;
	newHead->next = *head;
	*head = newHead;
}

void removeNode(StackNode** head)
{
	StackNode* newHead = (*head)->next;
	delete(*head);
	head = &newHead;
}