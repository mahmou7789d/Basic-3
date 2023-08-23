/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Switch & Ternary & ASCII
Name        :   Assignment 3 - Lecture 3 - Problem number 4
Program     :   Write a program to add two floating numbers. Determine the integer floor of the sum. The floor is the truncated float value, 
                anything after the decimal point is dropped.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (5) Write a program to add two floating numbers. Determine the integer floor of the sum. The floor is the truncated float value, 
                    anything after the decimal point is dropped.
+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

int main() {
    // Declare variables to store the two floating-point numbers
    float num1, num2;

    // Prompt the user to enter the first floating-point number
    printf("Enter the first floating-point number: ");

    // Read the first floating-point number from the user and check if the input is successful
    if (scanf("%f", &num1) != 1) {
        // Display an error message if the input is not a valid floating-point number
        printf("Invalid input for the first number. Please enter a valid floating-point number.\n");
        return 1; // Indicate an error by returning a non-zero value
    }
    else 
    {
        /**
         * Do Nothing 
         * */
    }

    // Prompt the user to enter the second floating-point number
    printf("Enter the second floating-point number: ");

    // Read the second floating-point number from the user and check if the input is successful
    if (scanf("%f", &num2) != 1) {
        // Display an error message if the input is not a valid floating-point number
        printf("Invalid input for the second number. Please enter a valid floating-point number.\n");
        return 1; // Indicate an error by returning a non-zero value
    }
    else 
    {
        /**
         * Do Nothing 
         * */
    }

    // Calculate the sum of the two floating-point numbers
    float sum = num1 + num2;

    // Convert the sum to an integer by truncating the decimal part
    // This type casting converts the sum to an integer by removing the fractional part.
    int floorSum = (int)sum;

    // Display the calculated sum with 2 decimal places
    printf("Sum: %.2f\n", sum);

    // Display the integer floor of the sum
    printf("Integer floor of the sum: %d\n", floorSum);

    // Indicate successful completion of the program by returning 0
    return 0;
}

/*********************************     Tracing  Approach 1     ***************************
// Enter the first floating-point number: -1.2
// Enter the second floating-point number: -1.2
// Sum: -2.40
// Integer floor of the sum: -2

/*---------------------------------------------------------------------------------------*/
/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    float sum = num1 + num2;
    //use the floor function from the math.h library to find the floor value of the sum
    int floorSum = (int)floor(sum);

    printf("Sum: %.2f\n", sum);
    printf("Integer floor of the sum: %d\n", floorSum);

    return 0;
}


/*---------------------------------------------------------------------------------------*/
/*-------------------------          Approach 3                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    float num1, num2;

    // Prompt the user to enter the first floating-point number
    printf("Enter the first floating-point number: ");

    // Read the first floating-point number from the user and check if the input is successful
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input for the first number. Please enter a valid floating-point number.\n");
        return 1; // Indicate an error by returning a non-zero value
    }
    else 
    {
        /**
         * Do Nothing 
         * */
    }

    // Prompt the user to enter the second floating-point number
    printf("Enter the second floating-point number: ");

    // Read the second floating-point number from the user and check if the input is successful
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input for the second number. Please enter a valid floating-point number.\n");
        return 1; // Indicate an error by returning a non-zero value
    }
    else 
    {
        /**
         * Do Nothing 
         * */
    }

    // Calculate the sum of the two floating-point numbers
    float sum = num1 + num2;

    // Convert the sum to an integer by truncating the decimal part
    int floorSum = (int)sum;

    // Adjust floorSum if the sum is negative and has a fractional part
    if (sum < 0 && sum - floorSum != 0) {
        floorSum--;
    }

    // Display the calculated sum with 2 decimal places
    printf("Sum: %.2f\n", sum);

    // Display the integer floor of the sum
    printf("Integer floor of the sum: %d\n", floorSum);

    // Indicate successful completion of the program by returning 0
    return 0;
}

/********************************       Tracing  Approach 3     *******************************
Enter the first floating-point number: -1.2
Enter the second floating-point number: -1.2
Sum: -2.40
Integer floor of the sum: -3
*/

/*********************************     Explaination  Approach 3     ***************************

In this solution, after truncating the decimal part using casting, we check if the sum is negative 
and if it has a fractional part. If both conditions are true, we decrement the floorSum value 
to correctly handle negative values.
*/


/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************
 * Look at this code for More Practice 
 * 
 * */
/*---------------------------------------------------------------------------------------
/*-------------------------          Approach 4                  ------------------------
/*--------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    float num1, num2;

    // Prompt the user to enter the first floating-point number
    printf("Enter the first floating-point number: ");

    // Read the first floating-point number from the user and check if the input is successful
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input for the first number. Please enter a valid floating-point number.\n");
        return 1; // Indicate an error by returning a non-zero value
    }
    else 
    {
        /**
         * Do Nothing 
         * */
    }

    // Prompt the user to enter the second floating-point number
    printf("Enter the second floating-point number: ");

    // Read the second floating-point number from the user and check if the input is successful
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input for the second number. Please enter a valid floating-point number.\n");
        return 1; // Indicate an error by returning a non-zero value
    }
    else 
    {
        /**
         * Do Nothing 
         * */
    }

    // Calculate the sum of the two floating-point numbers
    float sum = num1 + num2;

    // Initialize floorSum
    int floorSum;

    // Check if the sum is non-negative
    if (sum >= 0) 
    {
        // Convert the sum to an integer by truncating the decimal part
        floorSum = (int)sum;
    } 
    else 
    {
        // Adjust the floorSum for negative values by subtracting 1
        floorSum = (int)(sum - 1);
    }

    // Display the calculated sum with 2 decimal places
    printf("Sum: %.2f\n", sum);

    // Display the integer floor of the sum
    printf("Integer floor of the sum: %d\n", floorSum);

    // Indicate successful completion of the program by returning 0
    return 0;
}
