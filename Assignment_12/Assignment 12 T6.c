//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.......................66666666.....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.....................66666666666....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................6666666666666...
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................6666666666666...
//.......TTTTTT.................................................................kkkkkk...................666666666666666..
//.......TTTTTT.................................................................kkkkkk...................666666...666666..
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk.........666666...........
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk..........66666............
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk.......... 666666666666.....
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk........... 6666666666666....
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk............ 66666666666666...
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk............. 666666666666666..
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk............. 6666666.6666666..
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk............. 666666...666666..
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk............ 666666...666666..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk............666666...666666..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk............666666...666666..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk...........666666666666666..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk............66666666666666..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk...........6666666666666...
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk............66666666666....
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk............666666666.....
//........................................................................................................................


/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Pointers
Name        :   Assignment 12 - Lecture 12 - Problem number 6
Program     :   C function to swap the contents of two arrays with the same length using pointers.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (6) Write a C function to swap the contents of two arrays with the same length using pointers.

+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/



#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int length) ;

int main() {
    int length = 5;  // The length of the arrays
    int arr1[length], arr2[length];  // Declare two arrays of the specified length
    int *ptr_arr1 = arr1;  // Pointer to arr1
    int *ptr_arr2 = arr2;  // Pointer to arr2
    
    // Input elements for the First array
    printf("Enter elements for the First array:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("Enter element %d: ", i + 1);

        // Input validation to handle non-integer inputs
        if ((scanf("%d", ptr_arr1 + i) != 1)) 
        {
            printf("Invalid input. Please enter an integer.\n");
            return 1; // Exit the program with an error code
        }
        else 
        {
            /**
             * Do Nothing
             * */
        }
    }
    
    // Input elements for the Second array
    printf("Enter elements for the Second array:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("Enter element %d: ", i + 1);

        // Input validation to handle non-integer inputs
        if ((scanf("%d", ptr_arr2 + i) != 1)) 
        {
            printf("Invalid input. Please enter an integer.\n");
            return 1; // Exit the program with an error code
        }
        else 
        {
            /**
             * Do Nothing
             * */
        }
    }

    // Call the function to swap arrays using pointers
    swapArrays(ptr_arr1, ptr_arr2, length);

    // Print the arrays after swapping
    printf("Array 1 after swapping:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", *(ptr_arr1 + i));  // Print the value pointed to by ptr_arr1
    }
    printf("\n");

    printf("Array 2 after swapping:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", *(ptr_arr2 + i));  // Print the value pointed to by ptr_arr2
    }

    return 0;
}
/*-------------------------          Approach 1 :                ------------------------*/
/*---------------------------------------------------------------------------------------*/
// Function to swap the contents of two arrays using pointers
void swapArrays(int *arr1, int *arr2, int length) 
{
    // Iterate through the arrays
    for (int i = 0; i < length; i++) {
        // Swap elements using a temporary variable
        int temp = *(arr1 + i);  // Store the current element of arr1
        *(arr1 + i) = *(arr2 + i);  // Assign the value of arr2 to arr1
        *(arr2 + i) = temp;  // Assign the stored value of arr1 to arr2
    }
}
/************************************************
 * Look at this Explaination 
 * */

// Certainly! Let's break down the `swapArrays` function step by step:

// 1. `void swapArrays(int *arr1, int *arr2, int length) {`
//    - This is the function declaration. It takes three arguments:
//      - `int *arr1`: A pointer to the first array.
//      - `int *arr2`: A pointer to the second array.
//      - `int length`: The length of the arrays to be swapped.

// 2. `for (int i = 0; i < length; i++) {`
//    - This is a loop that iterates through the arrays from index 0 to `length - 1`.

// 3. `int temp = *(arr1 + i);`
//    - This line creates a temporary variable `temp` and assigns the value pointed to by `(arr1 + i)` to it. 
//    In other words, 
//    it stores the current element of the first array `arr1` in the temporary variable.

