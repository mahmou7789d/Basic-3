#ifndef QUEUECIRCULARLINKEDLIST_H_INCLUDED
#define QUEUECIRCULARLINKEDLIST_H_INCLUDED

#include "STD_Types.h"

void InitQueue(void);

uint8 IsEmpty(void);

sint32 GetSize(void);

sint32 Peek(void);

void Enqueue(sint32 Val);

sint32 Dequeue(void );

void Display (void);

#endif // QUEUECIRCULARLINKEDLIST_H_INCLUDED
