#include <iostream>
#include "Utils.h"
#include "Stack.h"

#define SIZE 10

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

int* reverse10()
{
	int *nums = new int[SIZE];
	int i = 0;

	for (i = 0; i < SIZE; i++)
	{
		std::cout << "Enter number " << i + 1 << ": ";
		std::cin >> nums[i];
	}
	reverse(nums, SIZE);
	return nums;
}