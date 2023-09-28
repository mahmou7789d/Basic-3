#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "DLL.h"

/*(2) Write a C function to insert a node at end of a doubly linked list.*/

int main()
{
    sint32 Data;
    printf("Enter Your Data, Please : ");
    scanf("%d", &Data);

    DNode_t *start=DoubleList_createNodeList();

    DoubleList_InsertAtEnd(start,Data);

    DoubleList_DisplayList(start);

    return 0;
}
