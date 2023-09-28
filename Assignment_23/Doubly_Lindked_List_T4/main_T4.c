#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "DLL.h"

/*(4) Write a C function to create a double linked list, scan number of nodes and values of them inside the function.*/
int main()
{

    DNode_t *start=DoubleList_createNodeList();
    DoubleList_DisplayList(start);

    return 0;
}
