#include <iostream>
#include "Utils.h"
#include "Stack.h"

#define SIZE 10

/*
Function that reverse int array
input: the array and it's size
*/
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

/*
Function that takes 10 number ,create array of them and reverse it
input: none
output: the new reversed array
*/
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