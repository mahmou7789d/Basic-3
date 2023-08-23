/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Operators & If Condition
Name        :   Assignment 2 - Lecture 2 - Problem number 1
Program     :   Write a program that takes a number and a bit number from the user, clear the required bit, then print the new value.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (1) Write a program that takes a number and a bit number from the user, clear the required bit, then print the new value.
+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

int main() {
    unsigned int num;
    int bitNum;

    // Input number and bit number
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter the bit number to clear (0-31): ");
    scanf("%d", &bitNum);

    if (bitNum < 0 || bitNum > 31) {
        printf("Invalid bit number. Please enter a value between 0 and 31.\n");
        return 1; // Return an error code
    }

    // Clear the specified bit
    unsigned int mask = ~(1 << bitNum);
    unsigned int newNum = num & mask;

    // Print the new value
    printf("Original number: %u\n", num);
    printf("Bit number %d cleared: %u\n", bitNum, newNum);

    return 0; // Return success
}

/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    unsigned int num;
    int bitNum;

    // Input number and bit number
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter the bit number to clear (0-31): ");
    scanf("%d", &bitNum);

    if (bitNum < 0 || bitNum > 31) {
        printf("Invalid bit number. Please enter a value between 0 and 31.\n");
        return 1; // Return an error code
    }

    // Clear the specified bit
    num = num & ~(1 << bitNum);

    // Print the new value
    printf("New number after clearing bit %d: %u\n", bitNum, num);

    return 0; // Return success
}

