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
Target      :   C Algorithm
Name        :   Assignment 10 - Lecture 10 - Problem number 1
Program     :   Write a function which, given a string, return TRUE if all
                characters are distinct and FALSE if any character is repeated.
                (assume TRUE as 1, FALSE as 0)
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (1) Write a function which, given a string, return TRUE if all
                    characters are distinct and FALSE if any character is repeated.
                    (assume TRUE as 1, FALSE as 0)
+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Function to check if all characters in the string are distinct
int areAllCharactersDistinct(const char *str) 
{
    if (str[0] == '\0') 
    {
        return -1; // Return -1 if the string is empty
    }

    // Assuming ASCII characters (0-127)
    int charSet[128] = {0}; // Initialize an array to keep track of character occurrences

    for (int i = 0; str[i] != '\0'; i++) 
    {
        int charValue = (int)str[i]; // Get the ASCII value of the current character

        if (charSet[charValue]) 
        {
            return 0;  // Return 0 if the character is repeated
        }

        charSet[charValue] = 1; // Mark the character as encountered
    }

    return 1;  // Return 1 if all characters are distinct
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", input); // Read a line of text until a newline character,able to handle strings which contain spaces

    int result = areAllCharactersDistinct(input);

    if (result == -1) 
    {
        printf("Input string is empty.\n"); // Print a message for an empty string
    } else if (result == 1) 
    {
        printf("All characters are distinct.\n"); // Print a message for distinct characters
    } else {
        printf("String isn't distinct.\n"); // Print a message for repeated characters
    }

    return 0;
}

/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
 * 
 * Explaination of Code
 ****************************************************************************************************************************************/
 
// This function, areAllCharactersDistinct, takes a const char *str as input, which is a pointer to a string. 
// It checks if all characters in the string are distinct and returns an integer value:

// If the input string is empty (i.e., its first character is the null character '\0'), the function returns -1.
// It initializes an integer array charSet of size 128 (to cover ASCII characters from 0 to 127) to keep track of character occurrences.
// It then iterates through each character in the string using a for loop. For each character, it:
// Converts the character to its ASCII value.
// Checks if the corresponding value in the charSet array is already set (indicating the character has been encountered before). 
// If so, it returns 0 to indicate that characters are repeated.
// Otherwise, it marks the character as encountered by setting the corresponding value in charSet to 1.
// After checking all characters, if no repeated characters are found, the function returns 1 to indicate that all characters are distinct.


/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int areAllCharactersDistinct(const char *str) 
{
    int charSet = 0;  // Initialize an integer to store character occurrence information

    for (int i = 0; str[i] != '\0'; i++) 
    {  // Iterate through each character in the input string
        int charValue = (int)str[i];  // Get the ASCII value of the current character

        if ((charSet & (1 << charValue)) > 0) 
        {  // Check if the bit for this character is already set in charSet
            return 0;  // Return 0 if the character is repeated
        }

        charSet |= (1 << charValue);  // Set the bit for the current character in charSet
    }

    return 1;  // Return 1 if all characters are distinct
}


int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", input); // Read a line of text until a newline character,able to handle strings which contain spaces

    int result = areAllCharactersDistinct(input);

    if (result == -1) 
    {
        printf("Input string is empty.\n"); // Print a message for an empty string
    } else if (result == 1) 
    {
        printf("All characters are distinct.\n"); // Print a message for distinct characters
    } else {
        printf("String isn't distinct.\n"); // Print a message for repeated characters
    }

    return 0;
}
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
 * 
 * Explaination of Code
 ****************************************************************************************************************************************/

// This function, areAllCharactersDistinct, takes a pointer to a character array str (a C-style string) as an argument and returns an integer. 
// The function checks if all characters in the input string are distinct using a bit manipulation technique.

// It initializes an integer variable charSet to store information about character occurrences. 
// This variable will use bits to represent the presence of characters.
// It then enters a for loop that iterates through each character in the input string (str) using the index i.
// Inside the loop:
// It obtains the ASCII value of the current character by casting it to an integer: (int)str[i].
// It checks whether the corresponding bit for the current character is already set in the charSet integer. 
// It does this by performing a bitwise AND operation between charSet and (1 << charValue). If the result is greater than 0, 
// it means the bit for this character is already set, indicating that the character has been encountered before. 
// In this case, the function returns 0, indicating that some characters are repeated.
// If the character is encountered for the first time, 
// it sets the corresponding bit for the character in the charSet integer by performing a bitwise OR operation between charSet and (1 << charValue).
// After processing all characters, if no repeated characters are found, the function returns 1, 
// indicating that all characters in the input string are distinct.

/*****************************************************************************************************************************************
 * 
 * Tracing  of Code
 ****************************************************************************************************************************************/
