#include "STD_Types.h"
#include <stdio.h>
#include <stdlib.h>

#include "QueueLinkedList.h"
#include "SLL.h"

SNode_t *Rear;
SNode_t *Front;

void InitQueue(void)
{
    Front = NULL;
    Rear  = NULL;
}

uint8 IsEmpty(void)
{
    uint8 state ;
    if(Front==NULL)
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
    return SingleList_CountNodes(Front);
}

sint32 Peek(void)
{
    if(IsEmpty())
    {
        printf("Sorry , List is empty \n");
    }
    else
    {
        return Front->Info;
    }
}


//insert at begining ----empty
void Enqueue(sint32 Val)
{
    SNode_t *temp=( SNode_t *) malloc(sizeof(SNode_t));
    if(IsEmpty())//queue is empty
    {
        temp->Info=Val;
        Front=Rear=temp;
        temp->Link=NULL;
    }
    else
    {
        temp->Info=Val;
        temp->Link=NULL;

        Rear->Link=temp;
        Rear=temp;
    }
}



sint32 Dequeue(void )
{
    if(IsEmpty())//underflow
    {
        printf("Sorry , List is empty \n");
    }
    else
    {
        SNode_t *temp;
        temp=Front;
        sint32 Val=Front->Info;
        Front=Front->Link;
        free(temp);
        return Val;
    }
}
void Display (void)
{
    SingleList_DisplayList(Front);
}


