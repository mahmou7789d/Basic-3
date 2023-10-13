#include <stdio.h>
#include <stdlib.h>
#include "STD_Types.h"
#include "SLL.h"
#include "StackLinkedList.h"

SNode_t* Top;

void StackLinkedList_InitStack()
{
    Top = NULL;
}
uint8 StackLinkedList_IsEmpty(void)
{
    uint8 State ;
    if(NULL == Top)
    {
         State=1;
    }
    else
    {
         State=0;
    }
    return State;
}


sint32 StackLinkedList_GetSize(void)
{
    return SingleList_CountNodes(Top);
}



sint32 StackLinkedList_Peek(void)
{
    if (!StackLinkedList_IsEmpty())
    {
        return Top->Info;
    }
    else
    {
        printf("Stack is empty\n");
        return;
    }
}

void StackLinkedList_Push(sint32 Val)
{
    Top = SingleList_InsertAtbeginning(Top,Val);
}

sint32 StackLinkedList_Pop(void)
{
    uint32 RetVal;
    RetVal = Top->Info;
    SNode_t* temp = Top;
    Top = Top->Link;
    free(temp);
    //Top = SingleList_DeleteCertainNodeInList(Top,1);
    //Top = SingleList_DeleteFirstNode(Top);
    return RetVal;
}


void StackLinkedList_Display (void)
{
    SingleList_DisplayList(Top);
}

