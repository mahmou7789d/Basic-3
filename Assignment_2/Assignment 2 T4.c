/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Operators & If Condition
Name        :   Assignment 2 - Lecture 2 - Problem number 4
Program     :   Write a C program that asks the user to enter a three-digit number, separates the number into its individual digits 
                and prints the digits separated from one another by three spaces each. 

Author      :   Mahmoud Hamed
==========================================================================================
Description :   (4) Write a C program that asks the user to enter a three-digit number, 
                    separates the number into its individual digits and prints the digits separated from one another by three spaces each. 
                    [Hint: Use combinations of integer division and the remainder operation.] 
                    For example, if the user types in 421, the program 
                    should print: 4      2        1

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }

    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;

    printf("%d   %d   %d\n", digit1, digit2, digit3);

    return 0;
}

/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int number;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }

    while (number >= 10) {
        printf("%d   ", number / 100);
        number %= 100;
        printf("%d   ", number / 10);
        number %= 10;
    }
    printf("%d\n", number);

    return 0;
}
