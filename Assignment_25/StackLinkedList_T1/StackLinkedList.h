#ifndef STACKLINKEDLIST_H_INCLUDED
#define STACKLINKEDLIST_H_INCLUDED
#include "STD_TYPES.h"
#include "SLL.h"

void StackLinkedList_InitStack();

uint8 StackLinkedList_IsEmpty(void);

sint32 StackLinkedList_GetSize(void);

sint32 StackLinkedList_Peek(void);

void StackLinkedList_Push(sint32 Val);

sint32 StackLinkedList_Pop(void);

void StackLinkedList_Display (void);


#endif // STACKLINKEDLIST_H_INCLUDED
