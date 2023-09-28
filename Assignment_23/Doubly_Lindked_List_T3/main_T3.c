#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "DLL.h"

/*(3) Write a C function to insert a node at an empty doubly linked list.*/
int main()
{
    sint32 Data;
    printf("Enter Your Data, Please : ");
    scanf("%d", &Data);

    DNode_t *start=NULL;

    start=DoubleList_InsertInEmpty(start,Data);

    DoubleList_DisplayList(start);

    return 0;
}
