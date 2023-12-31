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
Target      :   C Loops
Name        :   Assignment 4- Lecture 4 - Problem number 2
Program     :   Write a  C program that reads a positive integer and checks if it is a perfect square.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (2) Write a  C program that reads a positive integer and checks if it is a perfect square.

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    int number;

    // Read the positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        int isPerfectSquare = 0;
        
        // Loop to check for perfect squares
        for (int i = 1; i <= number; i++) {
            if (i * i == number) {
                isPerfectSquare = 1;
                break;
            }
        }

        if (isPerfectSquare) {
            printf("%d is a perfect square.\n", number);
        } else {
            printf("%d is not a perfect square.\n", number);
        }
    }

    return 0;
}

/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

int main() {
    int number;
    
    // Read the positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;
    }
    
    // Find the square root of the number
    double squareRoot = sqrt(number);

    // Check if the square root is an integer
    if ((int)squareRoot * (int)squareRoot == number) {
        printf("%d is a perfect square.\n", number);
    } else {
        printf("%d is not a perfect square.\n", number);
    }

    return 0;
}

/*-------------------------          Approach 3                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    int number;

    // Read the positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        // Calculate the integer part of the square root
        int sqrtNumber = 1;
        while (sqrtNumber * sqrtNumber < number) {
            sqrtNumber++;
        }

        // Check if it is a perfect square
        if (sqrtNumber * sqrtNumber == number) {
            printf("%d is a perfect square.\n", number);
        } else {
            printf("%d is not a perfect square.\n", number);
        }
    }

    return 0;
}



