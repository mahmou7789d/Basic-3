//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................222222222.....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................222222222222....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................22222222222222...
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................222222222222222..
//.......TTTTTT.................................................................kkkkkk...................222222222222222..
//.......TTTTTT.................................................................kkkkkk.................. 222222...222222..
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk........ 22222....222222..
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk...................222222..
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk....................222222..
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk....................222222...
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk....................2222222...
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk....................2222222....
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk...................2222222.....
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk..................2222222......
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk................2222222.......
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk..............2222222........
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk.............2222222.........
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk...........2222222..........
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk...........222222222222222..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk......... 222222222222222..
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk......... 222222222222222..
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk........ 222222222222222..
//........................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Algorithm
Name        :   Assignment 10 - Lecture 10 - Problem number 2
Program     :   Write a C function that use the bubble sorting algorithm to sort an integer array in descending order.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (2) Write a C function that use the bubble sorting algorithm to sort an integer array in descending order.

+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

// Function to perform bubble sort in descending order
void bubbleSortDescending(int arr[], int size) 
{
    // Outer loop: Controls the number of passes through the array
    for (int i = 0; i < size - 1; i++) 
    {
        // Inner loop: Compares adjacent elements and swaps if necessary
        // The '-i' optimizes the loop, as the largest i elements are already in place
        for (int j = 0; j < size - i - 1; j++) 
        {
            // Compare the current element with the next element
            if (arr[j] < arr[j + 1]) 
            {
                // Swap the elements if the current element is smaller than the next
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size = 6;

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1)
        {
        	printf("Invalid input");
        	return 1;
        }
    } 

    printf("Original array: ");
    // Print the elements of the original array
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    // Call the bubbleSortDescending function to sort the array in descending order
    bubbleSortDescending(arr, size);

    printf("\nSorted array in descending order: ");
    // Print the elements of the sorted array
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;  // Indicate successful program execution
}


/**********************************************************************************************************************************/
/**********************************************************************************************************************************/
/**********************************************************************************************************************************/
/**********************************************************************************************************************************/
/**********************************************************************************************************************************/
/**********************************************************************************************************************************/
/**********************************************************************************************************************************
 * Learn more 
 **/

void bubbleSortAscending(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
