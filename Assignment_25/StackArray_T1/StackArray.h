#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED

#define Size  100

void StackArray_InitStack(void);

uint8 StackArray_IsEmpty(void);

uint8 StackArray_IsFull(void);

sint32 StackArray_GetSize(void);

sint32 StackArray_Peek(void);

void StackArray_Push(sint32 Val);

sint32 StackArray_Pop(void );

void StackArray_Display (void);

#endif // STACKARRAY_H_INCLUDED
