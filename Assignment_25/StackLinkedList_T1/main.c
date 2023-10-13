#include <stdio.h>
#include <stdlib.h>

#include "STD_Types.h"
#include "StackLinkedList.h"

int main()
{
    sint32 Val,i;
    uint32 PushVal;
    StackLinkedList_InitStack();
    for (i=0;i<3;i++)
    {
        printf("Enter New value to push");
        scanf("%d",&PushVal);
        StackLinkedList_Push(PushVal);
    }
    printf("%d\n",StackLinkedList_Pop());
    printf("%d\n",StackLinkedList_GetSize());
    printf("%d\n",StackLinkedList_Pop());
    printf("%d\n",StackLinkedList_Peek());
    StackLinkedList_Display();

    return 0;

}
