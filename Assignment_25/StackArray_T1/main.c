#include <stdio.h>
#include <stdlib.h>

#include "STD_Types.h"
#include "StackArray.h"

int main()
{
    sint32 Val,i;
    uint32 PushVal;
    StackArray_InitStack();
    for (i=0;i<3;i++)
    {
        printf("Enter New value to push");
        scanf("%d",&PushVal);
        StackArray_Push(PushVal);
    }
    printf("%d\n",Stack_Pop());
    StackArray_Push(44);

    StackArray_Display();

    return 0;
}
/*

int main()
{
    int choice, data;

    while(1)
    {
        //Menu
        printf("------------------------------------\n");
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
        printf("------------------------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Size\n");
        printf("4. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter data to push into stack: ");
                scanf("%d", &data);

                // Push element to stack
                push(data);
                break;

            case 2:
                data = pop();

                // If stack is not empty
                if (data != INT_MIN)
                    printf("Data => %d\n", data);
                break;

            case 3:
                printf("Stack size: %d\n", top + 1);
                break;

            case 4:
                printf("Exiting from app.\n");
                exit(0);
                break;

            default:
                printf("Invalid choice, please try again.\n");
        }

        printf("\n\n");
    }


    return 0;
}


*/
/*
#include<stdio.h>
#include<stdlib.h>

int n, top = -1, *stack;

void push(int x){
	if(top==n) return;
	stack[++top]=x;
}

int pop(){
	if(top==-1) return -1;
	return stack[top--];
}

int peek(){
	if(top==-1) return -1;
	return stack[top];
}

void display(){
	for(int i=top ; i>-1 ; i--) printf("%d ",stack[i]);
	printf("\n\n");
}

int main(){

	n = 10;

	printf("Initializing the stack with size 10\n\n");

	stack = (int*)malloc(n*sizeof(int));

	printf("Pushing elements into the stack\n1\n2\n3\n\n");

	push(1);
	push(2);
	push(3);

	printf("Displaying elements of the stack -\n");

	display();

	printf("The top of the stack = %d\n\n",peek());

	printf("Pop the top of the stack = %d\n\n",pop());

	printf("Pop the top of the stack = %d\n\n",pop());

	printf("Displaying elements of the stack -\n");

	display();

	return 0;
}
*/
