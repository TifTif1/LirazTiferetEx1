#include <iostream>
#include "Utils.h"
#include "Stack.h"

void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
	int i = 0;
	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
}