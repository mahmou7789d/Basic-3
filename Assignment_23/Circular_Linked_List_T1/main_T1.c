#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "CLL.h"


/*(9) Write a C function to display a circular linked list.*/

int main()
{
    CNode_t * last=NULL;

    last=CircularList_createNodeList();
    CircularList_DisplayList(last);

    return 0;

}
