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
Target      :   C Array
Name        :   Assignment 7- Lecture 7 - Problem number 2
Program     :   Write a C function to return the index of LAST occurrence of
                a number in a given array. Array index start from 0. If the item
                is not in the list return -1
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (2) Write a C function to return the index of LAST occurrence of
                    a number in a given array. Array index start from 0. If the item
                    is not in the list return -1

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
/*****************************************************************************************
 * in this approach we start searching about target from the start so we return the last updated
 * value of position 
 * */
#include <stdio.h>

int lastIndexOf(int arr[], int size, int target) 
{
    int lastIndex = -1;  // Initialize to -1 in case the target is not found

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            lastIndex = i;  // Update lastIndex when target is found
        }
    }

    return lastIndex;
}

int main() {
    int length=5;
    int target ;
    int arr1[length];
    printf("Enter elements for arr1:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &arr1[i]) != 1)
        {
            printf("Invalid Input ");
            return 1;
        }
    }
    printf("Enter Your target:\n");
    if (scanf("%d", target) != 1)
        {
            printf("Invalid input ");
            return 1;
        }
    // int arr[] = {2, 4, 6, 8, 4, 10, 4, 12};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int target = 4;

    int lastIndex = lastIndexOf(arr, size, target);

    if (lastIndex != -1) 
    {
        printf("Last occurrence of %d is at index %d\n", target, lastIndex);
    } 
    else {
        printf("%d is not found in the array\n", target);
    }

    return 0;
}


/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
/*****************************************************************************************
 * in this approach we start searching about target from the end so we return position directly
 * */
#include <stdio.h>

int lastIndexOf(int arr[], int size, int target) 
{
    for (int i = size - 1; i >= 0; i--) 
    {
        if (arr[i] == target) 
        {
            return i;  // Return the index when target is found
        }
    }

    return -1;  // Return -1 if target is not found
}

int main() {
    int length=5;
    int target ;
    int arr1[length];
    printf("Enter elements for arr1:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &arr1[i]) != 1)
        {
            printf("Invalid Input ");
            return 1;
        }
    }
    printf("Enter Your target:\n");
    if (scanf("%d", target) != 1)
        {
            printf("Invalid input ");
            return 1;
        }
    // int arr[] = {2, 4, 6, 8, 4, 10, 4, 12};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int target = 4;

    int lastIndex = lastIndexOf(arr, size, target);

    if (lastIndex != -1) 
    {
        printf("Last occurrence of %d is at index %d\n", target, lastIndex);
    } else {
        printf("%d is not found in the array\n", target);
    }

    return 0;
}
