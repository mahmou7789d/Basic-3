#include <stdio.h>
#include "QueueArray.h"

void QueueArray_InitQueue(void)
{
    Rear=-1;
    Front=-1;
}

uint8 QueueArray_IsEmpty(void)
{
    uint8 state;
    //Front == Rear + 1
    if(Front == -1 || (Front > Rear) )
    {
        state=1;
    }
    else
    {
        state=0;
    }
    return state;
}

uint8 QueueArray_IsFull(void)
{
    uint8 state;
    if(Rear == Size-1)
    {
        state=1;
    }
    else
    {
        state=0;
    }
    return state;
}


sint32 QueueArray_GetSize(void)
{
    return Rear-Front+1 ;
}

sint32 QueueArray_Peek(void)
{
    if(QueueArray_IsEmpty())
    {
        printf("Queue is empty .\n");
        return;
    }
    else
    {
        return Arr[Front];
    }

}

void QueueArray_Enqueue(sint32 Val)
{
    if(Front==-1)
    {
        Rear=0;
        Front=0;
        Arr[Rear]=Val;
    }
    else if(QueueArray_IsFull())//overflow
    {
        printf("The Queue is full! \n");
        return;
    }
    else
    {
        Rear++;
        Arr[Rear]=Val;
        //Arr[++Rear]=Val;
    }
}

sint32 QueueArray_Dequeue(void )
{
    uint32 RetVal=0;
    if(QueueArray_IsEmpty())//underflow
    {
        printf("Queue is empty .\n");
    }
    else
    {
        RetVal=Arr[Front];
        Front++;
        //Front++;
        //RetVal=Arr[Front-1];
    }
    return RetVal;
}

void QueueArray_Display (void)
{
    sint32 i;
    if(QueueArray_IsEmpty())
    {
        printf("Queue is empty .\n");
    }
    else
    {
        for(i=Front; i<=Rear; i++)
        {
            printf("%d\t",Arr[i]);
        }
    }

}
