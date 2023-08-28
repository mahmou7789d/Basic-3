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
Target      :   C Pointers
Name        :   Assignment 12 - Lecture 12 - Problem number 3
Program     :   C Function to read 10 integers into an array from user and print them in reversing order using pointers.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (3) Write a C function that read 10 integers into an array from user and print them in reversing order using pointers.

+
==========================================================================================
*/

/*-------------------------              Approach 1              ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

void reverseArray(int *start, int *end) ;
void printArray(int *start, int *end) ;
int main() {
    int arr[10];
    int length = 10; // Assuming a fixed length of 10 integers
    int *ptr_arr=arr;
    printf("Enter %d integers:\n", length);
    for (int i = 0; i < length; i++) 
    {
        scanf("%d", ptr_arr+i); // Read an integer and store it in the array
    }
    /**
     * The reverseArray function is called with the arr pointer as the start 
     * and the pointer pointing to the last element (arr + length - 1) as the end. 
     * 
     * */

    // Reverse the array using pointers
    reverseArray(ptr_arr, ptr_arr + length - 1);

    // Call the function to print the reversed array using pointers
    printArray(ptr_arr, ptr_arr + length - 1);

    return 0;
}
/**
 * The reverseArray function:
 * This function takes two pointers, start and end, which mark the range of elements to be reversed.
 * A while loop is used to iterate over the elements within the range. It continues as long as the start pointer is less than the end pointer,
 * ensuring that only half of the array is swapped.
 * Inside the loop:
 *      The value pointed to by the start pointer is stored in the variable temp. This value will be used later in swapping.
 *      The value pointed to by the end pointer is assigned to the location pointed to by the start pointer, effectively swapping the values.
 *      The value in temp is assigned to the location pointed to by the end pointer, completing the swap.
 *      The start pointer is incremented to move to the next element, and the end pointer is decremented to move to the previous element.
 * */
// Function to reverse an array using pointers
void reverseArray(int *start, int *end) 
{
    // Swap elements pointed to by start and end pointers
    while (start < end) 
    {       
        int temp = *start;  // Store the value pointed to by start
        *start = *end;     // Assign the value pointed to by end to start
        *end = temp;       // Assign the stored value to end

        start++; // Move the start pointer forward
        end--;   // Move the end pointer backward
    }

}

// Function to print an array using pointers
void printArray(int *start, int *end) 
{
    printf("The integers in the array are:\n");
    while (start <= end) {
        printf("%d\n", *start); // Print the element pointed to by the pointer
        start++; // Move the pointer to the next element
    }
}
/*-------------------------              Approach 2              ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Function to reverse an array using pointers
void reverseArray(int *arr, int length) {
    int *start = arr;
    int *end = arr + length - 1;

    while (start < end) {
        // Swap elements pointed to by start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

// Function to print an array using pointers
void printArray(int *arr, int length) {
    printf("The integers in reverse order are:\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", arr[i]); // Print the element at the current index
    }
}

int main() {
    int arr[10];
    int reversedArr[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]); // Read an integer and store it in the array
    }

    // Reverse the array using pointers
    reverseArray(arr, 10);

    // Call the function to print the reversed array using pointers
    printArray(Arr, 10);

    return 0;
}

/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************
 * Look at this code for More Practice 
 * 
 * */

/*-------------------------              Approach 3              ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Function to print an array using pointers
void printArray(int *start, int *end) {
    printf("The integers in reverse order are:\n");
    while ( start <= end) {
        printf("%d\n", *start); // Print the element pointed to by the pointer
        start++; // Move the pointer to the previous element
    }
}

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]); // Read an integer and store it in the array
    }

    // Reverse the array using pointers recursively
    reverseArray(arr, arr + 9); // Pass pointers to the first and last elements

    // Call the function to print the reversed array using pointers
    printArray(arr, arr + 9); // Pass pointers to the first and last elements

    return 0;
}

/**
 * This function is used to reverse the array recursively using pointers. 
 * It takes two pointers, start and end, which define the range of elements to be reversed.
 * If the start pointer is greater than or equal to the end pointer, it means the range has been fully processed, and the function returns, effectively stopping the recursion.
 * Otherwise, the function swaps the elements pointed to by the start and end pointers using a temporary variable temp.
 * Then, the function makes a recursive call to itself with the start pointer moved one position forward and the end pointer moved one position backward. 
 * This way, it processes the remaining elements in the array.
 * */

// Function to reverse an array using pointers recursively
void reverseArray(int *start, int *end) {
    // Base case: If start is greater than or equal to end, the pointers have crossed or met
    if (start >= end) {
        return; // Stop recursion
    }

    // Swap elements pointed to by start and end pointers
    int temp = *start;  // Store the value pointed to by start
    *start = *end;     // Assign the value pointed to by end to start
    *end = temp;       // Assign the stored value to end

    // Recursive call with pointers moved inward
    reverseArray(start + 1, end - 1); // Pass updated pointers to reverse the remaining elements
}
















































