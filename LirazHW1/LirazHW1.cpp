#include <iostream>
#include "Utils.h"

int main() 
{
	int nums[] = { 1, 2, 3, 4 };
	int i = 0;
	reverse(nums, 4);
	for (i = 0; i < 4; i++)
	{
		std::cout << nums[i] << std::endl;
	}
	
}