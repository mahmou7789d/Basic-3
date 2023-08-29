//....................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.........................11111..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk........................111111..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.......................1111111..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................11111111..
//.......TTTTTT.................................................................kkkkkk....................1111111111..
//.......TTTTTT.................................................................kkkkkk...................11111111111..
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk.........11111111111..
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk..........11111111111..
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk...........1111..11111..
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk..................11111..
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk...................11111..
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk....................11111..
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk....................11111..
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk....................11111..
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk...................11111..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk..................11111..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk..................11111..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk.................11111..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk.................11111..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk................11111..
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk................11111..
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk...............11111..
//....................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Array
Name        :   Assignment 7- Lecture 7 - Problem number 1
Program     :   Write a C program to print the index of FIRST occurrence of 
                a number in an array. Array index start from 0. If the item is not 
                in the list print -1.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (1) Write a C program to print the index of FIRST occurrence of 
                    a number in an array. Array index start from 0. If the item is not 
                    in the list print -1.

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/



#include <stdio.h>

int findFirstOccurrence(int arr[], int size, int target) {
    int index = -1; // Initialize index to -1 (not found)
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i; // Update index if target is found
            break;     // Break the loop since we only need the first occurrence
        }
    }
    
    return index;
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target number to search for: ");
    scanf("%d", &target);

    int index = findFirstOccurrence(arr, size, target);

    if (index != -1) {
        printf("The first occurrence of %d is at index %d.\n", target, index);
    } else {
        printf("The number %d is not in the array.\n", target);
    }

    return 0;
}



/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int findFirstOccurrence(int arr[], int size, int target) {
    int index = 0;
    
    while (index < size && arr[index] != target) {
        index++;
    }
    
    if (index == size) {
        return -1;  // Target not found
    } else {
        return index; // Index of the first occurrence
    }
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target number to search for: ");
    scanf("%d", &target);

    int index = findFirstOccurrence(arr, size, target);

    if (index != -1)
    {
        printf("The first occurrence of %d is at index %d.\n", target, index);
    } else {
        printf("The number %d is not in the array.\n", target);
    }

    return 0;
}
