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
Target      :   C Pointers
Name        :   Assignment 1 - Lecture 1 - Problem number 1
Program     :   Write a program that takes two integers from the user and print the results of this equation:
                Result = ((num1 + num2) * 3) – 10
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (1) Write a program that takes two integers from the user and print the results of this equation:
                Result = ((num1 + num2) * 3) – 10
+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    // Declare variables to store user input
    int num1, num2;
    
    // Prompt the user to enter the first number
    printf("Enter the first Number: ");
    
    // Read the first number from the user and store it in 'num1'
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second Number: ");
    
    // Read the second number from the user and store it in 'num2'
    scanf("%d", &num2);

    // Perform arithmetic operations to calculate the result
    int result = ((num1 + num2) * 3) - 10;

    // Display the calculated result
    printf("Result = %d\n", result);

    // Indicate successful completion of the program
    return 0;
}

/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
/**
 * in this code you use can use scanf to two inputs at one time 
 * */
#include <stdio.h>

int main() {
    // Declare variables to store user input
    int num1, num2;
    
    // Prompt the user to enter two numbers
    printf("Enter two Numbers: ");
    
    // Read both numbers from the user and store them in 'num1' and 'num2'
    scanf("%d %d", &num1 , &num2);

    // Perform arithmetic operations to calculate the result
    int result = ((num1 + num2) * 3) - 10;

    // Display the calculated result
    printf("Result = %d\n", result);

    // Indicate successful completion of the program
    return 0;
}
