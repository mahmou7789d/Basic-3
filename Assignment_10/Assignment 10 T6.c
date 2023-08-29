//.............................................................................................
//.TTTTTTTTTTTTTTTTTT................................sskkk.......................666666666.....
//.TTTTTTTTTTTTTTTTTT................................sskkk......................66666666666....
//.TTTTTTTTTTTTTTTTTT................................sskkk..................... 666666666666...
//.TTTTTTTTTTTTTTTTTT................................sskkk.................... 666666666666....
//.......TTTTTT......................................sskkk.................... 666666666666....
//.......TTTTTT......................................sskkk.................... 6666..666666....
//.......TTTTTT......aaaaaaaaaa......aasssssssss.....sskkk...kkkkkkk......... 666..............
//.......TTTTTT.....aaaaaaaaaaaaa...aaassssssssss....sskkk..kkkkkkk.......... 666..............
//.......TTTTTT....aaaaaaaaaaaaaa...aaasssssssssss...sskkk.kkkkkkk........... 6666666666.......
//.......TTTTTT....aaaaaaaaaaaaaa..aaaasss.sssssss...sskkkkkkkkkkk........... 66666666666......
//.......TTTTTT....aaaaa...aaaaaa..aaaass...ssssss...sskkkkkkkkkk............ 666666666666.....
//.......TTTTTT.............aaaaa..aaaassss..........sskkkkkkkkk............. 666666666666.....
//.......TTTTTT.........aaaaaaaaa..aaaassssssss......sskkkkkkkkk............. 6666666666666....
//.......TTTTTT.....aaaaaaaaaaaaa...aaassssssssss....sskkkkkkkkk............. 6666...666666....
//.......TTTTTT....aaaaaaaaaaaaaa....aasssssssssss...sskkkkkkkkkk............ 666....666666....
//.......TTTTTT....aaaaaaaaaaaaaa......ssssssssssss..sskkkkkkkkkk............ 666....666666....
//.......TTTTTT...aaaaaaa...aaaaa..........ssssssss..sskkkk.kkkkkk............ 6666...666666...
//.......TTTTTT...aaaaaaa...aaaaaa..aaaass....ssssss.sskkk..kkkkkk............ 6666666666666...
//.......TTTTTT...aaaaaaaaaaaaaaaa..aaaasss.ssssssss.sskkk...kkkkkk........... 666666666666....
//.......TTTTTT...aaaaaaaaaaaaaaaa.aaaasssssssssss...sskkk...kkkkkk............ 666666666666...
//.......TTTTTT....aaaaaaaaaaaaaaa..aaasssssssssss...sskkk....kkkkkk............66666666666....
//.......TTTTTT.....aaaaaaaaaaaaaa...aasssssssss.....sskkk....kkkkkkk............666666666.....
//.............................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Algorithm
Name        :   Assignment 10 - Lecture 10 - Problem number 6
Program     :   Write a function to remove all characters in a string expect alphabets.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (6) Write a function to remove all characters in a string expect alphabets.
+
==========================================================================================
*/

/*-------------------------             Approach 1               ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

// Function to check if a character is an alphabet
int isAlphabet(char c) 
{
    // Check if the character is within the range of lowercase or uppercase letters
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
// Function to remove non-alphabetic characters from a string
void removeNonAlphabetic(char *str) 
{
    if (str == NULL) 
    {
        printf("Error: Input string is NULL.\n");
        return;
    }

    int readIndex = 0;   // Index to read characters from the input string
    int writeIndex = 0;  // Index to write valid characters back to the input string

    // Loop through the input string until the end ('\0') is reached
    while (str[readIndex] != '\0') 
    {
        // Check if the current character is an alphabet
        if (isAlphabet(str[readIndex])) 
        {
            // If it's an alphabet, copy it to the write position
            str[writeIndex] = str[readIndex];
            writeIndex++;  // Move the write position forward
        }
        readIndex++;  // Move the read position forward
    }

    // Add a null terminator to the end of the resulting string to mark its end
    str[writeIndex] = '\0';  
}

int main() 
{
    char input[100];  // Adjust the size as needed

    printf("Enter a string: ");
    scanf("%[^\n]s", input);  // Read the input line including spaces

    // Remove newline character from input if present
    for (int i = 0; input[i] != '\0'; i++) 
    {
        if (input[i] == '\n') 
        {
            input[i] = '\0';  // Replace newline with null terminator
            break;
        }
    }

    // Call the function to remove non-alphabetic characters
    removeNonAlphabetic(input);

    printf("Result: %s\n", input);  // Print the resulting string

    return 0;
}


/***********************************************
 * another solution using pointers 
 * */

#include <stdio.h>
// Function to remove non-alphabetic characters from a string
void removeNonAlphabetic(char *str) 
{
    if (str == NULL) 
    {
        printf("Error: Input string is NULL.\n");
        return;
    }

    char *readPtr = str;
    char *writePtr = str;

    while (*readPtr != '\0') 
    {
        if ((*readPtr >= 'a' && *readPtr <= 'z') || (*readPtr >= 'A' && *readPtr <= 'Z')) 
        {
            *writePtr = *readPtr;
            writePtr++;
        }
        readPtr++;
    }

    *writePtr = '\0';  // Null-terminate the resulting string
}
int main() 
{
    char input[100];  // Adjust the size as needed

    printf("Enter a string: ");
    scanf("%[^\n]s",input);

    // Remove newline character from input if present
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '\n')
        {
            input[i] = '\0';
            break;
        }
    }

    removeNonAlphabetic(input);

    printf("Result: %s\n", input);

    return 0;
}
