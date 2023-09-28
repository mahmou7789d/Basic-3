#include <stdio.h>
#include <stdlib.h>
#include "SLL.h"
#include <stdio.h>

/**************************************************************************************************
// Function: SingleList_DisplayList
// Display the contents of a singly linked list.
// Parameters:
//      - start: A pointer to the start node of the linked list.
//               If NULL, it indicates an empty list.
// This function prints the elements of the linked list in the format:
//      "List contents: Start -> element1 -> element2 -> ... -> elementN -> NULL"
// If the list is empty, it prints "List is empty."
***************************************************************************************************/
void SingleList_DisplayList(SNode_t *start)
{
    // Check if the list is empty
    if (start == NULL)
    {
        printf("List is empty\n"); // Display a message if the list is empty
        return; // Early return to avoid unnecessary processing
    }

    printf("List contents: "); // Inform the user that the list contents will be displayed
    SNode_t *ptr = start; // Initialize a pointer to the start of the list

    printf("Start -> "); // Indicate the start of the list
    // Traverse the list and display each element
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->Info); // Print the current element's data
        ptr = ptr->Link; // Move to the next element in the list
    }

    printf("NULL\n"); // Indicate the end of the list
}
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************
// Function: SingleList_CountNodes
// Count the number of nodes in a singly linked list.
// Parameters:
//   - start: A pointer to the start node of the linked list.
// Returns:
//   - The number of nodes in the list.
****************************************************************************************************/
uint8 SingleList_CountNodes(SNode_t *start) {
    if (start == NULL)
    {
        printf("List is empty\n");
        return -1; // Return -1 to indicate an empty list
    }

    uint8 counter = 0; // Initialize the counter to zero
    SNode_t *ptr = start; // Initialize a pointer to the start of the list

    // Traverse the list and count nodes
    while (ptr != NULL) {
        counter++;
        ptr = ptr->Link;
    }

    return counter;
}
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************
// Function: SingleList_CountNodes
// Count the number of nodes in a singly linked list.
// Parameters:
//   - start: A pointer to the start node of the linked list.
// Returns:
//   - The number of nodes in the list.
****************************************************************************************************/
sint8 SingleList_Search(SNode_t * start,sint32 Data )// return position if data is found and return -1 if data not found
{
    if(start==NULL)
    {
        printf("list is empty ");
        return -1 ;
    }
    else
    {
        uint8 counter=1u;
        SNode_t *ptr=start;

        while(ptr != NULL && (ptr->Info!=Data))
        {
            counter++;
            ptr=ptr->Link;
        }
        if(ptr != NULL)
        {
            return counter;
        }
        else
        {
            return -1;
        }
    }

}
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************
// Function: SingleList_InsertAtbeginning
// Insert a new node with the given data at the beginning of a singly linked list.
// Parameters:
//   - start: A pointer to the start node of the linked list.
//   - Data: The data to be inserted into the new node.
// Returns:
//   - A pointer to the new start node of the modified linked list.
****************************************************************************************************/

