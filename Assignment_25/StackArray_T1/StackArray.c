#include <stdio.h>
#include "STD_Types.h"
#include "StackArray.h"

static sint32 Arr[Size];
static sint32 Top;

/**
How to create stack data structure using array?
Example:

int stack[Size];
The above code creates a stack of integer. Where SIZE is the capacity of stack.

As you know stack follows the concept of LIFO. Hence, we will need a variable to keep track of top element.
Let, us declare a variable top to keep track of top element.

int top = -1;
In the above code I have initialized top with -1. Which means there are no elements in stack.
*/
void StackArray_InitStack(void)
{
    Top=-1;
}

uint8 StackArray_IsEmpty(void)
{
    uint8 State ;
    if(Top==-1)
    {
         State=1;
    }
    else
    {
         State=0;
    }
    return State;
}

uint8 StackArray_IsFull(void)
{
    uint8 State ;
    if(Top==Size-1)
    {
        State=1;
    }
    else
    {
        State=0;
    }
    return State;
}
/**
How to find size of stack?
Unlike linked list and other data structures. Finding size of stack is straightforward. Size of stack is represented by top.
Since we have initialized top = -1;,
hence size of stack will be top + 1.
*/
sint32 StackArray_GetSize(void)
{
    return Top+1 ;
}

sint32 StackArray_Peek(void)
{
    if (!StackArray_IsEmpty())
    {
        return Arr[Top];
    }
    else
    {
        printf("Stack is empty\n");
        return;
    }
    /**
    if(Top==-1) return -1;
    return Arr[Top];
    **/
}

/**
How to push elements to stack?
Inserting/Adding a new element to stack is referred as Push operation in stack. Step by step descriptive logic to push element to stack.

If stack is out of capacity i.e. top >= SIZE, then throw “Stack Overflow” error. Otherwise move to below step.
Increment top by one and push new element to stack using stack[++top] = data; (where data is the new element).
*/
void StackArray_Push(sint32 Val)
{
    // Check stack overflow
    // top=size-1;
    if (Top >= Size)
    {
        printf("Stack Overflow, can't add more element element to stack.\n");
        return;
    }
    // Increase element count in stack
    Top++;
    // Push element in stack
    Arr[Top]=Val;

    //Arr[++Top] = Val;
    /****
    // stack[++top] = Val;
    // The stack[++top] = Val; increments the top index and stores the new element (the value variable) at the updated position in the stack array.
    ***/
    printf("Data pushed to stack.\n");
    ///---------------------------------------
    /**
    if (!StackArray_IsFull())
    {
        Arr[++Top] = Val;
    }
    else
    {
        printf("Stack Overflow, can't add more element element to stack.\n");
        return;
    }
    **/
}
/**
How to pop elements from stack?
Removing an element from stack is referred as Pop operation in stack. Step by step descriptive logic to pop element from stack.

If top < 0, then throw “Stack is Empty” error. Otherwise move down to below step.
Return the top most element from stack and decrement top by one. Say return stack[top--];.
*/
/**
How to pop elements from stack?
Removing an element from stack is referred as Pop operation in stack. Step by step descriptive logic to pop element from stack.

If top < 0, then throw “Stack is Empty” error. Otherwise move down to below step.
Return the top most element from stack and decrement top by one. Say return stack[top--];.
*/
sint32 Stack_Pop()
{
    // Check stack underflow
    if (Top < 0)
    {
        printf("Stack is empty.\n");
        return ;
    }
    // Return stack top and decrease element count in stack
    //return Arr[Top--];
    sint32 Val=Arr[Top];
    Top--;
    printf("Data Poped from stack.\n");
    return Val;
    ///----------------------------------------------
    /**
    uint32 RetVal=0;
    if (!StackArray_IsEmpty())
    {

        RetVal = Arr[Top];
    }
    else
    {
        printf("Stack is empty\n");
        return;
    }
    return RetVal;
    **/
}


void StackArray_Display (void)
{
    //i must be from type signed
    sint32 i;
    printf("the stack is : \n");
    for(i=Top ; i >= 0;i--)//3--2--1--0-- -1(255)
    {
        printf("%d\t",Arr[i]);//arr[255];
    }

}



/**
#include <stdbool.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

bool Push(int value) {
    if (top < MAX_STACK_SIZE - 1) {
        stack[++top] = value;
        return true; // Successful push
    } else {
        // Stack overflow
        return false;
    }
}

bool Pop(int *value) {
    if (top >= 0) {
        *value = stack[top--];
        return true; // Successful pop
    } else {
        // Stack underflow
        return false;
    }
}

**/


