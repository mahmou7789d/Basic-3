/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Switch & Ternary & ASCII
Name        :   Assignment 3 - Lecture 3 - Problem number 3
Program     :   Write a program that reads two integers and checks if the first is multiple of the second.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (3) Write a program that reads two integers and checks if the first is multiple of the second.

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int num1, num2;

    // Read the first integer from the user
    printf("Enter the first integer: ");
    // Read the first integer from the user and check if the input is successful
    if (scanf("%d", &num1) != 1) {
        // Display an error message if the input is not a valid integer
        printf("Invalid input for the first integer. Please enter a valid integer.\n");
        return 1; // Indicate an error by returning a non-zero value
    }
    else
    {
        /**
         * Do Nothing 
         * */
    }

    // Read the second integer from the user
    printf("Enter the second integer: ");
    // Read the second integer from the user and check if the input is successful
    if (scanf("%d", &num2) != 1) {
        // Display an error message if the input is not a valid integer
        printf("Invalid input for the second integer. Please enter a valid integer.\n");
        return 1; // Indicate an error by returning a non-zero value
    }
    else
    {
        /**
         * Do Nothing 
         * */
    }

    // Check if the second integer is zero
    if (num2 == 0) {
        // Display an error message as division by zero is not allowed
        printf("The second integer cannot be zero as it is the divisor.\n");
        return 1; // Indicate an error by returning a non-zero value
    }
    else
    {
        /**
         * Do Nothing 
         * */
    }

    // Check if the first integer is a multiple of the second integer
    if (num1 % num2 == 0) 
    {
        printf("%d is a multiple of %d.\n", num1, num2);
    } 
    else 
    {
        printf("%d is not a multiple of %d.\n", num1, num2);
    }

    // Indicate successful completion of the program by returning 0
    return 0;
}



/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

/* This is the main function */
int main ()
{
    int First_No;
    int Second_No;
    
    /* Ask user to enter any two integer numbers */
    printf("Enter First Number : ");
    scanf("%d", &First_No);
    
    printf("Enter Second Number : ");
    scanf("%d", &Second_No);
    
    if(0 == (First_No % Second_No))
    {
        printf("The First Number (%d) Is Multiply Of Second Number (%d)", First_No, Second_No);
    }
    else
    {
        printf("The First Number (%d) Is NOT Multiply Of Second Number (%d)", First_No, Second_No);
    }
    
    return 0;
}

