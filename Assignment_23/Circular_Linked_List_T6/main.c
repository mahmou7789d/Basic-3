#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "CLL.h"


/*(14) Write a C function to insert a node after a certain node
value in a circular linked list, if the required node value isn't
found in the list, it shall print that the value isn't found.*/

int main()
{
    CNode_t* last = NULL;

    // Create a circular linked list based on user input
    last = CircularList_createNodeList();

    if (last != NULL)
    {
        sint32 Value,valueToInsert;
        printf("Please Enter you Particular value: ");
        scanf("%d", &Value);
        printf("Please Enter you New value: ");
        scanf("%d", &valueToInsert);
        last=CircularList_InsertAfterNodeWithParticularValue(last,Value,valueToInsert);
        // Display the circular linked list
        CircularList_DisplayList(last);
    }

    return 0;
}



/*

    last=CircularList_createNodeList();

    last=CircularList_InsertAfterNodeWithParticularValue(last,20,-100);

    CircularList_DisplayList(last);
*/
