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

        newNode->Info = NewNodeValue;
        newNode->Link = ptr->Link;
        ptr->Link = newNode;
    } else {
        printf("Particular value not found in the list. No insertion performed.\n");
    }
}

void SingleList_InserNodeAtCertainPos(SNode_t *start,uint8 Pos)
{
    SNode_t * ptr=(SNode_t*)malloc(sizeof(SNode_t));
    SNode_t * NewPtr=(SNode_t*)malloc(sizeof(SNode_t));
    ptr=start;
    uint8 counter=1;

    while(ptr!=NULL)
    {
        counter++;
        if(counter == Pos)
        {
            break;
        }
        ptr=ptr->Link;
    }

    if(NULL==ptr)
    {
        printf("The List is small than this position \n");
    }
    else
    {
        NewPtr->Link=ptr->Link;
        ptr->Link=NewPtr;
    }


}


SNode_t* SingleList_DeleteCertainNodeInList(SNode_t *start,uint8 Dnode)
{

    SNode_t * ptr=(SNode_t*)malloc(sizeof(SNode_t));
    SNode_t * temp;
    uint8 counter=2;
    if(Dnode==1)
    {
        temp=start;
        start=start->Link;
        free(temp);
    }
    else
    {

        ptr=start;
        while(ptr!=NULL)
        {
            if(counter == Dnode)
            {
                temp = ptr->Link;
                ptr->Link = ptr->Link->Link;
                free(temp);
                break;
            }
            counter++;
            ptr=ptr->Link;
        }
    }
    return start;
}
SNode_t * SingleList_ReverseList(SNode_t *start)
{
    SNode_t *prevNode, *curNode;

    if(start != NULL)
    {
        prevNode = start;
        curNode = start->Link;
        start = start->Link;

        prevNode->Link = NULL;

        while(start != NULL)
        {
            start = start->Link;
            curNode->Link = prevNode;

            prevNode = curNode;
            curNode = start;
        }

        start = prevNode;

    }
    return start;
}

SNode_t* SingleList_ReturnMiddle(SNode_t *start)
{
    SNode_t * Ptr1 = start;
    SNode_t * Ptr2 = start;

    if (start!=NULL)
    {
        while (Ptr2 != NULL && Ptr2->Link != NULL)
        {
            Ptr2 = Ptr2->Link->Link;
            Ptr1 = Ptr1->Link;
        }
        return Ptr1;
    }

}
sint32 SingleList_SumofList(SNode_t *start)
{
    SNode_t *ptr=(SNode_t *)malloc(sizeof(SNode_t));

    sint32 sum =0;

    ptr=start;
    while(NULL != ptr)
    {
        sum+=ptr->Info;
        ptr=ptr->Link ;
    }
    return sum;

}

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

