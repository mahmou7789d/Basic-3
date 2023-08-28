//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk..........................444444....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk..........................444444....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.........................4444444....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk........................44444444....
//.......TTTTTT.................................................................kkkkkk........................44444444....
//.......TTTTTT.................................................................kkkkkk.......................444444444....
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk............4444444444....
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk.............4444444444....
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk.............44444444444....
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk.............444444444444....
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk..............44444.444444....
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk..............444444.444444....
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk............. 44444..444444....
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk............. 44444..444444....
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk............ 444444444444444..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk........... 444444444444444..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk........... 444444444444444..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk.......... 444444444444444..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk..................444444....
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk.................444444....
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk.................444444....
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk................444444....
//........................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Pointers
Name        :   Assignment 12 - Lecture 12 - Problem number 4
Program     :   C function to get the value of the smallest element in array using pointers.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (4) C function to get the value of the smallest element in array using pointers.

+
==========================================================================================
*/

/*-------------------------          Approach 1 :                ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int FindSmallest(const int *arr, int size) ;

int main() {
    const int size = 6;
    int array[size]; // Declare an array of size 6 to store elements
    int *ptr = array; // Declare a pointer 'ptr' to point to the array
    printf("Enter the elements of the array:\n");

    // Input each element of the array using pointer arithmetic
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr + i);
    }
    /**
     * // Input each element of the array using a pointer-to-pointer
     * for (int **ptr = &array; *ptr < array + size; (*ptr)++) 
     * {
     *     scanf("%d", *ptr);
     * }
     * */
    // Call the function to find the smallest element using the array and store the result in 'smallest'
    int smallest = FindSmallest(array, size);
    
    // Print the smallest element in the array
    printf("The smallest element in the array is: %d\n", smallest);
    
    return 0; // Exit the program
}
// Function to find the smallest element in an array using pointers
int FindSmallest(const int *arr, int size) 
{
    int smallest = *arr; // Initialize smallest with the first element
    arr++; // Move the pointer to the next element

    // Iterate through the rest of the elements using pointers
    for (int i = 1; i < size; i++) 
    {
        if (*arr < smallest) 
        {  
            smallest = *arr; // Update smallest if a smaller element is found
        }
        arr++; // Move the pointer to the next element
    }
    return smallest; // Return the smallest element
}


int Findbiggest(const int *arr, int size) 
{
    int biggest = *arr; // Initialize smallest with the first element
    arr++; // Move the pointer to the next element

    // Iterate through the rest of the elements using pointers
    for (int i = 1; i < size; i++) 
    {
        if (*arr > biggest) 
        {  
            biggest = *arr; // Update smallest if a smaller element is found
        }
        arr++; // Move the pointer to the next element
    }
    return biggest; // Return the smallest element
}