SNode_t* SingleList_InsertAtbeginning(SNode_t* start, sint32 Data)
{
    // Allocate memory for the new node
    SNode_t* Temp = (SNode_t*)malloc(sizeof(SNode_t));
    // Check if memory allocation was successful
    if (Temp == NULL)
    {
        printf("Memory allocation failed. Unable to insert node.\n");
        return start; // Return the original start pointer
    }

    // Initialize the new node
    Temp->Info = Data;

    if (start == NULL)
    {
        // If the list is empty, the new node becomes the start of the list
        Temp->Link = NULL;
        start = Temp;
    }
    else
    {
        // If the list is not empty, insert the new node at the beginning
        Temp->Link = start;
        start = Temp;
    }

    return start;
}
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************
// Function: SingleList_InsertAtEnd
// Insert a new node with the given data at the end of a singly linked list.
// Parameters:
//   - start: A pointer to the start node of the linked list.
//   - Data: The data to be inserted into the new node.
****************************************************************************************************/
void  SingleList_InsertAtEnd(SNode_t * start,sint32 Data )
{
    // Allocate memory for the new node
    SNode_t* temp = (SNode_t*)malloc(sizeof(SNode_t));

    // Check if memory allocation was successful
    if (temp == NULL)
    {
        printf("Memory allocation failed. Unable to insert node.\n");
        return;
    }

    temp->Info = Data;
    temp->Link = NULL; // Initialize the new node's Link to NULL

    if (start == NULL)
    {
        // If the list is empty, the new node becomes the start of the list
        start = temp;
    } else {
        // Find the last node in the list
        SNode_t* ptr = start;
        while (ptr->Link != NULL)
        {
            ptr = ptr->Link;
        }

        // Insert the new node at the end
        ptr->Link = temp;
    }
}
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************
// Function: SingleList_CreateNodeList
// Create a singly linked list based on user input.
// Returns:
//   - A pointer to the start node of the created linked list.
****************************************************************************************************/

