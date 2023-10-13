#include <stdio.h>
#include <stdlib.h>
#include "STD_Types.h"
#include "QueueCircularLinkedList.h"
#include "CLL.h"

static CNode_t *Rear;

void InitQueue(void)
{
    Rear=NULL;
}

uint8 IsEmpty(void)
{
    uint8 state;
    if(Rear==NULL)
    {
        state=1;
    }
    else
    {
        state=0;
    }

    return state;
}

sint32 GetSize(void)
{
    return CircularList_Countnodes(Rear);
}

sint32 Peek(void)
{
    if(IsEmpty())
    {
        printf("Queue is empty .\n");
        return;
    }
    else
    {
        return Rear->Link->Info;
    }
}


void Enqueue(sint32 Val)
{
    if(IsEmpty())
    {
        Rear=CircularList_InsertInEmpty(Rear,Val);
    }
    else
    {
       Rear=CircularList_InsertAtEnd(Rear,Val);
    }
}
sint32 Dequeue(void )
{
    if(IsEmpty())
    {
        printf("Queue is empty .\n");
        return;
    }
    else if(Rear->Link == Rear)//
    {
        sint32 Val=Rear->Info;
        CNode_t *temp=Rear;
        ////
        Rear=NULL;
        ////
        free(temp);
    }
    else//
    {
        CNode_t *temp=Rear->Link;
        sint32 Val=temp->Info;
        Rear->Link=temp->Link;
        free(temp);
        return Val;
    }
}

void Display (void)
{
    CircularList_DisplayList(Rear);
}

