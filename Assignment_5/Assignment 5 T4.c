//.....................................................................................................................................
//.TTTTTTTTTTTTTTTTTT...............AAAAAAA....................SSSSSSSSSSS.............. KKKKK.......KKKKKKKK................444444....
//.TTTTTTTTTTTTTTTTTT...............AAAAAAAA..................SSSSSSSSSSSSS............. KKKKK......KKKKKKKK.................444444....
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA.................SSSSSSSSSSSSSSS............ KKKKK.....KKKKKKKK.................4444444....
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA................SSSSSSSSSSSSSSSSS........... KKKKK....KKKKKKKK.................44444444....
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSSSS.SSSSSSSS........... KKKKK...KKKKKKKK..................44444444....
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSS.....SSSSSS........... KKKKK..KKKKKKKK..................444444444....
//.......TTTTTT...................AAAAAAAAAAAA..............SSSSSSS..................... KKKKK.KKKKKKKK..................4444444444....
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSS................... KKKKKKKKKKKKK...................4444444444....
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSSSSS................ KKKKKKKKKKKK...................44444444444....
//.......TTTTTT..................AAAAA...AAAAAA..............SSSSSSSSSSSSS.............. KKKKKKKKKKKKK.................444444444444....
//.......TTTTTT.................AAAAAA...AAAAAA...............SSSSSSSSSSSSSS............ KKKKKKKKKKKKK.................444444444444....
//.......TTTTTT.................AAAAAA...AAAAAA................SSSSSSSSSSSSSS........... KKKKKKKKKKKKKK............... 44444.444444....
//.......TTTTTT................AAAAAA.....AAAAAA.................SSSSSSSSSSSSS.......... KKKKKKKKKKKKKKK.............. 4444..444444....
//.......TTTTTT................AAAAAAAAAAAAAAAAA....................SSSSSSSSSS.......... KKKKKKK.KKKKKKK............. 4444..444444....
//.......TTTTTT................AAAAAAAAAAAAAAAAA.......................SSSSSSS.......... KKKKKK...KKKKKKK............ 44444444444444..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSS.......SSSSSS.......... KKKKK....KKKKKKKK........... 44444444444444..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSSS......SSSSSS.......... KKKKK.....KKKKKKK........... 44444444444444..
//.......TTTTTT...............AAAAAA.......AAAAAAA..........SSSSSSSS..SSSSSSSS.......... KKKKK.....KKKKKKKK.......... 44444444444444..
//.......TTTTTT.............. AAAAA.........AAAAAA..........SSSSSSSSSSSSSSSSSS.......... KKKKK......KKKKKKK..................444444....
//.......TTTTTT.............. AAAAA.........AAAAAA...........SSSSSSSSSSSSSSSS........... KKKKK.......KKKKKKK.................444444....
//.......TTTTTT............. AAAAA.........AAAAAAA...........SSSSSSSSSSSSSS............ KKKKK.......KKKKKKKK................444444....
//.......TTTTTT............. AAAA...........AAAAAA............SSSSSSSSSSS.............. KKKKK........KKKKKKK................444444....
//.....................................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Loops
Name        :   Assignment 5 - Lecture 5 - Problem number 4
Program     :   Make the function countHoles. The function must return an integer denoting the total number of holes in num.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (6) You are designing a poster which prints out numbers with a 
					unique style applied to each of them. The styling is based on 
					the number of closed paths or holes present in a givernumber. 
					The number of holes that each of the digits from 0 to 9 have 
					are equal to the number of closed paths in the digit. Their values are:
						• 1, 2, 3, 5 and 7 = 0 holes.
						• 0, 4, 6, and 9 = 1 hole.
						• 8 = 2 holes.
					Given a number, you must determine the sum of the number of 
					holes for all of its digits. For example, the number 819 has 3 
					holes.
					Make the function countHoles. The function must return an 
					integer denoting the total number of holes in num.

+
==========================================================================================
*/

/*-------------------------             Approach 1               ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

// Function to count the number of holes in a given number
int countHoles(int num) 
{
    int holes = 0;
    
    // Iterate through each digit of the number until there are no digits left
    while (num > 0) 
    {
        // Extract the rightmost digit of the number
        int digit = num % 10;
        
        // Check the digit for holes using a switch statement
        switch (digit) 
        {
            case 0:
            case 4:
            case 6:
            case 9:
                // Each of these digits contributes 1 hole
                holes += 1;
                break;
            case 8:
                // The digit 8 contributes 2 holes
                holes += 2;
                break;
            default:
                // For digits 1, 2, 3, 5, and 7, no holes are present.
                // They are intentionally left out of the switch statement.
                break;
        }
        
        // Move to the next digit by removing the rightmost digit
        num /= 10;
    }
    
    return holes;
}

int main() 
{
    int num;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the countHoles function to calculate the total holes in the number
    int holeCount = countHoles(num);
    
    // Display the result
    printf("Total number of holes in %d: %d\n", num, holeCount);
    
    return 0;
}

/*-------------------------             Approach 2               ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Function to count the number of holes in a given number
int countHoles(int num) 
{
    int holes = 0;
    
    // Loop through each digit of the number until there are no digits left
    while (num > 0) 
    {
        // Extract the rightmost digit of the number
        int digit = num % 10;
        
        // Check if the digit has holes and update the count accordingly
        if (digit == 0 || digit == 4 || digit == 6 || digit == 9) 
        {
            holes += 1;  // Each of these digits contributes 1 hole
        } 
        else if (digit == 8) 
        {
            holes += 2;  // The digit 8 contributes 2 holes
        }
        
        // Move to the next digit by removing the rightmost digit
        num /= 10;
    }
    
    return holes;
}

int main() 
{
    int num;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the countHoles function to calculate the total holes in the number
    int holeCount = countHoles(num);
    
    // Display the result
    printf("Total number of holes in %d: %d\n", num, holeCount);
    
    return 0;
}

/*-------------------------             Approach 3               ------------------------*/
/*---------------------------------------------------------------------------------------*/
/*****************************************************************************************
 * 
 * in this approach we can handle negative numbers
 * */
#include <stdio.h>

int countHoles(int num) 
{
    // Handle negative numbers by taking the absolute value
    if (num < 0) 
    {
        num = -num;
    }
    
    int holes = 0;

    while (num > 0) 
    {
        int digit = num % 10;
        
        if (digit == 0 || digit == 4 || digit == 6 || digit == 9) 
        {
            holes += 1;
        } 
        else if (digit == 8) {
            holes += 2;
        }
        
        num /= 10;  // Move to the next digit
    }
    
    return holes;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int holeCount = countHoles(num);
    printf("Total number of holes in %d: %d\n", num, holeCount);
    
    return 0;
}

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

int countHoles(int num) 
{
    // Array to store the number of holes for each digit (0 to 9)
    int holesPerDigit[] = {1, 0, 0, 0, 1, 0, 1, 0, 2, 1};
    
    int holes = 0;
    
    while (num > 0) 
    {
        int digit = num % 10;
        holes += holesPerDigit[digit];
        num /= 10;  // Move to the next digit
    }
    
    return holes;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int holeCount = countHoles(num);
    printf("Total number of holes in %d: %d\n", num, holeCount);
    
    return 0;
}