#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

/*
Function that add node to the stack
input: the stack and the new number to add
*/
void push(Stack* s, unsigned int element)
{
	addNode(&s->head, element);
}

/*
Function that takes out the head of the stack
input: stack
output: the number in the head of the stack
*/
int pop(Stack* s)
{
	if (isEmpty(s))
		return -1;
	else
		return removeNode(&s->head);
}

/*
Functin that inits a stack
input: stack
*/
void initStack(Stack* s)
{
	s->head = new StackNode;
}

/*
Function that clean the stack
input: the stack
*/
void cleanStack(Stack* s)
{
	while (!isEmpty(s))
	{
		std::cout << "Out:" << pop(s) << std::endl;
	}
	std::cout << "Clean" << std::endl;
}

/*
Function that check if the stack is empty
input: the stack
output: true or false(Empty or not)
*/
bool isEmpty(Stack* s)
{
	return (s->head);
}
