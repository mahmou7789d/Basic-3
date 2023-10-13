#include <stdio.h>
#include <stdlib.h>
#include "QueueArray.h"

int main()
{
    QueueArray_InitQueue();

    QueueArray_Enqueue(1);
    QueueArray_Enqueue(2);
    QueueArray_Dequeue();
    QueueArray_Dequeue();
    QueueArray_Enqueue(1);
    QueueArray_Enqueue(3);
    QueueArray_Enqueue(4);
    QueueArray_Dequeue();

    printf("%d\n",QueueArray_Peek());
    printf("%d\n",QueueArray_GetSize());
    QueueArray_Display();
    return 0;
}
