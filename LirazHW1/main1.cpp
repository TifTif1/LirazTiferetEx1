#include <iostream>
#include "Queue.h"

int main1()
{
    Queue* q = new Queue;
    initQueue(q, 3);

    enqueue(q, 1);
    enqueue(q, 61);
    enqueue(q, 23);
    enqueue(q, 5); // Here its full

    std::cout << "Out: " << dequeue(q) << std::endl;//1
    enqueue(q, 60);
    std::cout << "Out: " << dequeue(q) << std::endl;//61

    cleanQueue(q);
    delete(q);
    return 0;
}