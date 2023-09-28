#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "CLL.h"
/***********************************************************************************************************************************/
/***********************************************************************************************************************************/
/**
 * Display the elements of a circular linked list.
 *
 * @param Last Pointer to the last node of the circular linked list.
 */
/***********************************************************************************************************************************/
void CircularList_DisplayList(CNode_t* Last) {
    // Check if the circular list is empty
    if (Last == NULL) {
        printf("List is empty.\n");
        return;
    }

    // Initialize a pointer to traverse the circular linked list
    CNode_t* ptr = Last->Link;

    // Traverse the circular list and print each element
    do {
        printf("%d\t", ptr->Info); // Print the current element
        ptr = ptr->Link; // Move to the next element in the circular list
    } while (ptr != Last->Link); // Continue until we reach the last node again

    printf("\n"); // Add a newline character for better output formatting
}

/***********************************************************************************************************************************/
/***********************************************************************************************************************************/
/**
 * Insert a new node with the given data at the beginning of a circular linked list.
 *
 * @param Last Pointer to the last node of the circular linked list.
 * @param Data The data to be stored in the new node.
 * @return Pointer to the new last node of the circular linked list.
 */
/***********************************************************************************************************************************/
CNode_t* CircularList_InsertAtbeginning(CNode_t* Last, sint32 Data)
{
    if (Last == NULL) {
        printf("Circular list is not initialized.\n");
        return NULL; // Return NULL in case of an uninitialized list
    }

    // Allocate memory for the new node
    CNode_t* newNode = (CNode_t*)malloc(sizeof(CNode_t));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return Last; // Return the original last node if memory allocation fails
    }

    // Initialize the new node
    newNode->Info = Data;
    newNode->Link = Last->Link;

    // Update the last node's link to point to the new node
    Last->Link = newNode;

    // Return the new last node (which is the newly added node)
    return Last;
}
/***********************************************************************************************************************************/
/***********************************************************************************************************************************/
/**
 * Insert a new node with the given data into an empty circular linked list.
 *
 * @param Last Pointer to the last node of the circular linked list (initially NULL).
 * @param Data The data to be stored in the new node.
 * @return Pointer to the last node of the circular linked list after insertion.
 */
/***********************************************************************************************************************************/
CNode_t* CircularList_InsertInEmpty(CNode_t* Last, sint32 Data)
{
    // Allocate memory for the new node
    CNode_t* newNode = (CNode_t*)malloc(sizeof(CNode_t));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        return Last; // Return the original Last node in case of allocation failure
    }

    // Initialize the new node
    newNode->Info = Data;

    // If the circular list is empty, the new node becomes the last node and forms a self-loop
    newNode->Link = newNode;
    Last = newNode;

    // Return the new last node (which is the newly added node)
    return Last;
}
/***********************************************************************************************************************************/
/***********************************************************************************************************************************/
/**
 * Insert a new node with the given data at the end of a circular linked list.
 *
 * @param Last Pointer to the last node of the circular linked list.
 * @param Data The data to be stored in the new node.
 * @return Pointer to the new last node of the circular linked list after insertion.
 */
/***********************************************************************************************************************************/
CNode_t* CircularList_InsertAtEnd(CNode_t* Last, sint32 Data)
{
    if (Last == NULL)
    {
        printf("Circular list is not initialized.\n");
        return NULL; // Return NULL in case of an uninitialized list
    }

    // Allocate memory for the new node
    CNode_t* newNode = (CNode_t*)malloc(sizeof(CNode_t));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        return Last; // Return the original Last node in case of allocation failure
    }

    // Initialize the new node
    newNode->Info = Data;
    newNode->Link = Last->Link; // Set the new node's link to the first node

    // Update the Last node's link to point to the new node
    Last->Link = newNode;

    // Update the Last pointer to the new last node
    Last = newNode;

    // Return the new last node (which is the newly added node)
    return Last;
}
/***********************************************************************************************************************************/
/***********************************************************************************************************************************/
/**
 * Create a circular linked list based on user input.
 *
 * @return Pointer to the last node of the created circular linked list.
 */
/***********************************************************************************************************************************/
CNode_t* CircularList_createNodeList(void)
{
    sint32 n;

    do
    {
        printf("Please enter the number of nodes (positive integer): ");
        // Prompt the user for the number of nodes
        scanf("%d", &n);
    } while (n < 0);

    CNode_t *Last = NULL, *ptr = NULL;
    sint32 num, i;

    // Create the first node (if the list is not empty)
    if (n > 0)
    {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        Last = CircularList_InsertInEmpty(Last, num);
    }

    // Create additional nodes based on user input
    for (i = 2; i <= n; i++) {
        printf("Input data for node %d: ", i);
        scanf("%d", &num);
        Last = CircularList_InsertAtEnd(Last, num);
    }

    return Last;
}
/***********************************************************************************************************************************/
/***********************************************************************************************************************************/
/**
 * Insert a new node with a specified value after a node with a particular value
 * in a circular linked list.
 *
 * @param Last           Pointer to the last node of the circular linked list.
 * @param ParticularValue The value after which the new node should be inserted.
 * @param NewNodevalue   The value to be stored in the new node.
 * @return               Pointer to the last node of the updated circular linked list.
 */
