#include <iostream>
#include "Queue.h"

int main()
{
    Queue* q = NULL;
    initQueue(q, 4);

    enqueue(q, 1);
    enqueue(q, 61);
    enqueue(q, 23);
    enqueue(q, 2);
    enqueue(q, 5);

    std::cout << "Dequeue: " << dequeue(q) << std::endl;
    enqueue(q, 60);

    std::cout << "Dequeue: " << dequeue(q) << std::endl;

    cleanQueue(q);
    return 0;
}