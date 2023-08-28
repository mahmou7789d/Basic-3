
//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.....................555555555555...
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.....................555555555555...
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................5555555555555...
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................5555555555555...
//.......TTTTTT.................................................................kkkkkk....................555555..........
//.......TTTTTT.................................................................kkkkkk....................55555...........
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk..........55555...........
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk...........55555555555.....
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk...........5555555555555....
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk............55555555555555...
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk.............555555555555555..
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk..............555555555555555..
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk..............55555....555555..
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk.......................555555..
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk.......................55555..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk........... 55555....555555..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk........... 555555...555555..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk...........555555555555555..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk...........55555555555555...
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk...........5555555555555...
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk...........555555555555....
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk............555555555.....
//........................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Pointers
Name        :   Assignment 12 - Lecture 12 - Problem number 5
Program     :   C function to copy all elements of an array into another array using pointers. The two arrays have the same length and types
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (5) C function to copy all elements of an array into another array using pointers. The two arrays have the same length and types

+
==========================================================================================
*/

/*-------------------------          Approach 1 :                ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

void copyArray(int *source, int *destination, int length);

int main() 
{
    int length = 6; // Setting a predefined length for demonstration

    // Declare arrays to hold source and destination elements
    int sourceArray[length];
    int destinationArray[length];

    int *ptr1=sourceArray;
    int *ptr2=destinationArray;
    // Input elements for the source array
    printf("Enter elements for the source array:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("Enter element %d: ", i + 1);
        
        // Input validation to handle non-integer inputs
        if (scanf("%d",ptr1+i) != 1) 
        {
            printf("Invalid input. Please enter an integer.\n");
            return 1; // Exit the program with an error code
        }
    }

    // Call the copyArray function to copy elements
    copyArray(ptr1, ptr2, length);

    // Display the copied array
    printf("\nCopied array:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ",*(ptr2+i));
    }

    return 0; // Exit the program with a success code
}

// Function to copy elements from the source array to the destination array
void copyArray(int *ptr1, int *ptr2, int length) 
{
    for (int i = 0; i < length; i++) 
    {
        // Using pointer arithmetic to access and copy elements
        // The *(destination + i) is equivalent to destination[i]
        // This copies the value at source[i] to destination[i]
        *(ptr2 + i) = *(ptr1 + i);
    }
}






void copyArray(int *source, int *destination, int length) {
    // Copy elements from the source array to the destination array using array indexing
    for (int i = 0; i < length; i++) {
        destination[i] = source[i];
    }
}

void copyArray(int *source, int *destination, int length) {
    // Copy elements from the source array to the destination array using pointers
    for (int *srcPtr = source, *destPtr = destination; srcPtr < source + length; srcPtr++, destPtr++) {
        *destPtr = *srcPtr;
    }
}
void copyArray(int *source, int *destination, int length) {
    // Copy elements from the source array to the destination array using pointers
    while (length--) {
        *destination = *source;
        source++;
        destination++;
    }
}
void copyArray(int *source, int *destination, int length) {
    // Calculate the end pointer position
    int *endPtr = source + length;
    
    // Copy elements from the source array to the destination array using pointers
    while (source < endPtr) {
        *destination = *source;
        source++;
        destination++;
    }
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

/*-------------------------              Approach 6              ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

void copyArrayRecursive(int *source, int *destination, int length, int index) {
    if (index == length) {
        return; // Base case: All elements have been copied
    }

    *destination = *source; // Copy the current element
    copyArrayRecursive(source + 1, destination + 1, length, index + 1); // Move to the next element
}

int main() {
    int length = 6;
    int sourceArray[length];
    int destinationArray[length];

    printf("Enter elements for the source array:\n");
    for (int i = 0; i < length; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &sourceArray[i]);
    }

    // Call the copyArrayRecursive function to copy elements
    copyArrayRecursive(sourceArray, destinationArray, length, 0);

    printf("\nSource array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", sourceArray[i]);
    }

    printf("\nCopied array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}
