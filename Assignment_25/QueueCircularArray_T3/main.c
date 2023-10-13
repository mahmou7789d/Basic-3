#include <stdio.h>
#include <stdlib.h>
#include "QueueCircularArray.h"

int main()
{
    InitQueue();
    Enqueue(1);
    Enqueue(2);
    Enqueue(9);
    Enqueue(10);
    Dequeue();
    printf("%d\n",GetSize());
    Display();

    return 0;
}
