#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "CLL.h"


/*(16) Write a C function to concatenate 2 circular linked lists.*/

int main()
{


    CNode_t * last1=NULL;
    CNode_t * last2=NULL;

    last1=CircularList_createNodeList();
    last2=CircularList_createNodeList();

    last1=CircularList_ConcatenateTwoLists(last1,last2);

    CircularList_DisplayList(last1);


    return 0;
}

