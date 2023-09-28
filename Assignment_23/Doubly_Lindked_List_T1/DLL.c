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
void DoubleList_DisplayList(DNode_t *start) {
    // Check if the list is empty
    if (start == NULL) {
        printf("List is empty.\n"); // Print a message indicating an empty list
        return; // Exit the function
    }

    // Initialize a pointer to traverse the list, starting from the provided start node
    DNode_t *current = start; // Use a more descriptive variable name

    // Print a message before displaying the list elements
    printf("List elements: ");

    // Loop through the list and print each element
    while (current != NULL) {
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
// Function: DoubleList_Count_Nodes
// Description: Counts the number of nodes in a doubly linked list.
// Parameters:
//   start - A pointer to the start node of the doubly linked list.
// Returns: The number of nodes in the list.
**************************************************************************************************************/
sint8 DoubleList_Search(DNode_t * start,sint32 Data )
{
    if(start==NULL)
    {
        printf("List is empty .\n");
        return -1 ;
    }
    else
    {
        uint8 counter=1u;
        DNode_t *ptr=start;

        while(ptr != NULL && (ptr->Info!=Data))
        {
            counter++;
            ptr=ptr->Next;
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
// Function: DoubleList_createNodeList
// Description: This function creates a doubly linked list based on user input. It prompts the user to enter
//              the number of nodes they want in the list and the data for each node.
// Parameters: None
// Returns: A pointer to the start node of the created list.
**************************************************************************************************************/
DNode_t* DoubleList_createNodeList(void)
{
    sint32 n; // Variable to store the number of nodes entered by the user

    do
    {
        printf("Please enter the number of nodes (positive integer): ");
        scanf("%d", &n); // Read the number of nodes from the user
    } while (n <= 0); // Repeat until a positive integer is entered

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

void DoubleList_InsertAfterNodeWithParticularValue(DNode_t *start,sint32 ParticularValue,sint32 NewNodevalue)
{

    DNode_t * ptr=(DNode_t*)malloc(sizeof(DNode_t));
    DNode_t * NewPtr=(DNode_t*)malloc(sizeof(DNode_t));

    ptr=start;
    if(start==NULL)
    {
        printf("List is empty .\n");
    }
    else
    {
        while(ptr!=NULL && ptr->Info!=ParticularValue)
        {
            ptr=ptr->Next;
        }
        if((NULL != ptr)&&(ptr->Next==NULL && ptr->Info==ParticularValue))
        {


            NewPtr->Info=NewNodevalue;
            NewPtr->Next=NULL;
            NewPtr->Prev=ptr;

            ptr->Next=NewPtr;
        }
        else if(NULL != ptr)
        {

            NewPtr->Info=NewNodevalue;

            NewPtr->Prev=ptr;
            NewPtr->Next=ptr->Next;

            ptr->Next->Prev=NewPtr;
            ptr->Next   =NewPtr;

        }
        else
        {
            printf("Value is not found in the list\n");
        }
    }
}

DNode_t* DoubleList_InsertBeforeNodeWithParticularValue(DNode_t *start,sint32 ParticularValue,sint32 NewNodevalue)
{
    if(start==NULL)
    {
        printf("List is empty .\n");
    }
    else
    {
        if(start->Info==ParticularValue)
        {
            start=DoubleList_InsertAtbeginning(start,NewNodevalue);
        }
        else
        {
            DNode_t * ptr=(DNode_t*)malloc(sizeof(DNode_t));
            DNode_t * NewPtr=(DNode_t*)malloc(sizeof(DNode_t));
            ptr=start;

            while((NULL != ptr) && ptr->Info!=ParticularValue)
            {
                ptr=ptr->Next;
            }

            if(NULL != ptr)
            {


                NewPtr->Info=NewNodevalue;

                NewPtr->Next=ptr;
                NewPtr->Prev=ptr->Prev;

                ptr->Prev->Next=NewPtr;
                ptr->Prev=NewPtr;
            }
            else
            {
                printf("%d not found in List",ParticularValue);
            }
        }
    }
    return start;
}
DNode_t* SingleList_DeleteCertainNodeInList(DNode_t *start,uint8 Delnode)
{

    DNode_t * ptr=(DNode_t*)malloc(sizeof(DNode_t));
    DNode_t * temp;
    uint8 counter=1;
    if(Delnode==1 && start->Next==NULL)
    {
        temp=start;
        start=NULL;
        free(temp);
    }
    else if(Delnode==1)
    {
        temp=start;
        start=start->Next;
        start->Prev=NULL;
        free(temp);
    }
    else
    {

        ptr=start;
        while(ptr!=NULL)
        {
            if(counter == Delnode && ptr->Next==NULL)
            {
                temp=ptr;
                ptr->Prev->Next=NULL;
                free(temp);
                break;
            }
            else if(counter == Delnode)
            {
                temp = ptr;
                ptr->Prev->Next = ptr->Next;
                ptr->Next->Prev = ptr->Prev;
                free(temp);
                break;
            }
            counter++;
            ptr=ptr->Next;
        }
        if(ptr==NULL)
        {
            printf("Node %d not found in List\n",Delnode);
        }

    }
    return start;
}
DNode_t * SingleList_ReverseList(DNode_t *start)
{
    DNode_t *temp, *curNode;

    if(start != NULL)
    {
        curNode=start;
        while(curNode!=NULL)
        {
            temp=curNode->Prev ;
            curNode->Prev=curNode->Next;
            curNode->Next=temp;

            curNode=curNode->Prev;
        }
        start=temp->Prev;
    }
    return start;
}