// This function checks if all characters in the input string are distinct.

// charSet is initialized to 0. It will be used to keep track of character occurrences using bitwise operations.

// The loop iterates through each character in the input string (str), and for our example input "hello":

// For i = 0, str[i] is 'h', so charValue becomes 104.

// The condition (charSet & (1 << charValue)) > 0 checks if the bit corresponding to the ASCII value of 'h' is already set in charSet. 
// Since it's not set (because charSet is 0), the condition is false.

// charSet is updated using the bitwise OR operation to set the bit corresponding to 'h' (i.e., charSet becomes 00000000000000000000000000010000).

// For i = 1, str[i] is 'e', so charValue becomes 101.

// The condition (charSet & (1 << charValue)) is evaluated. Since the bit corresponding to the ASCII value of 'e' is not set in charSet, the condition is false.

// charSet is updated using the bitwise OR operation to set the bit corresponding to 'e' (i.e., charSet becomes 00000000000000000000000001010000).

// The loop continues similarly for 'l' and 'l', and the bits corresponding to these characters are set in charSet.

// After processing all characters, the function returns 0 (false) because both 'l' characters are repeated in the input string.



/*-------------------------          Approach 3                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Function to check if all characters in the string are distinct
int areAllCharactersDistinct(const char *str) {
    // Loop through each character in the string
    for (const char *p1 = str; *p1 != '\0'; p1++) {
        // Compare the current character with the characters that come after it
        for (const char *p2 = p1 + 1; *p2 != '\0'; p2++) {
            // Check if the current character (*p1) is equal to any subsequent character (*p2)
            if (*p1 == *p2) {
                return 0; // Character is repeated, so return 0 indicating non-distinct characters
            }
        }
    }

    // If no repeated characters are found during the loop, return 1 indicating all characters are distinct
    return 1;
}



int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", input); // Read a line of text until a newline character,able to handle strings which contain spaces

    int result = areAllCharactersDistinct(input);

    if (result == -1) 
    {
        printf("Input string is empty.\n"); // Print a message for an empty string
    } else if (result == 1) 
    {
        printf("All characters are distinct.\n"); // Print a message for distinct characters
    } else {
        printf("String isn't distinct.\n"); // Print a message for repeated characters
    }

    return 0;
}

/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
/*****************************************************************************************************************************************
 * 
 * Explaination of Code
 ****************************************************************************************************************************************/
// In this function:

// We use two nested loops. The outer loop, controlled by the pointer p1, iterates through each character in the string.
// The inner loop, controlled by the pointer p2, iterates through all characters that come after the character pointed to by p1. 
// This is done to compare the current character with all characters that follow it.
// The condition *p1 == *p2 checks if the character pointed to by p1 is equal to the character pointed to by p2. 
// If this condition is satisfied, it means the character is repeated.
// If a repeated character is found, the function immediately returns 0 to indicate that not all characters are distinct.
// If no repeated characters are found during the execution of both loops, 
// the function returns 1 to indicate that all characters in the string are distinct.
// This approach has a time complexity of O(n^2)


/*-------------------------          Approach 4                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Function prototype to check if a character is repeated in the array
int check_if_char_is_repeated(char arr[]);

int main() {
    // Declare an array of characters with a size of 10
    char array[10];

    // Prompt the user to enter characters
    printf("Enter characters:\n");

    // Read input from the user and store it in the 'array' variable
    fgets(array, sizeof(array), stdin);

    // Call the function to check if any characters are repeated in the array
    if (check_if_char_is_repeated(array)) {
        printf("There is a repeated element.\n");
    } else {
        printf("There are no repeated elements.\n");
    }

    // The main function's return statement (implicitly returns 0)
}

// Function to check if any character in the given array is repeated
int check_if_char_is_repeated(char arr[]) {
    int c = 0;  // Initialize a counter variable to 0

    // Loop through the characters in the array until a null character ('\0') is encountered
    for (int i = 0; arr[i] != '\0'; i++) {
        // If the current character is a space (' '), skip it and continue to the next character
        if (arr[i] == ' ') {
            continue;
        }

        // Nested loop to compare the current character with the remaining characters in the array
        for (int j = i + 1; arr[j] != '\0'; j++) {
            // Check if the XOR operation between the characters is zero, indicating a repeated character
            if ((arr[i] ^ arr[j]) == 0) {
                c = 1;  // Set the counter variable to 1 if a repeated character is found
                break;  // Exit the inner loop
            }
        }

        // If a repeated character was found, exit the outer loop
        if (c == 1) {
            break;
        }
    }

    // Return the value of the counter (1 if repeated character found, 0 otherwise)
    return c;
}
