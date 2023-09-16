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
Target      :   C Structure
Name        :   Assignment 16 - Lecture 16 - Problem number 2
Program     :   C function to add two complex numbers by passing two structures to a function and display the results.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (2) C function to add two complex numbers by passing two structures to a function and display the results.

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
/**
 * in this approach i focus on how to return structure from function 
 * */

#include <stdio.h>
// Define a complex number structure with real and imaginary parts.
typedef struct
{
    float real; // Real part of the complex number.
    float img;  // Imaginary part of the complex number.
} complex;

// Function prototype for adding two complex numbers.
complex ADDTwoComplexNum(const complex *n1, const complex *n2);

int main()
{
    complex num1, num2, res;

    // Input for the first complex number.
    printf("Please enter real and imaginary parts of the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.img);

    // Input for the second complex number.
    printf("Please enter real and imaginary parts of the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.img);

    // Call the ADDTwoComplexNum function to add the two complex numbers.
    res = ADDTwoComplexNum(&num1, &num2);

    // Display the result in a user-friendly format.
    printf("Result: %.2f %c %.2fi\n", res.real, (res.img >= 0) ? '+' : '-', fabs(res.img));

    return 0;
}

/**
 * Function to add two complex numbers and return the result.
 * Implementation 1:
 * This implementation initializes and returns a complex number in one line.
 * It uses the compound literal syntax to create the result directly.
 */
complex ADDTwoComplexNum(const complex *n1, const complex *n2)
{
    complex result = { n1->real + n2->real , n1->img + n2->img };
    return result;
}

/**
 * Function to add two complex numbers and return the result.
 * Implementation 2:
 * This implementation initializes the result step by step.
 * It calculates the real and imaginary parts separately.
 */
complex ADDTwoComplexNum(const complex *n1, const complex *n2)
{
    complex result  ;
    result.real = n1->real + n2->real;
    result.img = n1->img + n2->img ;
    return result;
}

/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
/**
 * in this approach i focus on solving the task with void function by passing struct to it by referance 
 * */
#include <stdio.h>

// Define a complex number structure with real and imaginary parts.
typedef struct
{
    float real; // Real part of the complex number.
    float img;  // Imaginary part of the complex number.
} complex;

// Function prototype for adding two complex numbers.
void ADDTwoComplexNum(const complex *n1, const complex *n2, complex *result);

int main()
{
    complex num1, num2, res; // Declare complex number variables.

    // Input for the first complex number.
    printf("Please enter real and imaginary parts of the first complex number:\n");
    printf("Real part: ");
    if (scanf("%f", &num1.real) != 1) // Read and validate the real part input.
        return 1; // Return 1 if input is not valid.
    printf("Imaginary part: ");
    if (scanf("%f", &num1.img) != 1) // Read and validate the imaginary part input.
        return 1; // Return 1 if input is not valid.

    // Input for the second complex number.
    printf("Please enter real and imaginary parts of the second complex number:\n");
    printf("Real part: ");
    if (scanf("%f", &num2.real) != 1) // Read and validate the real part input.
        return 1; // Return 1 if input is not valid.
    printf("Imaginary part: ");
    if (scanf("%f", &num2.img) != 1) // Read and validate the imaginary part input.
        return 1; // Return 1 if input is not valid.

    // Call the function to add the two complex numbers.
    ADDTwoComplexNum(&num1, &num2, &res);

    // Display the result in a user-friendly format.
    printf("Result: %.2f %c %.2fi\n", res.real, (res.img >= 0) ? '+' : '-', fabs(res.img));

    return 0; // Return 0 to indicate successful execution.
}

// Function for adding two complex numbers.
void ADDTwoComplexNum(const complex *n1, const complex *n2, complex *result)
{
    // This function takes two complex numbers, n1 and n2, and calculates their sum.
    // The result is stored in the 'result' complex number.

    // Adding the real parts:
    result->real = n1->real + n2->real;
    // The real part of the result is obtained by adding the real parts of n1 and n2.

    // Adding the imaginary parts:
    result->img = n1->img + n2->img;
    // The imaginary part of the result is obtained by adding the imaginary parts of n1 and n2.
}


/*-------------------------          Approach 3                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Define a complex number structure with real and imaginary parts.
typedef struct
{
    float real; // Real part of the complex number.
    float img;  // Imaginary part of the complex number.
} complex;

// Function prototypes.
void ADDTwoComplexNum(const complex *n1, const complex *n2, complex *result);
void InputValiation(float *EnteredData);

int main()
{
    complex num1, num2, res; // Declare complex number variables.

    // Input for the first complex number.
    printf("Please enter real and imaginary parts of the first complex number:\n");
    printf("Real part: ");
    InputValiation(&num1.real); // Call InputValiation to validate and store the real part.
    printf("Imaginary part: ");
    InputValiation(&num1.img);  // Call InputValiation to validate and store the imaginary part.

    // Input for the second complex number.
    printf("Please enter real and imaginary parts of the second complex number:\n");
    printf("Real part: ");
    InputValiation(&num2.real); // Call InputValiation to validate and store the real part.
    printf("Imaginary part: ");
    InputValiation(&num2.img);  // Call InputValiation to validate and store the imaginary part.

    // Add the two complex numbers.
    ADDTwoComplexNum(&num1, &num2, &res);

    // Display the result in the format "Result: a + bi" or "Result: a - bi".
    printf("Result: %.2f %c %.2fi\n", res.real, (res.img >= 0) ? '+' : '-', fabs(res.img));
    /***
     * try the follwoing:
     * printf("Result: %.2f %c %.2fi\n", res.real, (res.img >= 0) ? '+' : '-', res.img);
     * with input : -1 , -1 , -1 , -1
     * the output will be : -2 - -2i ------> which is wrong answer
     * */
    /***
     * try the follwoing:
     * printf("Result: %.2f + %.2fi\n", res.real, res.img);
     * with input : -1 , -1 , -1 , -1
     * the output will be : -2 + -2i ------> which is wrong answer
     * */
    return 0; // Return 0 to indicate successful execution.
}

// Function to add two complex numbers.
void ADDTwoComplexNum(const complex *n1, const complex *n2, complex *result)
{
    result->real = n1->real + n2->real; // Add the real parts.
    result->img = n1->img + n2->img;    // Add the imaginary parts.
}

// Function for input validation.
void InputValiation(float *EnteredData)
{
    char flag = 0; // Flag to control the input validation loop.

    while (!flag)
    {
        if (scanf("%f", EnteredData) == 1) // Check if a valid float was entered.
        {
            flag = 1; // Set the flag to exit the loop.
        }
        else
        {
            // Prompt the user to continue or terminate the program.
            printf("Do you want to continue or terminate the program (Y - for continue, N): ");
            char choice;
            fflush(stdin); // Clear any residual input in the buffer.
            scanf(" %c", &choice); // Read the user's choice.

            if (choice == 'Y' || choice == 'y')
            {
                while (getchar() != '\n'); // Clear the input buffer.
                printf("Please enter the number again: ");
            }
            else if (choice == 'N' || choice == 'n')
            {
                printf("Invalid input");
                exit(1); // Exit the program with an error code.
            }
            else
            {
                while (getchar() != '\n'); // Clear the input buffer.
                printf("Please enter a valid choice (Y/N): ");
            }
        }
    }
}


/*
// Function for input validation.
void InputValiation(float *EnteredData1,float *EnteredData2)
{
    char flag = 0; // Flag to control the input validation loop.

    while (!flag)//!0 = 1 true
    {
        if (scanf("%f%f", EnteredData1,EnteredData2) == 2) // Check if a valid float was entered.
        {
            flag = 1; // Set the flag to exit the loop.
        }
        else
        {
            // Prompt the user to continue or terminate the program.
            printf("Do you want to continue or terminate the program (Y - for continue, N): ");
            char choice;
            fflush(stdin); // Clear any residual input in the buffer.
            scanf(" %c", &choice); // Read the user's choice.

            if (choice == 'Y' || choice == 'y')
            {
                while (getchar() != '\n'); // Clear the input buffer.
                printf("Please enter the number again: ");
            }
            else if (choice == 'N' || choice == 'n')
            {
                printf("Invalid input");
                exit(1); // Exit the program with an error code.
                //return 1;
            }
            else
            {
                while (getchar() != '\n'); // Clear the input buffer.
                printf("Please enter a valid choice (Y/N): ");
            }
        }
    }
}

*/
/*
printf("Result: %.2f %c %.2fi\n", res.real, (res.img >= 0) ? '+' : '-', fabs(res.img));

1. `"Result: %.2f %c %.2fi\n"`: This is a format string for the `printf` function. It contains placeholders for the values that will be displayed.

   - "Result: ": This part is a static string, which means it will be displayed as-is.
   - %.2f`: This is a format specifier for a floating-point number (`float` in this case) with two decimal places. 
   It corresponds to `res.real`, which is the real part of the result.
   - %c: This is a format specifier for a character. It corresponds to the sign of the imaginary part. 
   It can be either `'+'` or `'-'`.
   - %.2fi: This is another format specifier for a floating-point number with two decimal places, 
   followed by the letter 'i' to represent the imaginary unit. It corresponds to `fabs(res.img)`, 
   which is the absolute value of the imaginary part.

2. , res.real, (res.img >= 0) ? '+' : '-', fabs(res.img)`: 
    These are the values that will be substituted into the format string:

   - res.real: This is the real part of the result of adding two complex numbers. 
   It will replace the `%f` placeholder in the format string.
   
   - (res.img >= 0) ? '+' : '-': This is a ternary conditional operator (`? :`) 
   that checks whether the imaginary part of the result (`res.img`) is greater than or equal to 0. 
   If it is, it returns `'+'`; otherwise, it returns `'-'`. 
   This determines whether a plus or minus sign is displayed for the imaginary part's sign.

   - fabs(res.img): This calculates the absolute value (magnitude) of the imaginary part of the result (`res.img`). 
   The `fabs` function returns the absolute value of a floating-point number. 
   It will replace the `%f` placeholder in the format string representing the imaginary part.

So, the entire `printf` statement takes the real and imaginary parts of the result 
and formats them into a string like Result: 3.50 + 2.00i" or "Result: -1.20 - 4.50i", 
depending on the values of `res.real` and `res.img`. 
It provides a user-friendly representation of the complex number result.