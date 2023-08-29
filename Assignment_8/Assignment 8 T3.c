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
Target      :   C Array
Name        :   Assignment 8 - Lecture 8 - Problem number 3
Program     :   Write a C function to swap the contents of two arrays with the same length.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (3) Write a C function to swap the contents of two arrays with
                    the same length.

+
==========================================================================================
*/

/*-------------------------        Approach 1                    ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

void swapArrays(int arr1[], int arr2[], int length) 
{
    for (int i = 0; i < length; i++) 
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int length=5;
    
    int arr1[length];
    int arr2[length];

    printf("Enter elements for arr1:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("Enter element %d: ", i + 1);
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &arr1[i]) != 1)
        {
            printf("Invalid Input ");
            return 1;
        }
    }

    printf("Enter elements for arr2:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("Enter element %d: ", i + 1);
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &arr2[i]) != 1)
        {
            printf("Invalid Input ");
            return 1;
        }
    }

    printf("Before swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr2[i]);
    }

    swapArrays(arr1, arr2, length);

    printf("\nAfter swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
