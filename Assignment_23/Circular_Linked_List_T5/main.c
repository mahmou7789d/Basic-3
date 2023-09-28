#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "CLL.h"


/*(13) Write a C function to create a circular linked list.*/

int main()
{
    CNode_t* last = NULL;
    sint32 valueToInsert;

    // Create a circular linked list based on user input
    last = CircularList_createNodeList();

    if (last != NULL)
        // Display the circular linked list
        CircularList_DisplayList(last);

    return 0;
}

