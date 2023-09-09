//.....................................................................................................................................
//.TTTTTTTTTTTTTTTTTT...............AAAAAAA....................SSSSSSSSSSS.............. KKKKK.......KKKKKKKK........ 77777777777777..
//.TTTTTTTTTTTTTTTTTT...............AAAAAAAA..................SSSSSSSSSSSSS............. KKKKK......KKKKKKKK......... 77777777777777..
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA.................SSSSSSSSSSSSSSS............ KKKKK.....KKKKKKKK.......... 77777777777777..
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA................SSSSSSSSSSSSSSSSS........... KKKKK....KKKKKKKK........... 77777777777777..
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSSSS.SSSSSSSS........... KKKKK...KKKKKKKK.....................777777...
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSS.....SSSSSS........... KKKKK..KKKKKKKK.....................777777....
//.......TTTTTT...................AAAAAAAAAAAA..............SSSSSSS..................... KKKKK.KKKKKKKK......................777777....
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSS................... KKKKKKKKKKKKK......................777777.....
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSSSSS................ KKKKKKKKKKKK.......................777777.....
//.......TTTTTT..................AAAAA...AAAAAA..............SSSSSSSSSSSSS.............. KKKKKKKKKKKKK.....................777777......
//.......TTTTTT.................AAAAAA...AAAAAA...............SSSSSSSSSSSSSS............ KKKKKKKKKKKKK.....................777777......
//.......TTTTTT.................AAAAAA...AAAAAA................SSSSSSSSSSSSSS........... KKKKKKKKKKKKKK...................777777.......
//.......TTTTTT................AAAAAA.....AAAAAA.................SSSSSSSSSSSSS.......... KKKKKKKKKKKKKKK..................777777.......
//.......TTTTTT................AAAAAAAAAAAAAAAAA....................SSSSSSSSSS.......... KKKKKKK.KKKKKKK..................77777........
//.......TTTTTT................AAAAAAAAAAAAAAAAA.......................SSSSSSS.......... KKKKKK...KKKKKKK................777777........
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSS.......SSSSSS.......... KKKKK....KKKKKKKK...............777777........
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSSS......SSSSSS.......... KKKKK.....KKKKKKK...............777777........
//.......TTTTTT...............AAAAAA.......AAAAAAA..........SSSSSSSS..SSSSSSSS.......... KKKKK.....KKKKKKKK..............77777.........
//.......TTTTTT.............. AAAAA.........AAAAAA..........SSSSSSSSSSSSSSSSSS.......... KKKKK......KKKKKKK.............777777.........
//.......TTTTTT.............. AAAAA.........AAAAAA...........SSSSSSSSSSSSSSSS........... KKKKK.......KKKKKKK............777777.........
//.......TTTTTT............. AAAAA.........AAAAAAA...........SSSSSSSSSSSSSS............. KKKKK.......KKKKKKKK...........777777.........
//.......TTTTTT............. AAAA...........AAAAAA............SSSSSSSSSSS............... KKKKK........KKKKKKK...........777777.........
//.....................................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Loops
Name        :   Assignment 5 - Lecture 5 - Problem number 7
Program     :   Write a C Function that returns the maximum number of Zeros between two ones in the number binary.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (6) Write a C Function that returns the maximum number of Zeros between two ones in the number binary.
+
==========================================================================================
*/

/*-------------------------             Approach 1               ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

// Function to find the maximum number of zeros between two ones in a binary number
int maxZerosBetweenTwoOnes(int Number) {
    int MaxZeros = 0;   // Initialize the maximum zeros count to 0
    int ZeroCount = 0;  // Initialize the current zero count to 0

    // Loop through the binary representation of 'Number' until it becomes 0
    while (Number > 0) 
    {
        if (Number & 1) 
        {  // Check if the rightmost bit is 1
            if (ZeroCount > MaxZeros) {
                MaxZeros = ZeroCount;  // Update MaxZeros if ZeroCount is greater
            }
            ZeroCount = 0;  // Reset ZeroCount since a one is found
        } else {
            if (ZeroCount >= 0) {
                ZeroCount++;  // Increment ZeroCount for consecutive zeros
            }
        }
        Number >>= 1;  // Right shift 'Number' to check the next bit
    }
    return MaxZeros;  // Return the maximum zeros count
}

int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    if(scanf("%d", &decimalNum) != 1)
    {
        printf("invalid Number");
        return 0;
    }

    // Call the maxZerosBetweenTwoOnes function and store the result in 'result'
    int result = maxZerosBetweenTwoOnes(decimalNum);

    // Display the result
    printf("Maximum number of zeros between ones in binary: %d\n", result);
    return 0;
}


/*-------------------------             Approach 2               ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int maxZerosBetweenOnes(int n) {
    int maxZeros = 0;
    int currentZeros = 0;
    int onesFound = 0;

    for (int i = 0; i < 32; i++) {
        int bit = (n >> i) & 1; // Extract the i-th bit

        if (bit == 1) { // If a '1' is found
            if (onesFound) { // If at least one '1' has been found
                if (currentZeros > maxZeros) {
                    maxZeros = currentZeros; // Update maxZeros if needed
                }
            } else {
                onesFound = 1; // Set the flag to indicate that a '1' has been found
            }
            currentZeros = 0; // Reset the count of zeros
        } else {
            if (onesFound) {
                currentZeros++; // Increment zero count if '1' has been found
            }
        }
    }

    return maxZeros;
}

int main() {
    int decimalNum;
    printf("Enter an integer: ");
    if(scanf("%d", &decimalNum) != 1)
    {
        printf("invalid Number");
        return 0;
    }

    int result = maxZerosBetweenOnes(decimalNum);
    printf("Maximum number of zeros between ones in binary: %d\n", result);
    return 0;
}


//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
/**
 * practice with binary input numbers
 * */


#include <stdio.h>
#include <string.h>

// Function to find the maximum number of zeros between two ones in a binary number
int maxZerosBetweenOnes(int n) 
{
    int maxZeros = 0;        // Initialize the maximum number of zeros to 0
    int currentZeros = 0;   // Initialize the current count of zeros to 0

    // Loop through the binary representation of 'n' until it becomes 0
    while (n > 0) {
        if (n & 1) {  // If the rightmost bit is 1
            if (currentZeros > maxZeros) 
            {
                maxZeros = currentZeros;  // Update maxZeros if needed
            }
            currentZeros = 0;  // Reset the count of zeros
        } else {
            if (currentZeros >= 0) 
            {
                currentZeros++;  // Increment zero count if '1' has been found
            }
        }
        n >>= 1;  // Right-shift 'n' to check the next bit
    }

    return maxZeros;  // Return the maximum number of zeros
}

int main() {
    char binaryStr[100];
    printf("Enter a binary number: ");
    scanf("%s", binaryStr);

    int num = 0;
    int length = strlen(binaryStr);

    // Convert the binary string to an integer
    for (int i = 0; i < length; i++) 
    {
        num = num * 2 + (binaryStr[i] - '0');  // Convert binary to decimal
    }

    int result = maxZerosBetweenOnes(num);  // Call the function to find max zeros
    printf("Maximum number of zeros between ones: %d\n", result);

    return 0;
}
