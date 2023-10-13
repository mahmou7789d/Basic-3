#include <stdio.h>
#include <stdlib.h>
#include "QueueLinkedList.h"
int main()
{
    InitQueue();

    Enqueue(5);
    Enqueue(0);
    Enqueue(8);
    Enqueue(4);
    printf("%d\n",Dequeue());
    printf("%d\n",Peek());
    printf("%d\n",GetSize());
    Enqueue(4);
    Display();
    return 0;
}