SNode_t* SingleList_CreateNodeList(void)
{
    int numNodes;
    printf("Please enter the number of nodes: ");
    if(scanf("%d", &numNodes) != 1)
    {
        printf("Invalid Input");
        exit(0);
    }

    // Check if the user entered an invalid number of nodes (less than or equal to 0)
    if (numNodes <= 0)
    {
        printf("Invalid number of nodes. List creation aborted.\n");
        return NULL; // Return NULL to indicate an error condition
    }

    SNode_t* start = NULL; // Pointer to the start of the linked list
    SNode_t* temp = NULL;  // Temporary pointer for node creation and traversal

    // Loop to create and populate each node in the linked list
    for (int i = 1; i <= numNodes; i++)
        {
        SNode_t* newNode = (SNode_t*)malloc(sizeof(SNode_t));

        if (newNode == NULL)
            {
            printf("Memory allocation failed for node %d. List creation aborted.\n", i);
            // Clean up previously allocated nodes before returning NULL
            while (start != NULL)
            {
                temp = start;
                start = start->Link;
                free(temp);
            }
            return NULL;
        }

        printf("Input data for node %d: ", i);
        if(scanf("%d", &newNode->Info) != 1)
        {
            printf("Invalid Input");
            exit(0);
        }
        newNode->Link = NULL; // Initialize the Link of the new node to NULL

        // Check if it's the first node in the list
        if (start == NULL) {
            // If it's the first node, set it as the start of the list
            start = newNode;
            temp = start;
        } else {
            // Append the new node to the end of the list
            temp->Link = newNode;
            temp = temp->Link;
        }
    }
    return start;
}
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************
// Function: SingleList_InsertAfterNodeWithParticularValue
// Insert a new node with a specified value after the first occurrence of a node
// with a particular value in a singly linked list.
// Parameters:
//   - start: A pointer to the start node of the linked list.
//   - ParticularValue: The value to search for in the list.
//   - NewNodeValue: The value to be inserted into the new node.
****************************************************************************************************/
void SingleList_InsertAfterNodeWithParticularValue(SNode_t *start,int ParticularValue,int NewNodevalue)
{
    if (start == NULL) {
        printf("The list is empty. Cannot insert after a particular value.\n");
        return;
    }

    SNode_t* ptr = start;

    // Search for the first occurrence of the particular value
    while (ptr != NULL && ptr->Info != ParticularValue) {
        ptr = ptr->Link;
    }

    if (ptr != NULL) {
        // Create a new node with the specified value
        SNode_t* newNode = (SNode_t*)malloc(sizeof(SNode_t));
        if (newNode == NULL) {
            printf("Memory allocation failed. Unable to insert node.\n");
            return;
        }

        newNode->Info = NewNodevalue;
        newNode->Link = ptr->Link;
        ptr->Link = newNode;
    } else {
        printf("Particular value not found in the list. No insertion performed.\n");
    }
}
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************
// Function: SingleList_InsertBeforeNodeWithParticularValue
// Insert a new node with a specified value before the first occurrence of a node
// with a particular value in a singly linked list.
// Parameters:
//   - start: A pointer to the start node of the linked list.
//   - ParticularValue: The value to search for in the list.
//   - NewNodeValue: The value to be inserted into the new node.
// Returns:
//   - A pointer to the start node of the modified linked list.
****************************************************************************************************/
SNode_t* SingleList_InsertBeforeNodeWithParticularValue(SNode_t *start,sint32 ParticularValue,sint32 NewNodeValue)
{
    // Check if the list is empty
    if (start == NULL)
    {
        printf("List is empty.\n");
        return NULL; // Return NULL since there's nothing to insert before.
    }

    // Check if the particular value is found at the beginning of the list
    if (start->Info == ParticularValue)
    {
        // If the particular value is at the beginning, insert a new node at the beginning.
        return SingleList_InsertAtbeginning(start, NewNodeValue);
    } else
    {
        // Initialize a pointer to traverse the list
        SNode_t* ptr = start;

        // Traverse the list until the particular value is found or the end of the list is reached
        while (ptr->Link != NULL && ptr->Link->Info != ParticularValue)
        {
            ptr = ptr->Link;
        }

        // Check if the particular value was found in the list
        if (ptr->Link != NULL)
        {
            // Create a new node with the specified value
            SNode_t* NewPtr = (SNode_t*)malloc(sizeof(SNode_t));

            // Check if memory allocation was successful
            if (NewPtr == NULL)
            {
                printf("Memory allocation failed. Unable to insert node.\n");
                return start; // Return the original start pointer without modification
            }

            // Set the new node's Info and Link
            NewPtr->Info = NewNodeValue;
            NewPtr->Link = ptr->Link;

            // Update the Link of the previous node to point to the new node
            ptr->Link = NewPtr;
        } else
        {
            // If the particular value was not found, notify the user
            printf("%d not found in the list.\n", ParticularValue);
        }
    }
    // Return the start pointer of the modified linked list
    return start;
}
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************
// Function: SingleList_InserNodeAtCertainPos
// Insert a new node at a specified position in a singly linked list.
// Parameters:
//   - start: A pointer to the start node of the linked list.
//   - Pos: The position at which to insert the new node.
****************************************************************************************************/
void SingleList_InserNodeAtCertainPos(SNode_t** start, uint8 Pos, sint32 newnode)
{
    // Check if the position is invalid (less than 1)
    if (Pos < 1)
    {
        printf("Invalid position. Position must be greater than or equal to 1.\n");
        return; // Exit the function if the position is invalid
    }

    // Allocate memory for the new node
    SNode_t* NewPtr = (SNode_t*)malloc(sizeof(SNode_t));

    // Check if memory allocation was successful
    if (NewPtr == NULL)
    {
        printf("Memory allocation failed. Unable to insert node.\n");
        return; // Exit the function if memory allocation fails
    }

    // Initialize the new node's Link to NULL
    NewPtr->Link = NULL;

    // Special case: Insert at the beginning of the list
    if (Pos == 1)
    {
        NewPtr->Link = *start; // Set the new node's Link to the current start node
        NewPtr->Info = newnode; // Set the new node's Info to the provided value
        *start = NewPtr; // Update the start pointer to point to the new node
        return; // Exit the function since the node is inserted at the beginning
    }

    // Traverse the list to find the node before the specified position
    SNode_t* ptr = *start; // Initialize a pointer to the start of the list
    uint8 counter = 1; // Initialize a counter to keep track of the node positions

    while (ptr != NULL)
    {
        counter++; // Increment the counter for each node visited
        if (counter == Pos)
        {
            break; // Stop the loop when the desired position is reached
        }
        ptr = ptr->Link; // Move to the next node in the list
    }

    // Check if the list is smaller than the specified position
    if (ptr == NULL)
    {
        printf("The list is smaller than the specified position.\n");
        free(NewPtr); // Free the memory allocated for the new node
        return; // Exit the function since the position is beyond the end of the list
    }

    // Insert the new node at the specified position
    NewPtr->Link = ptr->Link; // Update the new node's Link to point to the next node
    ptr->Link = NewPtr; // Update the previous node's Link to point to the new node
    NewPtr->Info = newnode; // Set the new node's Info to the provided value
}
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************
/**
 * Deletes a node at a specified position in a singly linked list.
 *
 * This function removes a node at the specified position (Dnode) in a singly linked list.
 * It handles various cases, including deleting the first node, deleting a node in the middle,
 * and handling errors when Dnode is out of range or other invalid input is provided.
 *
 * @param start The pointer to the head of the linked list.
 * @param Dnode The position of the node to be deleted (1-based index).
 * @return A pointer to the head of the updated linked list after the deletion operation.
 *         If an error occurs or the input is invalid, the original list is returned unchanged.
 */
