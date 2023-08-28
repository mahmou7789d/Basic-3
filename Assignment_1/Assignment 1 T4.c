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
Target      :   C Variable & Operators
Name        :   Assignment 1 - Lecture 1 - Problem number 4
Program     :   Write a program that reads the radius of a circle and calculates the area and circumference then prints the results.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (4) Write a program that reads the radius of a circle and calculates the area and circumference then prints the results.

+
==========================================================================================
*/

/*-------------------------        Approach 1:                   ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    float radius;          // To store the radius of the circle
    float area, circumference;  // To store calculated area and circumference
    float PI = 3.14159;     // Constant value for the mathematical constant Pi

    // Prompt the user to input the radius of the circle
    printf("Enter the radius of the circle: ");

    // Read the input radius from the user and store it in 'radius'
    if (scanf("%f", &radius) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;  // Indicate an error by returning a non-zero value
    }
    else 
    {
        /**
         *  Do nothing 
         * */
    }

    // Check if the radius is non-negative
    if (radius < 0) {
        printf("Invalid input. Radius cannot be negative.\n");
        return 1;  // Indicate an error by returning a non-zero value
    }
    else 
    {
        /**
         *  Do nothing 
         * */
    }

    // Calculate the area of the circle using the formula: A = π * r^2
    area = PI * radius * radius;

    // Calculate the circumference of the circle using the formula: C = 2 * π * r
    circumference = 2 * PI * radius;

    // Display the input radius, calculated area, and circumference
    printf("Radius: %f\n", radius);
    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);

    // Indicate successful completion of the program by returning 0
    return 0;
}