// 4. `*(arr1 + i) = *(arr2 + i);`
//    - This line assigns the value pointed to by `(arr2 + i)` to the memory location pointed to by `(arr1 + i)`. 
//    This effectively swaps the value from the second array `arr2` into the first array `arr1`.

// 5. `*(arr2 + i) = temp;`
//    - This line assigns the stored value of the first array element (stored in the `temp` variable) 
//    to the memory location pointed to by `(arr2 + i)`. 
//    This completes the swapping process, as the original value from the first array is now stored in the second array.

// 6. The loop continues to iterate through the arrays, repeating steps 3-5 for each element.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*-------------------------          Approach 2 :                ------------------------*/
/*---------------------------------------------------------------------------------------*/
// Function to swap the contents of two arrays using XOR bitwise swapping
void swapArrays(int *arr1, int *arr2, int length) {
    for (int i = 0; i < length; i++) {
        // XOR bitwise swap: Swap the values without a temporary variable
        // Swap element of arr1 with element of arr2 using XOR (^) operation
        // arr1[i] will now store the XOR of the original arr1[i] and arr2[i] values
        *(arr1 + i) = *(arr1 + i) ^ *(arr2 + i);
        
        // Restore original arr1[i] value by XORing with the new arr1[i] value and arr2[i]
        // This effectively swaps the values between arr1[i] and arr2[i]
        *(arr2 + i) = *(arr1 + i) ^ *(arr2 + i);
        
        // Restore arr1[i] value by XORing with the new arr2[i] value and original arr1[i] value
        // This completes the swapping of values between the arrays
        *(arr1 + i) = *(arr1 + i) ^ *(arr2 + i);
    }
}


/*-------------------------          Approach 3 :                ------------------------*/
/*---------------------------------------------------------------------------------------*/
// Function to swap the contents of two arrays using pointers
void swapArrays(int *arr1, int *arr2, int length) {
    for (int i = 0; i < length; i++) {
        // Swap elements using subtraction
        // The subtraction approach works for integer values
        *(arr1 + i) = *(arr1 + i) + *(arr2 + i);  // Sum of arr1[i] and arr2[i]
        *(arr2 + i) = *(arr1 + i) - *(arr2 + i);  // New value of arr1[i]
        *(arr1 + i) = *(arr1 + i) - *(arr2 + i);  // New value of arr2[i]
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

/*-------------------------          Approach 4 :                ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Function to swap the contents of two arrays using recursion
void swapArraysRecursive(int *arr1, int *arr2, int length, int index) 
{
    if (index >= length) {
        return;  // Base case: stop recursion when index exceeds array length
    }
    
    // Swap elements using a temporary variable
    int temp = *(arr1 + index);
    *(arr1 + index) = *(arr2 + index);
    *(arr2 + index) = temp;
    
    // Recur for the next index
    swapArraysRecursive(arr1, arr2, length, index + 1);
}

int main() {
    int length = 5;  // The length of the arrays
    int arr1[length], arr2[length];  // Declare two arrays of the specified length
    int *ptr_arr1 = arr1;  // Pointer to arr1
    int *ptr_arr2 = arr2;  // Pointer to arr2
    
    // Input elements for the First array
    printf("Enter elements for the First array:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("Enter element %d: ", i + 1);

        // Input validation to handle non-integer inputs
        if ((scanf("%d", ptr_arr1 + i) != 1)) 
        {
            printf("Invalid input. Please enter an integer.\n");
            return 1; // Exit the program with an error code
        }
        else 
        {
            /**
             * Do Nothing
             * */
        }
    }
    
    // Input elements for the Second array
    printf("Enter elements for the Second array:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("Enter element %d: ", i + 1);

        // Input validation to handle non-integer inputs
        if ((scanf("%d", ptr_arr2 + i) != 1)) 
        {
            printf("Invalid input. Please enter an integer.\n");
            return 1; // Exit the program with an error code
        }
        else 
        {
            /**
             * Do Nothing
             * */
        }
    }

    swapArraysRecursive(ptr_arr1, ptr_arr2, length, 0);

    printf("After swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
