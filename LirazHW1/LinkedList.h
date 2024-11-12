#ifndef LINKEDLISTH
#define LINKEDLISTH


typedef struct StackNode
{
	unsigned int num;
	struct StackNode* next;
} StackNode;

void addNode(StackNode** head, unsigned int num);
void removeNode(StackNode** head);



#endif
