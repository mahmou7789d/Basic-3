#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "DLL.h"

/*(7) Write a C function to delete a certain node value from a
doubly linked list, the function shall work well even if the node
to be deleted is at first or end or between or the only node in
the list, if the required node value isn't found in the list, it shall
print that the value isn't found.*/

int main()
{
    int Value,NewValue;

    DNode_t *start=DoubleList_createNodeList();
    printf("Please Enter you Deleted value: ");
    scanf("%d", &Value);

    start=DoubleList_DeleteCertainNodeInList(start,Value);

    DoubleList_DisplayList(start);


    return 0;
}
