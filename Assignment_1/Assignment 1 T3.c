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
Target      :   C Pointers
Name        :   Assignment 1 - Lecture 1 - Problem number 3
Program     :   Write a program for converting temperature from degrees Celsius to degrees Fahrenheit, given the formula:
                F = C x 9/5 + 32
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (3) Write a program for converting temperature from degrees Celsius to degrees Fahrenheit, given the formula:
                    F = C x 9/5 + 32

+
==========================================================================================
*/

/*-------------------------        Approach 1:                   ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    // Declare variables to store temperature values
    int celsius;          // To store temperature in Celsius
    float fahrenheit;     // To store temperature in Fahrenheit

    // Prompt the user to input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    
    // Read the input temperature in Celsius from the user and store it in 'celsius'
    scanf("%d", &celsius);

    // Convert Celsius to Fahrenheit using the formula: (C * 9/5) + 32
    // The conversion formula is used to transform temperature from Celsius to Fahrenheit.
    // We multiply the temperature in Celsius by 9 then divide the result whose type is float by 5 and then add 32.
    // The 32 is added to account for the offset between the two temperature scales.
    fahrenheit = (float)celsius * 9/5 + 32;

    // Display the converted temperature in Fahrenheit
    // Display both the original Celsius temperature and the calculated Fahrenheit temperature.
    printf("%d Celsius is equal to %f Fahrenheit\n", celsius, fahrenheit);

    // Indicate that the program has completed successfully by returning 0
    return 0;
}

/*-------------------------        Approach 2:                   ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    // Declare variables to store temperature values
    float celsius;      // To store temperature in Celsius
    float fahrenheit;   // To store temperature in Fahrenheit

    // Prompt the user to input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    
    // Read the input temperature in Celsius from the user and store it in 'celsius'
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit using the formula: (C * 9/5) + 32
    // We multiply the temperature in Celsius by 9 then divide the result whose type is float by 5 and then add 32.    
    // This conversion accounts for the offset between the Celsius and Fahrenheit temperature scales.
    fahrenheit = celsius * 9/5 + 32;

    // Display the converted temperature in Fahrenheit
    // The result is displayed with 2 decimal places using the "%.2f" format specifier.
    // This provides a more precise representation of the temperature.
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    // Indicate successful completion of the program by returning 0
    return 0;
}


/*-------------------------        Approach 3:                   ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    // Declare variables to store temperature values
    int celsius;         // To store temperature in Celsius
    float fahrenheit;    // To store temperature in Fahrenheit

    // Prompt the user to input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    
    // Read the input temperature in Celsius from the user and store it in 'celsius'
    scanf("%d", &celsius);

    // Convert Celsius to Fahrenheit using the formula: (C * 9.0/5) + 32
    // The conversion formula involves multiplying the temperature in Celsius by 9.0/5 (1.8)
    // and then adding 32 to account for the offset between the two temperature scales.
    // There are two equivalent expressions used to illustrate the same calculation.
    fahrenheit = celsius * 9.0/5 + 32;
    fahrenheit = celsius * (9.0/5) + 32;

    // Display the converted temperature in Fahrenheit
    // The result is displayed using the format specifiers: %d for Celsius and %f for Fahrenheit.
    printf("%d Celsius is equal to %f Fahrenheit\n", celsius, fahrenheit);

    // Indicate successful completion of the program by returning 0
    return 0;
}
