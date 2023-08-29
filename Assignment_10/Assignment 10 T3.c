//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................33333333......
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.....................3333333333.....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................333333333333....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................33333333333333...
//.......TTTTTT.................................................................kkkkkk...................33333333333333...
//.......TTTTTT.................................................................kkkkkk...................333333..333333...
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk.........33333...333333...
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk..................333333...
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk.................3333333....
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk.................33333333....
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk..................3333333.....
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk...................333333333...
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk...................333333333...
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk.......................333333..
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk......................333333..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk........... 33333....333333..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk........... 333333...333333..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk...........333333333333333..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk...........33333333333333...
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk...........3333333333333...
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk...........333333333333....
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk............33333333......
//........................................................................................................................

/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Algorithm
Name        :   Assignment 10 - Lecture 10 - Problem number 3
Program     :   write a C function that use the selection sorting algorithm to sort an integer array in ascending order.s
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (3) write a C function that use the selection sorting algorithm to sort an integer array in ascending order.

+
==========================================================================================
*/

/*-------------------------              Approach 1              ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

// Function to perform selection sort on an integer array
void selectionSort(int arr[], int size) {
    // Loop through the array up to the second-to-last element
    for (int i = 0; i < size - 1; i++) {
        // Find the index of the minimum element in the remaining unsorted part
        int minIndex = i;
        // Loop through the remaining unsorted part of the array
        for (int j = i + 1; j < size; j++) {
            // Compare the current element with the current minimum element
            if (arr[j] < arr[minIndex]) {
                // Update the index of the minimum element if a smaller element is found
                minIndex = j;
            }
        }
        // Swap the minimum element with the first element of the unsorted part
        if (minIndex != i) {
            // Temporary variable to hold the value of the current element
            int temp = arr[i];
            // Replace the current element with the minimum element
            arr[i] = arr[minIndex];
            // Place the original value of the current element in the position of the minimum element
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int size = 6 ;

    // Declare an array to hold the input elements
    int arr[size];
    printf("Enter the elements:\n");
    // Loop to input each element
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    // Loop to print the original array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array using selection sort
    selectionSort(arr, size);

    printf("Sorted array: ");
    // Loop to print the sorted array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
