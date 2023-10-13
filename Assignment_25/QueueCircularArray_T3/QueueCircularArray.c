#include <stdio.h>

#include "QueueCircularArray.h"

void InitQueue(void)
{
    Rear=-1;
    Front=-1;
}


sint32 GetSize(void)
{
    if (Front == -1)
    {
        printf("Queue is empty");
        return 0;
    }
    else if(Front <= Rear)
    {
        return Rear-Front+1;
    }
    else
    {
        return (Rear+1)+(Size-Front);
    }
}

sint32 Peek(void)
{
    if(Front == -1)
    {
        printf("Queue is empty .\n");
    }
    else
    {
        return Arr[Front];
    }

}

void Enqueue(sint32 Val)
{
    if(SizeOfArr==Size)//overflow check
    {
        printf("OPPS !! , Overflow Queue .\n");
    }
    else if(SizeOfArr==0)//ckeck if queue is empty
    {
        SizeOfArr++;
        Rear=0;
        Front=0;
        Arr[Rear]=Val;
    }

    else if(Rear == Size-1 )
    {
        SizeOfArr++;
        Rear=0;
        Arr[Rear]=Val;
    }
    else//normal case
    {
        SizeOfArr++;
        Rear++;
        Arr[Rear]=Val;
    }
}

sint32 Dequeue(void )
{
    if(Rear == -1 || Front == -1)//underflow
    {
        printf("Queue is empty .\n");
    }
    else
    {
        //only one node
        if (Front == Rear)//only one node in queue
        {
            sint32 Val=Arr[Front];
            ////
            Rear=Front=-1;
            ////
            return Val;
        }
        else if(Front==Size-1)//front -->limit
        {
            sint32 Val=Arr[Front];
            Front=0;
            return Val;
        }
        else//normal case
        {
            sint32 Val=Arr[Front];
            Front++;
            return Val;
        }
    }


}


void Display (void)
{
    sint32 i;

    if(Front == -1)
    {
        printf("Queue is empty .\n");
    }
    else if(Front<=Rear)//normal case
    {
        for(i=Front; i<=Rear; i++)
        {
            printf("%d\t",Arr[i]);
        }
    }
    else  // corner case
    {
        for(i=Front; i<Size; i++)//to front to end
        {
            printf("%d\t",Arr[i]);
        }

        for(i=0; i<=Rear; i++)//start to rear
        {
            printf("%d\t",Arr[i]);
        }
    }

}