/****************************************************************************************************/
SNode_t* SingleList_DeleteCertainNodeInList(SNode_t* start, uint8 Dnode)
{
    // Check for NULL input list or invalid Dnode value
    if (start == NULL || Dnode < 1)
    {
        // Handle invalid input by returning the original list
        return start;
    }

    // Case 1: Deleting the first node (Dnode == 1)
    if (Dnode == 1)
    {
        SNode_t* temp = start;
        start = start->Link;
        free(temp);
    }
    else
    {
        SNode_t* current = start;
        uint8 counter = 2;

        // Traverse the list to find the node before the one to be deleted
        while (current->Link != NULL && counter < Dnode)
        {
            current = current->Link;
            counter++;
        }

        // Case 2: Deleting a node in the middle (counter == Dnode) with a valid next node
        if (counter == Dnode && current->Link != NULL)
        {
            SNode_t* temp = current->Link;
            current->Link = temp->Link;
            free(temp);
        }
        else
        {
            printf("Your input is out of Range..\n");
        }
    }

    // Return the updated list (or the original list in case of errors)
    return start;
}
/***************************************************************************************************/
/***************************************************************************************************/
/**
 * Reverses a singly linked list in place.
 *
 * This function reverses the order of nodes in a singly linked list by modifying
 * the links between nodes. It takes the head of the original list as input and
 * returns the head of the reversed list.
 *
 * @param start The pointer to the head of the original linked list.
 * @return A pointer to the head of the reversed linked list.
 */
/***************************************************************************************************/
SNode_t* SingleList_ReverseList(SNode_t* start)
{
    SNode_t* prevNode = NULL; // Initialize a pointer to the previous node (Initially, it's NULL)
    SNode_t* curNode = start; // Initialize a pointer to the current node (Start at the head)
    SNode_t* nextNode;        // Initialize a pointer to the next node

    while (curNode != NULL)
    {
        nextNode = curNode->Link;   // Store the next node's address
        curNode->Link = prevNode;   // Reverse the link to the previous node
        prevNode = curNode;         // Move the previous node pointer forward
        curNode = nextNode;         // Move the current node pointer forward
    }

    // Update the start pointer to the new head of the reversed list
    start = prevNode;

    return start;
}
/***************************************************************************************************/
/***************************************************************************************************/
/**
 * Prints the middle node(s) of a singly linked list.
 *
 * This function finds and prints the middle node(s) of a singly linked list.
 * If the list contains an odd number of nodes, it prints the single middle node.
 * If the list contains an even number of nodes, it prints the two middle nodes.
 *
 * @param start The head of the linked list.
 *              This is the starting point for traversing the list.
 */
