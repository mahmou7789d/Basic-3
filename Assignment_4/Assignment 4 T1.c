//....................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.........................11111..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk........................111111..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.......................1111111..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................11111111..
//.......TTTTTT.................................................................kkkkkk....................1111111111..
//.......TTTTTT.................................................................kkkkkk...................11111111111..
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk.........11111111111..
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk..........11111111111..
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk...........1111..11111..
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk..................11111..
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk...................11111..
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk....................11111..
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk....................11111..
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk....................11111..
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk...................11111..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk..................11111..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk..................11111..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk.................11111..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk.................11111..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk................11111..
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk................11111..
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk...............11111..
//....................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Loops
Name        :   Assignment 4- Lecture 4 - Problem number 1
Program     :   Write a  C program that reads a positive integer and checks if it is a prime number.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (1) Write a  C program that reads a positive integer and checks if it is a prime number.

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int num, is_prime = 1;

    // Read the positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1)
        is_prime = 0; // 0 and 1 are not prime numbers
    else {
        for (int i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) 
            {
                is_prime = 0; // Found a divisor, not a prime number
                break;
            }
        }
    }

    // Display the result
    if (is_prime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}


/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    printf("Enter positive number\n"); // Output: Enter positive number

    int a, n = 0;
    scanf("%d", &a); // Input: 13

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            n++;
    }
    // Loop iterations:
    // i = 1, a % 1 == 0, n = 1
    // i = 2, a % 2 != 0, n = 1
    // i = 3, a % 3 != 0, n = 1
    // i = 4, a % 4 != 0, n = 1
    // i = 5, a % 5 != 0, n = 1
    // i = 6, a % 6 != 0, n = 1
    // i = 7, a % 7 != 0, n = 1
    // i = 8, a % 8 != 0, n = 1
    // i = 9, a % 9 != 0, n = 1
    // i = 10, a % 10 != 0, n = 1
    // i = 11, a % 11 != 0, n = 1
    // i = 12, a % 12 != 0, n = 1
    // i = 13, a % 13 == 0, n = 2

    if (n > 2)
        printf("%d is not prime number", a);
    else
        printf("%d is prime number", a); // Output: 13 is prime number

    return 0;
}

