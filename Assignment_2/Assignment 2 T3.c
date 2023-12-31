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
Target      :   C Operators & If Condition
Name        :   Assignment 2 - Lecture 2 - Problem number 3
Program     :   Write a C program that takes a number and a bit number from the user, then print the value of this bit in this number
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (3) Write a C program that takes a number and a bit number from the user, then print the value of this bit in this number

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    int number, bitNumber;
    int BitValue;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Get the bit number from the user
    printf("Enter the bit number: ");
    scanf("%d", &bitNumber);

    
    BitValue=(number >> bitNumber) & 1;
    // Extract and print the value of the specified bit
    printf("The bit at position %d is %d\n", bitNumber, BitValue);

    return 0;
}

/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int number, bitNumber;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Get the bit number from the user
    printf("Enter the bit number: ");
    scanf("%d", &bitNumber);

    // Shifting 1 by the bitNumber positions to create a bitmask
    int bitmask = 1 << bitNumber;

    // Using bitwise AND to check if the bit is set or not
    if ((number & bitmask) != 0) {
        printf("The bit at position %udis 1\n", bitNumber);
    } else {
        printf("The bit at position %d is 0\n", bitNumber);
    }

    return 0;
}
