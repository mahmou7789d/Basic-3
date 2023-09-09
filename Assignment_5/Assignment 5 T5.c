//.....................................................................................................................................
//.TTTTTTTTTTTTTTTTTT...............AAAAAAA....................SSSSSSSSSSS.............. KKKKK.......KKKKKKKK...........555555555555...
//.TTTTTTTTTTTTTTTTTT...............AAAAAAAA..................SSSSSSSSSSSSS............. KKKKK......KKKKKKKK............555555555555...
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA.................SSSSSSSSSSSSSSS............ KKKKK.....KKKKKKKK.............555555555555...
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA................SSSSSSSSSSSSSSSSS........... KKKKK....KKKKKKKK.............5555555555555...
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSSSS.SSSSSSSS........... KKKKK...KKKKKKKK..............555555..........
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSS.....SSSSSS........... KKKKK..KKKKKKKK...............555555..........
//.......TTTTTT...................AAAAAAAAAAAA..............SSSSSSS..................... KKKKK.KKKKKKKK................55555...........
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSS................... KKKKKKKKKKKKK.................55555555555.....
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSSSSS................ KKKKKKKKKKKK..................555555555555....
//.......TTTTTT..................AAAAA...AAAAAA..............SSSSSSSSSSSSS.............. KKKKKKKKKKKKK................ 5555555555555...
//.......TTTTTT.................AAAAAA...AAAAAA...............SSSSSSSSSSSSSS............ KKKKKKKKKKKKK................ 55555555555555..
//.......TTTTTT.................AAAAAA...AAAAAA................SSSSSSSSSSSSSS........... KKKKKKKKKKKKKK............... 55555555555555..
//.......TTTTTT................AAAAAA.....AAAAAA.................SSSSSSSSSSSSS.......... KKKKKKKKKKKKKKK.............. 55555...555555..
//.......TTTTTT................AAAAAAAAAAAAAAAAA....................SSSSSSSSSS.......... KKKKKKK.KKKKKKK........................55555..
//.......TTTTTT................AAAAAAAAAAAAAAAAA.......................SSSSSSS.......... KKKKKK...KKKKKKK.......................55555..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSS.......SSSSSS.......... KKKKK....KKKKKKKK............ 5555....555555..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSSS......SSSSSS.......... KKKKK.....KKKKKKK............ 55555...555555..
//.......TTTTTT...............AAAAAA.......AAAAAAA..........SSSSSSSS..SSSSSSSS.......... KKKKK.....KKKKKKKK........... 55555555555555..
//.......TTTTTT.............. AAAAA.........AAAAAA..........SSSSSSSSSSSSSSSSSS.......... KKKKK......KKKKKKK........... 5555555555555...
//.......TTTTTT.............. AAAAA.........AAAAAA...........SSSSSSSSSSSSSSSS........... KKKKK.......KKKKKKK...........5555555555555...
//.......TTTTTT............. AAAAA.........AAAAAAA...........SSSSSSSSSSSSSS............ KKKKK.......KKKKKKKK...........55555555555....
//.......TTTTTT............. AAAA...........AAAAAA............SSSSSSSSSSS.............. KKKKK........KKKKKKK............555555555.....
//.....................................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Loops
Name        :   Assignment 5 - Lecture 5 - Problem number 5
Program     :   Write a C function that returns 1 if the input number is a
				power of 2 and return 0 if the input number is power of 3,
				otherwise it shall return -1.

Author      :   Mahmoud Hamed
==========================================================================================
Description :   (5) Write a C function that returns 1 if the input number is a
					power of 2 and return 0 if the input number is power of 3,
					otherwise it shall return -1.

+
==========================================================================================
*/

/*-------------------------             Approach 1               ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

int isPowerOfTwoOrThree(int num) {
    if (num <= 0) {
        return -1;
    }

    int isPowerOfTwo = 1;
    int isPowerOfThree = 1;

    while (num > 1) {
        if (num % 2 != 0) {
            isPowerOfTwo = 0;
        }
        if (num % 3 != 0) {
            isPowerOfThree = 0;
        }
        num /= 2;  // Divide by 2 to check for power of 2
    }

    if (isPowerOfTwo) {
        return 1;
    } else if (isPowerOfThree) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int result = isPowerOfTwoOrThree(num);

    if (result == 1) {
        printf("%d is a power of 2.\n", num);
    } else if (result == 0) {
        printf("%d is a power of 3.\n", num);
    } else {
        printf("%d is neither a power of 2 nor a power of 3.\n", num);
    }

    return 0;
}



#include <stdio.h>

int isPowerOf2Or3(int num) 
{
    if (num <= 0) {
        return -1;  // Invalid input, not a power of 2 or 3
    }

    int isPowerOf2 = (num & (num - 1)) == 0;  // Check if it's a power of 2

    // Check if it's a power of 3
    int temp = num;
    while (temp % 3 == 0) 
    {
        temp /= 3;
    }
    int isPowerOf3 = temp == 1;

    if (isPowerOf2) 
    {
        return 1;  // Power of 2
    } else if (isPowerOf3) {
        return 0;  // Power of 3
    } else {
        return -1; // Neither power of 2 nor power of 3
    }
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = isPowerOf2Or3(num);

    if (result == 1) 
    {
        printf("The number is a power of 2.\n");
    } else if (result == 0) {
        printf("The number is a power of 3.\n");
    } else {
        printf("The number is neither a power of 2 nor a power of 3.\n");
    }

    return 0;
}



int isPowerOf2(int num) {
    if (num <= 0) {
        return 0; // Negative numbers and 0 are not powers of 2
    }
    return (num & (num - 1)) == 0;
}

// The function is called with num = 8.

// Since num is greater than 0 (it's equal to 8), we move to the next step.

// Calculate (num - 1): 8 - 1 = 7.

// Calculate the bitwise AND between num and (num - 1): 8 & 7 = 0b1000 & 0b0111 = 0b0000, which is 0 in decimal.

// Compare (num & (num - 1)) with 0: 0 == 0.

// The result of the comparison is true, so the function returns 1, indicating that 8 is a power of 2.