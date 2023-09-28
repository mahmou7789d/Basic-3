#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"
#include "DLL.h"

/*************************************************************************************************************
// Function: DoubleList_DisplayList
// Description: Displays the elements of a doubly linked list.
//              If the list is empty, it prints a message indicating so.
// Parameters:
//   start - A pointer to the start node of the doubly linked list.
*************************************************************************************************************/
void DoubleList_DisplayList(DNode_t *start)
{
    // Check if the list is empty
    if (start == NULL)
    {
        printf("List is empty.\n"); // Print a message indicating an empty list
        return; // Exit the function
    }

    // Initialize a pointer to traverse the list, starting from the provided start node
    DNode_t *current = start; // Use a more descriptive variable name

    // Print a message before displaying the list elements
    printf("List elements: ");

    // Loop through the list and print each element
    while (current != NULL)
    {
        printf("%d ", current->Info); // Print the current element's value
        current = current->Next; // Move to the next node in the list
    }

    // Print a newline character to format the output
    printf("\n");
}
/**************************************************************************************************************/
/**************************************************************************************************************/
/**************************************************************************************************************
// Function: DoubleList_Count_Nodes
// Description: Counts the number of nodes in a doubly linked list.
// Parameters:
//   start - A pointer to the start node of the doubly linked list.
// Returns: The number of nodes in the list.
**************************************************************************************************************/
uint8 DoubleList_Count_Nodes(DNode_t *start)
{
    // Check if the list is empty
    if (start == NULL)
    {
        return 0u; // Return 0 for an empty list
    }
    else
    {
        uint8 counter = 0u; // Initialize a counter to keep track of the number of nodes

        // Initialize a pointer 'current' to traverse the list, starting from the provided 'start' node
        DNode_t *current = start;

        // Loop through the list and count nodes
        while (current != NULL) {
            counter++; // Increment the counter for each node encountered
            current = current->Next; // Move to the next node in the list
        }

        return counter; // Return the total count of nodes in the list
    }
}
/**************************************************************************************************************/
/**************************************************************************************************************/
/**************************************************************************************************************
/**
 * Searches for a specific data value within a doubly linked list and returns its position.
 *
 * This function searches for a given integer data value within a doubly linked list,
 * starting from the specified head node. It returns the position (1-based) of the
 * data value if found in the list or -1 if the data value is not found or if the list
 * is empty.
 *
 * @param start The head of the doubly linked list. This is the starting point for
 *              traversing the list. It is assumed that the doubly linked list is
 *              properly constructed.
 *
 * @param Data  The data value to search for within the linked list.
 *
 * @return The position (1-based) of the data value if found in the linked list.
 *         If the data value is not found or if the list is empty, the function returns -1.
 *
 * @note This function does not modify the structure of the linked list; it is a
 *       read-only operation that searches for a specific data value.
 */
/**************************************************************************************************************/
sint8 DoubleList_Search(const DNode_t *start, sint32 Data)
{
    if (start == NULL)
    {
        // Handle the case when the doubly linked list is empty.
        printf("List is empty.\n");
        return -1;
    }

    uint8 counter = 1u;
    const DNode_t *current = start;

    // Traverse the doubly linked list while keeping track of the position.
    while (current != NULL && (current->Info != Data))
    {
        counter++;
        current = current->Next;
    }

    if (current != NULL)
    {
        // If the data value is found, return its position.
        return counter;
    }

    // If the data value is not found or if the list is empty, return -1.
    return -1;
}