/***********************************************************************************************************************************/
CNode_t* CircularList_InsertAfterNodeWithParticularValue(CNode_t* Last, sint32 ParticularValue, sint32 NewNodevalue) {
    // Check if the circular linked list is empty
    if (Last == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    CNode_t* ptr = Last->Link; // Initialize a pointer to traverse the circular linked list
    CNode_t* NewPtr = (CNode_t*)malloc(sizeof(CNode_t)); // Allocate memory for the new node

    if (NewPtr == NULL) {
        printf("Memory allocation failed.\n");
        return Last; // Return the original Last node in case of memory allocation failure
    }

    // Traverse the circular linked list to find the node with ParticularValue
    while (ptr->Info != ParticularValue && ptr != Last)
    {
        ptr = ptr->Link;
    }

    if (ptr->Info == ParticularValue)
        {
        // If the node with ParticularValue is found
        if (ptr == Last)
        {
            // If the node is the last node, insert the new node at the end
            Last = CircularList_InsertAtEnd(Last, NewNodevalue);
        } else {
            // Insert the new node after the found node
            NewPtr->Info = NewNodevalue;
            NewPtr->Link = ptr->Link;
            ptr->Link = NewPtr;
        }
    }
    else {
        // If the specified value is not found in the list
        printf("Value is not found in the list.\n");
    }

    // Return the pointer to the last node of the updated circular linked list
    return Last;
}
/***********************************************************************************************************************************/
/***********************************************************************************************************************************/
/**
 * Insert a new node with a specified value before a node with a particular value
 * in a circular linked list.
 *
 * @param Last           Pointer to the last node of the circular linked list.
 * @param ParticularValue The value before which the new node should be inserted.
 * @param NewNodevalue   The value to be stored in the new node.
 * @return               Pointer to the last node of the updated circular linked list.
 */
/***********************************************************************************************************************************/
CNode_t* CircularList_InsertBeforeNodeWithParticularValue(CNode_t* Last, sint32 ParticularValue, sint32 NewNodevalue) {
    // Check if the circular linked list is empty
    if (Last == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    CNode_t* ptr = Last->Link; // Initialize a pointer to traverse the circular linked list
    CNode_t* NewPtr = (CNode_t*)malloc(sizeof(CNode_t)); // Allocate memory for the new node

    if (NewPtr == NULL) {
        printf("Memory allocation failed.\n");
        return Last; // Return the original Last node in case of memory allocation failure
    }

    // Traverse the circular linked list to find the node with ParticularValue
    while (ptr->Info != ParticularValue && ptr->Link != Last->Link)
    {
        ptr = ptr->Link;
    }

    if (ptr->Info == ParticularValue) {
        // If the node with ParticularValue is found
        if (ptr == Last) {
            // If the node is the last node, insert the new node at the beginning
            Last = CircularList_InsertAtbeginning(Last, NewNodevalue);
        } else {
            // Insert the new node before the found node
            NewPtr->Info = NewNodevalue;
            NewPtr->Link = ptr->Link;
            ptr->Link = NewPtr;
        }
    } else {
        // If the specified value is not found in the list
        printf("Value is not found in the list.\n");
    }

    // Return the pointer to the last node of the updated circular linked list
    return Last;
}
/***********************************************************************************************************************************/
/***********************************************************************************************************************************/
/**
 * Concatenate two circular linked lists.
 *
 * @param last1 Pointer to the last node of the first circular linked list.
 * @param last2 Pointer to the last node of the second circular linked list.
 * @return Pointer to the last node of the concatenated circular linked list.
 */
/***********************************************************************************************************************************/
CNode_t* CircularList_ConcatenateTwoLists(CNode_t* last1, CNode_t* last2) {
    if (last1 == NULL) {
        return last2; // If the first list is empty, return the second list
    }
    if (last2 == NULL) {
        return last1; // If the second list is empty, return the first list
    }

    // Temporarily store the first list's link (to connect it to the second list)
    CNode_t* Temp = last1->Link;

    // Connect the last node of the first list to the first node of the second list
    last1->Link = last2->Link;

    // Connect the last node of the second list to the first node of the first list
    last2->Link = Temp;

    // Update the last pointer to the last node of the second list
    last1 = last2;

    return last1;
}
