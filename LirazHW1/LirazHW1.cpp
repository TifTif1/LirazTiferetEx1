#include <iostream>
#include "Utils.h"

int main() 
{
	int* nums = reverse10();
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		std::cout << nums[i] << ' ';
	}
	delete(nums);
	return 0;
}