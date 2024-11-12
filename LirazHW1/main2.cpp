#include <iostream>
#include "Stack.h"

int main2()
{
	Stack* s = new Stack;
	initStack(s);
	push(s, 5);
	push(s, 1);
	push(s, 2);
	push(s, 8);
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		std::cout << "Out:" << pop(s) << std::endl;
	}
	push(s, 2);
	cleanStack(s);

	return 0;
}