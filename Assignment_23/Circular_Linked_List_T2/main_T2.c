#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "CLL.h"

/*(10) Write a C function to insert a node in beginning of a circular linked list. */
int main()
{
    CNode_t* last = NULL;
    sint32 valueToInsert;

    // Create a circular linked list based on user input
    last = CircularList_createNodeList();

    if (last != NULL) {
        // Prompt the user for the value to be inserted at the beginning
        printf("Enter the value to insert at the beginning: ");
        scanf("%d", &valueToInsert);

        // Insert the user-provided value at the beginning of the list
        last = CircularList_InsertAtbeginning(last, valueToInsert);

        // Display the circular linked list
        CircularList_DisplayList(last);
    }

    return 0;
}
