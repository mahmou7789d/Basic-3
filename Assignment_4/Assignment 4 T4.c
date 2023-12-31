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
Target      :   C Loops
Name        :   Assignment 4 - Lecture 4 - Problem number 4
Program     :   Write a C program to calculate the power of a number.
                The number and its power are input from user.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (4) Write a C program to calculate the power of a number.
                    The number and its power are input from user.

+
==========================================================================================
*/

/*-------------------------        Approach 1:                   ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdbool.h> // Include the necessary header for using 'bool' type

int main() {
    int base, exponent;
    long long int result = 1;

    printf("Enter the base: ");
    if (scanf("%d", &base) != 1) {
        printf("Invalid input for base.\n");
        return 1; // Return a non-zero value to indicate an error
    }

    printf("Enter the exponent: ");
    if (scanf("%d", &exponent) != 1) {
        printf("Invalid input for exponent.\n");
        return 1; // Return a non-zero value to indicate an error
    }
    // Calculate the power using a loop
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is %lld\n", base, exponent, result);

    return 0;
}
/***************************** tracing code **************************/
// Enter the base: 2
// Enter the exponent: -1
// 2 raised to the power of -1 is 1

// the above code can't handle the negative exponent cases to i write the following code :
//-----------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int base, exponent;
    double result = 1.0;

    // Prompt the user to input the base
    printf("Enter the base: ");
    
    // Read the base value from the user and check for input errors
    if (scanf("%d", &base) != 1) {
        printf("Invalid input for base.\n");
        return 1; // Return a non-zero value to indicate an error
    }

    // Prompt the user to input the exponent
    printf("Enter the exponent: ");
    
    // Read the exponent value from the user and check for input errors
    if (scanf("%d", &exponent) != 1) {
        printf("Invalid input for exponent.\n");
        return 1; // Return a non-zero value to indicate an error
    }
    // Check if the exponent is non-negative
    if (exponent >= 0) 
    {
        // If the exponent is non-negative, calculate the power using multiplication
        // Initialize a loop counter 'i' to 0, and repeat the loop until 'i' is less than 'exponent'
        for (int i = 0; i < exponent; i++) 
        {
            // Multiply the 'result' by the 'base' for each iteration of the loop
            result *= base;
        }
    } 
    else 
    {
        // If the exponent is negative, calculate the power using division (for fractions)
        // Initialize a loop counter 'i' to 0, and repeat the loop until 'i' is less than the absolute value of 'exponent'
        for (int i = 0; i < -exponent; i++) 
        {
            // Divide the 'result' by the 'base' for each iteration of the loop
            result /= base;
        }
    }
    // Display the calculated result: base^exponent
    printf("%d raised to the power of %d is %lf\n", base, exponent, result);

    return 0;
}
