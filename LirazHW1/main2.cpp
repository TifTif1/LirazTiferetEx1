#include <iostream>
#include "Stack.h"

int main2()
{
	int i = 0;
	Stack* s = new Stack;
	initStack(s);
	push(s, 5);
	push(s, 1);
	push(s, 2);
	push(s, 8);	

	for (i = 0; i < 3; i++)
	{
		std::cout << "Out:" << pop(s) << std::endl;//8, 2, 1
	}
	push(s, 2);
	cleanStack(s);// 2, 5

	delete(s);
	return 0;
}