/***************************************************************************************************/
void SingleList_PrintMiddle(SNode_t* start)
{
    // Check if the list is empty
    if (start == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    // Initialize two pointers, slowPtr and fastPtr, to traverse the list
    SNode_t* slowPtr = start;  // Moves one step at a time
    SNode_t* fastPtr = start;  // Moves two steps at a time
    SNode_t* middle1 = NULL;   // Stores the previous value of slowPtr

    // Traverse the list with fastPtr and slowPtr
    while (fastPtr != NULL && fastPtr->Link != NULL)
    {
        fastPtr = fastPtr->Link->Link; // Move fast pointer by two steps
        middle1 = slowPtr;            // Store the previous value of slow pointer
        slowPtr = slowPtr->Link;      // Move slow pointer by one step
    }

    // At this point, slowPtr points to the first middle node, and middle1 points to the second middle node
    if (fastPtr == NULL)
    {
        // Even number of nodes, print both middle nodes
        printf("Middle Nodes: %d and %d\n", middle1->Info, slowPtr->Info);
    }
    else
    {
        // Odd number of nodes, print the middle node
        printf("Middle Node: %d\n", slowPtr->Info);
    }
}

/***************************************************************************************************/
/***************************************************************************************************/
/**
 * Finds and returns the middle node of a singly linked list.
 *
 * @param start The head of the linked list.
 * @return A pointer to the middle node or NULL if the list is empty.
 */
/***************************************************************************************************/
SNode_t* singleListReturnMiddle(SNode_t *start)
{
    // Check if the list is empty (start is NULL)
    if (start == NULL) {
        // Handle empty list case by returning NULL
        return NULL;
    }

    // Initialize two pointers, Ptr1 and Ptr2, both starting from the head of the list.
    SNode_t *ptr1 = start;
    SNode_t *ptr2 = start;

    // Move Ptr2 two steps at a time and Ptr1 one step at a time.
    // This way, Ptr1 will be at the middle when Ptr2 reaches the end.
    while (ptr2 != NULL && ptr2->Link != NULL)
    {
        ptr2 = ptr2->Link->Link; // Move Ptr2 two steps
        ptr1 = ptr1->Link;       // Move Ptr1 one step
    }

    // At this point, Ptr1 is at the middle node of the list.
    // Return the middle node.
    return ptr1;
}
/***************************************************************************************************/
/***************************************************************************************************/
/**
 * Calculates the sum of values stored in a singly linked list.
 *
 * This function iterates through the given linked list, starting from the
 * specified head node, and computes the sum of all the integer values stored
 * in the individual nodes of the list.
 *
 * @param start The head of the linked list. This is the starting point for
 *              traversing the list. It is assumed that the linked list is
 *              properly constructed and does not contain any loops.
 *
 * @return The sum of integer values stored in the linked list. If the list is
 *         empty (i.e., the start pointer is NULL), the function returns 0,
 *         indicating that there are no values to sum.
 *
 * @note This function does not modify the structure of the linked list; it is
 *       a read-only operation that only computes the sum of values.
 */
/***************************************************************************************************/
sint32 SingleList_Sum_of_List(const SNode_t *start)
{
    // Initialize the sum to zero.
    sint32 sum = 0;

    // Use a descriptive variable name, 'current,' to represent the current node
    // being processed during traversal.

    const SNode_t *current = start;

    // Traverse the linked list while accumulating the sum.
    while (current != NULL)
    {
        // Add the integer value stored in the current node to the running sum.
        sum += current->Info;

        // Move to the next node in the linked list.
        current = current->Link;
    }

    // If the list is empty (i.e., start is NULL), return 0 to indicate no values to sum.
    if (start == NULL)
    {
        printf("List is empty.. \n");
    }

    // Return the computed sum of values in the linked list.
    return sum;
}
/***************************************************************************************************/
/***************************************************************************************************/

sint32 SingleList_MaxDataInList(SNode_t *start)
{
    SNode_t *ptr=(SNode_t *)malloc(sizeof(SNode_t));

    sint32 max =start->Info;

    ptr=start;

    while(NULL != ptr)
    {
        if((ptr->Info)>max)
            max=ptr->Info;

        ptr=ptr->Link ;
    }
    return max;

}
