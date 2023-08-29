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
Target      :   C Array
Name        :   Assignment 8 - Lecture 8 - Problem number 4
Program     :   Write a C function that takes an array as input and reverse
                it without creating another array.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (4) Write a C function that takes an array as input and reverse
                    it without creating another array.

+
==========================================================================================
*/

/*-------------------------        Approach 1                    ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

void reverseArray(int arr[], int size) 
{
    int start = 0;
    int end = size - 1;

    while (start < end) 
    {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}

int main() {
    int size = 5;

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


/*-------------------------        Approach 2                    ------------------------*/
/*---------------------------------------------------------------------------------------*/
/*****************************************************************************************
 * using for loop 
 * */
#include <stdio.h>

void reverseArray(int arr[], int size)
{
        for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int size = 5;
    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        if(scanf("%d", &arr[i]) !=1)
        {
            printf("Invalid Input");
            return 1;
        }

    }

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
// Wrong solution
/*******
 * if you use this condition in for loop : i < size ----> the reversing operation will be done two times so the reversed array will be the same of orignal
 * */
void reverseArray(int arr[], int size)
{
        for (int i = 0; i < size ; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

/*****************
 * this is the output:
 * 
 * */
// Enter 5 elements of the array:
// 1
// 2
// 3
// 4
// 5
// Original array: 1 2 3 4 5
// Reversed array: 1 2 3 4 5