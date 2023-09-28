#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "CLL.h"

/*(11) Write a C function to insert a node in an empty circular linked list.*/
int main()
{
    CNode_t* last = NULL;
    sint32 valueToInsert;

    // Prompt the user for the value to be inserted at the beginning
    printf("Enter the value to insert : ");
    scanf("%d", &valueToInsert);

    // Insert the user-provided value at the beginning of the list
    last = CircularList_InsertInEmpty(last, valueToInsert);

    // Display the circular linked list
    CircularList_DisplayList(last);


    return 0;
}

/*


*/
