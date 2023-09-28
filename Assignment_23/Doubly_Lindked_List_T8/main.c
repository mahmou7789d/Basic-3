#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "DLL.h"

/*(8) Write a C function to reverse a doubly linked list.*/

int main()
{

    DNode_t *start=DoubleList_createNodeList();

    start=DoubleList_ReverseList(start);

    DoubleList_DisplayList(start);

    return 0;
}