/******************************************** Look At this Note ***********************************************************************
// The good thing in the provided code is the use of parentheses around the `(First_No % Second_No)` expression within the `if` condition. 
// Specifically, the code uses the format `if(0 == (First_No % Second_No))` instead of the more common `if((First_No % Second_No) == 0)`.

// This style of writing the condition is known as "Yoda Conditions" or "Yoda-style comparisons." It is named after the Star Wars character Yoda, 
// who speaks in an inverted sentence structure. The idea behind Yoda Conditions is to prevent accidental assignment instead of comparison.

// In many programming languages, the assignment operator (`=`) and the equality operator (`==`) can be easily confused. 
// For example, if you mistakenly write `if(First_No = Second_No)`, 
// it would assign the value of `Second_No` to `First_No`, and the condition would always evaluate to true.

// By writing the condition as `if(0 == (First_No % Second_No))`, if you accidentally use a single `=` instead of `==`, 
// the compiler will generate an error because you can't assign a value to `0`.

// In summary, using Yoda Conditions can help catch potential bugs caused by accidental assignments and improve code safety. 
// While it's not a required style, some developers prefer it as an additional safeguard against mistakes. However, readability 
// and consistency in code style are generally more important than Yoda Conditions.



/*-------------------------          Approach 3                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Input first integer
    printf("Enter the first integer: ");
    // Read the first integer from the user and check if the input is successful
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input for the first integer. Please enter a valid integer.\n");
        return 1; // Indicate an error by returning a non-zero value
    }

    // Input second integer
    printf("Enter the second integer: ");
    // Read the second integer from the user and check if the input is successful
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input for the second integer. Please enter a valid integer.\n");
        return 1; // Indicate an error by returning a non-zero value
    }

    // Check if the second integer is not zero and the first integer is a multiple of the second integer
    if (num2 != 0 && (num1 & (num2 - 1)) == 0) {
        printf("%d is a multiple of %d.\n", num1, num2);
    } else {
        printf("%d is NOT a multiple of %d.\n", num1, num2);
    }

    // Indicate successful completion of the program by returning 0
    return 0;
}

/******************************************** Look At this Explaination  *********************************************************************
// num2 - 1: Subtracting 1 from num2 creates a mask where all the bits to the right of the least significant bit of num2 are set to 1, 
// and the least significant bit itself is set to 0. 
// For example, if num2 is 8 (binary 1000), then num2 - 1 is 7 (binary 0111).

// num1 & (num2 - 1): Performing a bitwise AND operation between num1 and (num2 - 1) effectively checks if the binary representation of num1 
// has any set bits (1s) beyond the position of the least significant bit in num2. 
// If any of these bits are set, it means that num1 is not a multiple of num2 because it has a remainder when divided by num2.

// (num1 & (num2 - 1)) == 0: The result of the bitwise AND operation is compared to 0. 
// If the result is 0, it means that there are no set bits beyond the least significant bit position of num2 in the binary representation of num1. 
// This indicates that num1 is divisible by num2 without a remainder and therefore num1 is a multiple of num2.

// In summary, the condition (num1 & (num2 - 1)) == 0 checks if num1 is a multiple of num2 using bitwise operations 
// to determine if there is no remainder when dividing num1 by num2. 
// If the condition is true, it means that num1 is a multiple of num2.


/******************************************** Look At this Tracing  ***********************************************************************
// In this solution, we use bitwise AND (&) operation to determine if num1 is a multiple of num2. 
// When num2 is a power of 2 (i.e., 2, 4, 8, 16, etc.), num2 - 1 has all its bits set to 1. So, 
// if the bitwise AND of num1 and num2 - 1 is zero, it means that num1 is a multiple of num2.

// Please keep in mind that this solution is not as intuitive as the previous ones and is limited to positive integers. 
// It's always a good idea to use the more straightforward and readable solutions 
// unless you have specific requirements that call for the use of bitwise operations.

// Let's trace the code with an example to see how it works. Let's say we input num1 = 16 and num2 = 4.

// The program prompts for the first integer:

// Enter the first integer: 16
// The user enters 16, and the program stores it in the variable num1.

// The program prompts for the second integer:

// Enter the second integer: 4
// The user enters 4, and the program stores it in the variable num2.

// Now, the program checks if num2 != 0 and num1 & (num2 - 1) == 0:

// num2 != 0 is true since num2 is 4.
// To check if num1 is a multiple of num2, it performs a bitwise AND between num1 and num2 - 1, which is 16 & 3.
// Binary representation of 16 is 10000, and 3 is 00011 in binary.
// 16   ->  10000
// & 3  ->  00011
// --------------
//          00000
// The result of the bitwise AND operation is 0. Since the result is 0, the condition (num1 & (num2 - 1)) == 0 evaluates to true.

// As a result, the program prints:
// 16 is a multiple of 4.
// This shows that the code correctly determined that 16 is a multiple of 4. 
// Similarly, you can try different input values to see the output for other cases. Keep in mind that this method only works when both num1 and num2 are positive integers.


// Sure, let's trace the code with negative variables. Let's say we input num1 = -12 and num2 = -3.

// The program prompts for the first integer:

// Enter the first integer: -12
// The user enters -12, and the program stores it in the variable num1.

// The program prompts for the second integer:
// Enter the second integer: -3
// The user enters -3, and the program stores it in the variable num2.

// Now, the program checks if num2 != 0 and num1 & (num2 - 1) == 0:

// num2 != 0 is true since num2 is -3, which is not zero.
// To check if num1 is a multiple of num2, it performs a bitwise AND between num1 and num2 - 1, which is -12 & (-3 - 1).
// Binary representation of -12 is 11110100 (assuming 32-bit signed integers), and -4 is ...11111100 in binary.
// -12    ->  11110100
// & -4   ->  11111100
// ---------------------
//            11110000
// The result of the bitwise AND operation is -16 (in decimal). Since the result is not equal to 0, 
// the condition (num1 & (num2 - 1)) == 0 evaluates to false.

// As a result, the program prints:
// -12 is NOT a multiple of -3.                   /********************** Wrong Answer *************************/
// This shows that the code correctly determined that -12 is not a multiple of -3.


// Please note that the code works correctly even with negative variables since bitwise operations work on 
// the two's complement representation of signed integers. 
// The key is to ensure that num2 is not zero to avoid division by zero and undefined behavior.


// The condition `(num1 & (num2 - 1)) == 0` checks if `num1` is a multiple of `num2` using bitwise operations. 
// However, this approach is not suitable for handling negative numbers. When dealing with negative integers, 
// the result of the bitwise AND operation might not behave as expected, and this can lead to incorrect results for the check.

// In the case of the input `-12` and `-3`, both numbers are negative. 
// When you use the bitwise AND operation `(num1 & (num2 - 1))`, the binary representations of `-12` and `-3` are involved, 
// and this can lead to unexpected behavior due to the way negative numbers are represented in two's complement form.

// To handle negative integers correctly, you should use a different approach that accounts for the sign of the numbers. 
// the check `num1 % num2 == 0` is used to determine if `num1` is a multiple of `num2`. 
// This approach correctly handles negative integers without any unexpected behavior caused by bitwise operations.