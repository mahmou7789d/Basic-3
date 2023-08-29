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
Name        :   Assignment 8- Lecture 8 - Problem number 1
Program     :   Write a C program to print the index of FIRST occurrence of 
                a number in an array. Array index start from 0. If the item is not 
                in the list print -1.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (1) Write a function called total, which totals the sum of an
                    integer array passed to it (as the first parameter) and returns
                    the total of all the elements as an integer. Let the second
                    parameter to the function be an integer which contains the
                    number of elements of the array.
+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/




#include <stdio.h>

int total(int arr[], int numElements) {
    int sum = 0;
    for (int i = 0; i < numElements; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numElements = 5;
    int arr[numElements];
    
    // Initialize the array elements
    for (int i = 0; i < numElements; i++) {
        arr[i] = (i + 1) * 10; // You can modify the initialization logic here
    }
    
    int result = total(arr, numElements);
    
    printf("The total sum of the array elements is: %d\n", result);
    
    return 0;
}

/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int total(int arr[], int numElements) {
    int sum = 0;
    for (int i = 0; i < numElements; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numElements;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &numElements);
    
    int arr[numElements];
    
    printf("Enter %d elements:\n", numElements);
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = total(arr, numElements);
    
    printf("The total sum of the array elements is: %d\n", result);
    
    return 0;
}


// keep in mind that this code uses Variable Length Arrays (VLAs) which are not standard C, but an optional feature introduced in C99. 
// Some compilers might support VLAs, but they are not guaranteed to work in all environments. 
// If you want to ensure portability, it's better to use dynamically allocated memory or predefined fixed-size arrays.
