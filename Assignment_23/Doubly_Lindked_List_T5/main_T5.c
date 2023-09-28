#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "DLL.h"

/*(5) Write a C function to insert a node after a certain nodevalue in a doubly linked list,
the function shall work well even if
it is required to insert after the last node,
if the required node value isn't found in the list,
it shall print that the value isn't found.*/

int main()
{
    int Value,NewValue;

    DNode_t *start=DoubleList_createNodeList();
    printf("Please Enter you Particular value: ");
    scanf("%d", &Value);
    printf("Please Enter you New value: ");
    scanf("%d", &NewValue);

    DoubleList_InsertAfterNodeWithParticularValue(start,Value,NewValue);

    DoubleList_DisplayList(start);

    return 0;
}
