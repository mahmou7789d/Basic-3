//.....................................................................................................................................
//.TTTTTTTTTTTTTTTTTT...............AAAAAAA....................SSSSSSSSSSS.............. KKKKK.......KKKKKKKK.............66666666.....
//.TTTTTTTTTTTTTTTTTT...............AAAAAAAA..................SSSSSSSSSSSSS............. KKKKK......KKKKKKKK............66666666666....
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA.................SSSSSSSSSSSSSSS............ KKKKK.....KKKKKKKK............6666666666666...
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA................SSSSSSSSSSSSSSSSS........... KKKKK....KKKKKKKK.............6666666666666...
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSSSS.SSSSSSSS........... KKKKK...KKKKKKKK............. 66666666666666..
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSS.....SSSSSS........... KKKKK..KKKKKKKK.............. 66666...666666..
//.......TTTTTT...................AAAAAAAAAAAA..............SSSSSSS..................... KKKKK.KKKKKKKK............... 66666...........
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSS................... KKKKKKKKKKKKK................ 66666...........
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSSSSS................ KKKKKKKKKKKK................. 66666666666.....
//.......TTTTTT..................AAAAA...AAAAAA..............SSSSSSSSSSSSS.............. KKKKKKKKKKKKK................ 6666666666666...
//.......TTTTTT.................AAAAAA...AAAAAA...............SSSSSSSSSSSSSS............ KKKKKKKKKKKKK................ 6666666666666...
//.......TTTTTT.................AAAAAA...AAAAAA................SSSSSSSSSSSSSS........... KKKKKKKKKKKKKK............... 66666666666666..
//.......TTTTTT................AAAAAA.....AAAAAA.................SSSSSSSSSSSSS.......... KKKKKKKKKKKKKKK.............. 66666666666666..
//.......TTTTTT................AAAAAAAAAAAAAAAAA....................SSSSSSSSSS.......... KKKKKKK.KKKKKKK.............. 66666...666666..
//.......TTTTTT................AAAAAAAAAAAAAAAAA.......................SSSSSSS.......... KKKKKK...KKKKKKK............. 66666....66666..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSS.......SSSSSS.......... KKKKK....KKKKKKKK............ 66666....66666..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSSS......SSSSSS.......... KKKKK.....KKKKKKK............ 66666...666666..
//.......TTTTTT...............AAAAAA.......AAAAAAA..........SSSSSSSS..SSSSSSSS.......... KKKKK.....KKKKKKKK........... 66666666666666..
//.......TTTTTT.............. AAAAA.........AAAAAA..........SSSSSSSSSSSSSSSSSS.......... KKKKK......KKKKKKK............66666666666666..
//.......TTTTTT.............. AAAAA.........AAAAAA...........SSSSSSSSSSSSSSSS........... KKKKK.......KKKKKKK...........6666666666666...
//.......TTTTTT............. AAAAA.........AAAAAAA...........SSSSSSSSSSSSSS............  KKKKK.......KKKKKKKK...........66666666666....
//.......TTTTTT............. AAAA...........AAAAAA............SSSSSSSSSSS..............  KKKKK........KKKKKKK............666666666.....
//.....................................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Loops
Name        :   Assignment 5 - Lecture 5 - Problem number 6
Program     :   Write a C Function to count the number of ones in the
				binary representation of a 32-bit integer.

Author      :   Mahmoud Hamed
==========================================================================================
Description :   (6) Write a C Function to count the number of ones in the
					binary representation of a 32-bit integer.

+
==========================================================================================
*/

/*-------------------------             Approach 1               ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int countOnes(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;  // Increment count if the least significant bit is 1
        num >>= 1;         // Right-shift num by 1 to consider the next bit
    }
    return count;
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    int onesCount = countOnes(num);
    printf("Number of ones in the binary representation of %d is: %d\n", num, onesCount);
    return 0;
}

/*-------------------------             Approach 2               ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int countOnes(int num) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (num & 1) {
            count++;
        }
        num >>= 1; // Shift the number to the right by one bit
    }
    return count;
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    int onesCount = countOnes(num);
    printf("Number of ones in the binary representation: %d\n", onesCount);

    return 0;
}

/*-------------------------             Approach 3               ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

// Function to count the number of ones (1-bits) in the binary representation of an integer
int countOnes(int num) 
{
    int count = 0; // Initialize a count to 0 to keep track of the number of ones

    // Loop until 'num' becomes 0
    while (num) {
        num &= (num - 1); // Turn off the rightmost 1-bit in 'num'
        count++; // Increment the count for each 1-bit turned off
    }

    return count; // Return the total count of ones in the binary representation
}

int main() {
    int num; // Declare an integer variable to store the user's input

    printf("Enter a 32-bit integer: "); // Prompt the user to enter an integer
    scanf("%d", &num); // Read the integer from the user and store it in 'num'

    // Call the 'countOnes' function to count the ones in the binary representation of 'num'
    int onesCount = countOnes(num);

    // Print the result, showing the original integer and the count of ones
    printf("Number of ones in the binary representation of %d is: %d\n", num, onesCount);

    return 0; // Return 0 to indicate successful program execution
}


// The countOnes function is defined to count the number of ones (1-bits) in the binary representation of an integer num. It takes num as input.

// Inside the function:

// count is initialized to 0 to keep track of the number of ones.
// A while loop is used to iterate until num becomes 0.
// In each iteration, it uses the expression num &= (num - 1) to turn off the rightmost 1-bit in num. This operation effectively clears the lowest set bit.
// For each iteration, the count is incremented by 1, counting the ones that are being turned off.
// The function returns the final count, representing the total number of ones in the binary representation of num.

// In the main function:

// An integer variable num is declared to store the user's input.
// The user is prompted to enter a 32-bit integer, and their input is read using scanf and stored in num.
// The countOnes function is called with num as an argument to count the ones in the binary representation.

// The program then prints the original integer and the count of ones to the console.

// Finally, the program returns 0 to indicate successful program execution.


/************************************************** Tracing the code ******************************************************************/


// if num = 42.

// The program calls the countOnes function with num as an argument.

// Inside the countOnes function:

//     count is initialized to 0.
//     A while loop starts, checking if num is not equal to 0. Since num is 42 (binary 101010), the loop begins.

// In the first iteration of the loop:
//     num is bitwise ANDed with (num - 1). (num - 1) is 41 (binary 101001).
//     num becomes 40 (binary 101000).
//     count is incremented to 1.

// In the second iteration of the loop:
//     num is bitwise ANDed with (num - 1). (num - 1) is 39 (binary 100111).
//     num becomes 32 (binary 100000).
//     count is incremented to 2.

// In the third iteration:
//     num is bitwise ANDed with (num - 1). (num - 1) is 31 (binary 011111).
//     num becomes 0 because all the bits are turned off.
//     count is incremented to 3.

// The while loop terminates because num is now 0.
// The countOnes function returns the value of count, which is 3, to the main function.
// In the main function:
// onesCount is assigned the value 3, which is the number of ones in the binary representation of 42.


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


#include <stdio.h>

int countOnesRecursive(int num, int count) {
    if (num == 0) {
        return count;
    } else {
        return countOnesRecursive(num >> 1, count + (num & 1));
    }
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    int onesCount = countOnesRecursive(num, 0);
    printf("Number of ones in the binary representation of %d is: %d\n", num, onesCount);
    return 0;
}
