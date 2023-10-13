#include <stdio.h>
#include <stdlib.h>
#include "STD_Types.h"

#include "QueueCircularLinkedList.h"
#include "CLL.h"

int main()
{
    InitQueue();

    Enqueue(10);
    Enqueue(9);
    Enqueue(8);
    Enqueue(7);
    Enqueue(6);
    Dequeue();
    Display();
    return 0;
}