/**************************************************************************************************************/
/**************************************************************************************************************/
/**************************************************************************************************************
// Function: DoubleList_InsertAtBeginning
// Description: Inserts a new node at the beginning of a doubly linked list.
// Parameters:
//   start - A pointer to the start node of the doubly linked list.
//   Data - The data value to be stored in the new node.
// Returns: A pointer to the updated start node of the list.
**************************************************************************************************************/
DNode_t* DoubleList_InsertAtbeginning(DNode_t* start, sint32 Data)
{
    // Allocate memory for the new node
    DNode_t* newNode = (DNode_t*)malloc(sizeof(DNode_t));

    if (newNode == NULL)
    {
        // Memory allocation failed, handle the error as needed (e.g., return an error code or exit)
        printf("Memory allocation failed for new node.\n");
        return start; // Return the original list unchanged
    }

    // Initialize the new node with the provided data
    newNode->Info = Data;
    newNode->Prev = NULL;
    newNode->Next = start;

    if (start != NULL)
    {
        // Update the previous pointer of the old start node if it's not NULL
        start->Prev = newNode;
    }

    // Update the start pointer to point to the new node, making it the new start of the list
    start = newNode;

    return start; // Return a pointer to the updated start node of the list
}
/**************************************************************************************************************/
/**************************************************************************************************************/
/**************************************************************************************************************
// Function: DoubleList_InsertInEmpty
// Description: Inserts a new node with the provided data into an empty doubly linked list.
// Parameters:
//   start - A pointer to the start node of the doubly linked list. Should be NULL for an empty list.
//   Data - The data value to be stored in the new node.
// Returns: A pointer to the start node of the updated list, which is now the newly inserted node.
**************************************************************************************************************/
DNode_t* DoubleList_InsertInEmpty(DNode_t* start, sint32 Data)
{
    // Allocate memory for the new node
    DNode_t* newNode = (DNode_t*)malloc(sizeof(DNode_t));

    if (newNode == NULL)
    {
        // Memory allocation failed, handle the error as needed (e.g., return an error code or exit)
        printf("Memory allocation failed for new node.\n");
        return start; // Return the original list unchanged
    }

    // Initialize the new node with the provided data
    newNode->Info = Data;
    newNode->Prev = NULL;
    newNode->Next = NULL;

    // Update the start pointer to point to the new node, making it the only node in the list
    start = newNode;

    return start; // Return a pointer to the new start node of the list
}
/**************************************************************************************************************/
/**************************************************************************************************************/
/**************************************************************************************************************
// Function: DoubleList_InsertAtEnd
// Description: Inserts a new node with the provided data at the end of a doubly linked list.
// If the list is empty, it creates the list with the new node as the only element.
// Parameters:
//   start - A pointer to the start node of the doubly linked list. Can be NULL if the list is empty.
//   Data - The data value to be stored in the new node.
**************************************************************************************************************/
void DoubleList_InsertAtEnd(DNode_t* start, sint32 Data)
{
    // Allocate memory for the new node
    DNode_t* newNode = (DNode_t*)malloc(sizeof(DNode_t));

    if (newNode == NULL)
    {
        // Memory allocation failed, handle the error as needed (e.g., return an error code or exit)
        printf("Memory allocation failed for new node.\n");
        return;
    }

    // Initialize the new node with the provided data
    newNode->Info = Data;
    newNode->Prev = NULL;
    newNode->Next = NULL;

    // If the list is empty, make the new node the start of the list
    if (start == NULL)
    {
        start = newNode;
        return;
    }

    // Traverse the list to find the last node
    DNode_t* ptr = start;
    while (ptr->Next != NULL)
    {
        ptr = ptr->Next;
    }

    // Link the new node to the end of the list
    ptr->Next = newNode;
    newNode->Prev = ptr;
}
/**************************************************************************************************************/
/**************************************************************************************************************/
/**************************************************************************************************************
/**
 * Function: DoubleList_createNodeList
 * Description: This function creates a doubly linked list based on user input. It prompts the user to enter
 *              the number of nodes they want in the list and the data for each node.
 *
 *              The function ensures that the user inputs a positive integer for the number of nodes.
 *              It then collects data for each node from the user, creating and linking nodes as needed.
 *
 * Parameters: None
 *
 * Returns: A pointer to the start node of the created doubly linked list. If the user specifies zero nodes,
 *          the function returns a NULL pointer, indicating an empty list.
 *
 * Note: The function dynamically allocates memory for each node based on the user's input and constructs
 *       the doubly linked list. It is the responsibility of the caller to free the memory allocated for
 *       the list when it is no longer needed to prevent memory leaks.
 *
 */
/**************************************************************************************************************/
DNode_t* DoubleList_createNodeList(void)
{
    sint32 n; // Variable to store the number of nodes entered by the user

    do
    {
        printf("Please enter the number of nodes (positive integer): ");
        scanf("%d", &n); // Read the number of nodes from the user
    } while (n < 0); // Repeat until a positive integer is entered

    DNode_t* start = NULL; // Initialize a pointer to the start node of the list as NULL

    sint32 num; // Variable to store the data for each node
    sint32 i; // Loop counter

    // Iterate through each node to collect user input
    for (i = 1; i <= n; i++)
    {
        printf("Input data for node %d: ", i);
        scanf("%d", &num); // Read the data for the current node from the user

        if (start == NULL)
        {
            // If the list is empty (start is NULL), create the first node with the entered data
            start = DoubleList_InsertInEmpty(start, num);
        }
        else
        {
            // If the list is not empty, insert the new data at the end of the list
            DoubleList_InsertAtEnd(start, num);
        }
    }

    return start; // Return a pointer to the start node of the created list
}

/**************************************************************************************************************/
/**************************************************************************************************************/
/**
 * Inserts a new node with a specified value after a node with a particular value
 * in a doubly linked list.
 *
 * This function searches for a node in the doubly linked list with a specified
 * `ParticularValue`. If found, it inserts a new node with the specified `NewNodeValue`
 * immediately after the found node. If the specified value is not found, or if memory
 * allocation for the new node fails, appropriate error messages are displayed.
 *
 * @param start          Pointer to the head of the doubly linked list.
 * @param ParticularValue The value after which the new node should be inserted.
 * @param NewNodeValue    The value to be stored in the new node.
 *
 * @note This function modifies the structure of the doubly linked list by inserting
 *       a new node. It is the responsibility of the caller to ensure proper memory
 *       management (e.g., freeing memory) when the list is no longer needed.
 *
 * Example Usage:
 *    DNode_t* myList = DoubleList_createNodeList(); // Create a doubly linked list
 *    DoubleList_InsertAfterNodeWithParticularValue(myList, 5, 10); // Insert 10 after node with value 5
 *    // myList now contains the modified doubly linked list.
 */
/**************************************************************************************************************/
void DoubleList_InsertAfterNodeWithParticularValue(DNode_t *start,sint32 ParticularValue,sint32 NewNodevalue)
{
    // Check if the list is empty
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    // Initialize a pointer to traverse the list, starting from the head
    DNode_t* ptr = start;

    // Search for the node with the specified ParticularValue
    while (ptr != NULL && ptr->Info != ParticularValue)
    {
        ptr = ptr->Next;
    }

    // If the specified value is not found in the list
    if (ptr == NULL)
    {
        printf("Value is not found in the list.\n");
        return;
    }

    // Allocate memory for the new node
    DNode_t* newNode = (DNode_t*)malloc(sizeof(DNode_t));

    // Check if memory allocation was successful
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    // Set the value of the new node
    newNode->Info = NewNodevalue;

    // Update the links of the new node
    newNode->Prev = ptr;
    newNode->Next = ptr->Next;

    // Update the links of the nodes surrounding the new node
    if (ptr->Next != NULL)
    {
        ptr->Next->Prev = newNode;
    }

    ptr->Next = newNode;
}


