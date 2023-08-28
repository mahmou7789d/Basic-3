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
Target      :   C Function
Name        :   Assignment 5 - Lecture 5 - Problem number 3
Program     :   write a C Function that display Prime Numbers between Intervals (two numbers).
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (3) write a C Function that display Prime Numbers between Intervals (two numbers).

+
==========================================================================================
*/

/*-------------------------              Approach 1              ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>
#include <math.h>

// Function to find and display prime numbers between two intervals
void primeBetweenInterval(int, int);

int main() {
    int num1, num2;

    printf("Enter the two numbers: ");

    // Check if two integer inputs are provided
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid Input! Try again.\n");
        return 1;
    } else {
        primeBetweenInterval(num1, num2);
    }

    return 0;
}

// Function to find prime numbers between two given numbers
void primeBetweenInterval(int a, int b) 
{
    int counter = 0 ;

    printf("Prime Numbers between %d and %d are: ", a, b);

    // Check if the first number is greater than the second, swap if needed
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    // Outer loop to iterate through the numbers within the interval
    for (int i = a; i <= b; i++)
    {
        // Inner loop to find factors of the current number
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                counter++; // Count how many factors this number has
            }
        }
        // Check if the number is prime (having exactly 2 factors)
        if (counter == 2)
        {
            printf("%d ", i);
        }

        counter = 0; // Reset the counter for the next iteration
    }
    printf("\n");
}






