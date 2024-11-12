#include <iostream>
#include "Queue.h"

int main1()
{
    Queue* q = NULL;
    initQueue(q, 3);

    enqueue(q, 1);
    enqueue(q, 61);
    enqueue(q, 23);
    enqueue(q, 5);

    std::cout << "Out: " << dequeue(q) << std::endl;
    enqueue(q, 60);

    std::cout << "Out: " << dequeue(q) << std::endl;

    cleanQueue(q);
    return 0;
}