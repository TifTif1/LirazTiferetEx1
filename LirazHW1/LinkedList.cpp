#include <iostream>
#include "LinkedList.h"

/*
Function that add node to the stack
input: pointer to the pointer of the head of stack and the new number
*/
void addNode(StackNode** head, unsigned int num)
{
	StackNode* newHead = new StackNode;
	newHead->num = num;
	newHead->next = *head;
	*head = newHead;
}

/*
Function that takes out the head of the stack
input: pointer to the pointer of the head of stack
output: the num in the head of the stack
*/
int removeNode(StackNode** head)
{
	int num = (*head)->num;
	StackNode* newHead = (*head)->next;
	delete(*head);
	*head = newHead;
	return num;
}