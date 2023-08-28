//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................222222222.....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................222222222222....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................22222222222222...
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................222222222222222..
//.......TTTTTT.................................................................kkkkkk...................222222222222222..
//.......TTTTTT.................................................................kkkkkk.................. 222222...222222..
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk........ 22222....222222..
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk...................222222..
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk....................222222..
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk....................222222...
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk....................2222222...
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk....................2222222....
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk...................2222222.....
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk..................2222222......
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk................2222222.......
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk..............2222222........
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk.............2222222.........
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk...........2222222..........
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk...........222222222222222..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk......... 222222222222222..
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk......... 222222222222222..
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk........ 222222222222222..
//........................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Pointers
Name        :   Assignment 12 - Lecture 12 - Problem number 2
Program     :   C Function to find length of a given string using pointer.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (2) Write a C function that find length of a given string using pointer.

+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

int stringLength(const char *str) ;
int main() {
    char userInput[100]; // Declare an array to store user input

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", userInput);

    // Calculate the length of the input string using the stringLength function
    int length = stringLength(userInput);

    // Display the length of the input string
    printf("Length of the string: %d\n", length);

    return 0; // Indicate successful completion of the program
}



// Approach 1: using while loop and return variable hold length of the string
int stringLength(const char *str) 
{
    int length = 0; // Initialize a variable to store the length of the string

    // Loop through each character in the string until the null terminator is encountered
    while (*str != '\0') 
    {
        length++;   // Increment the length for each character
        str++;      // Move the pointer to the next character
    }

    return length; // Return the calculated length of the string
}




// Approach 2: using while loop and return the difference in addresses to get the length
int stringLength(const char *str) 
{
    char *start = str; // Store the starting address of the string
    while (*str != '\0') 
    {
        str++; // Move the pointer to the next character
    }
    return str - start; // Calculate the difference in addresses to get the length
}

// Approach 3: using for loop
int stringLength(const char *str) {
    char *ptr = str; // Create a pointer to iterate through the string

    // Iterate through the string until the null terminator is encountered
    for (; *ptr != '\0'; ptr++) 
    {
        // No need for loop body; the increment is done in the for statement
    }

    return ptr - str; // Calculate the difference to get the length
}

// Approach 4: using do...while loop
int stringLength(const char *str) {
    const char *ptr = str; // Create a pointer to iterate through the string

    // Iterate through the string until the null terminator is encountered
    do 
    {
        ptr++; // Move the pointer to the next character
    } while (*ptr != '\0');

    return ptr - str; // Calculate the difference to get the length
}

/********************************* Tracing  Approach 1: using while loop  ***************************
 
Let's consider the following scenario:
```
Enter a string: hello
```

1. The `main` function begins executing.
2. `userInput` is declared as a character array with a size of 100.
3. The user is prompted to enter a string using the `printf` statement.
4. The user enters "hello", and the `scanf` function reads it into the `userInput` array.

Now the `main` function proceeds to calculate and print the length of the input string:

5. The `stringLength` function is called with `userInput` as an argument.
6. Inside `stringLength`:
   - `length` is initialized to 0.
   - The `while` loop starts iterating through each character of the string:
     - The character `'h'` is not equal to `'\0'`, so `length` is incremented to 1, and `str` is advanced to the next character.
     - The character `'e'` is not equal to `'\0'`, so `length` is incremented to 2, and `str` is advanced again.
     - This continues for `'l'`, `'l'`, and `'o'`.
     - When the loop encounters the null terminator `'\0'`, it stops.

7. The length calculated inside the `stringLength` function (5) is returned to the `main` function and stored in the `length` variable.
8. The length of the string, which is 5, is printed using `printf`.

The output would be:
```
Length of the string: 5
```
 ***********************************************/

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

// Recursive function to calculate the length of a string using pointers
int stringLengthRecursive(const char *str) {
    if (*str == '\0') {
        return 0; // Base case: empty string has length 0
    } else {
        return 1 + stringLengthRecursive(str + 1); // Recurse with the next character
    }
}

int main() {
    char userInput[100]; // Declare an array to store user input

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", userInput);

    // Calculate the length of the input string using the recursive function
    int length = stringLengthRecursive(userInput);

    // Display the length of the input string
    printf("Length of the string: %d\n", length);

    return 0; // Indicate successful completion of the program
}

/**********************************************************  The Explaination :  *****************************************************************************************************************

1. The code begins by including the necessary standard input-output library (`stdio.h`) for input and output functions.

2. The recursive function `stringLengthRecursive` is declared. This function aims to calculate the length of a string using recursion and a pointer.

3. In the `main` function, an array named `userInput` is declared to store the user's input string. The size of the array is 100, which means it can store strings up to 99 characters long (plus a null terminator).

4. The program prompts the user to enter a string using the `printf` function. The string format `"%s"` inside the `scanf` function specifies that a string input should be read and stored in the `userInput` array.

5. The program then calls the `stringLengthRecursive` function to calculate the length of the user's input string. The calculated length is stored in the `length` variable.

6. The program prints out the length of the input string using the `printf` function.

7. Finally, the `main` function returns `0` to indicate successful completion of the program to the operating system.

Now, let's break down the `stringLengthRecursive` function:

1. The function takes a single parameter: a pointer to a character (`const char *str`). This pointer points to the current character being analyzed in the string.

2. The function starts with a base case check using an `if` statement: `if (*str == '\0')`. This checks whether the current character pointed to by `str` is the null terminator (`'\0'`), which marks the end of a string. If the string is empty (reached the end), the function returns `0`, as an empty string has a length of 0.

3. If the base case is not met (meaning the current character is not the null terminator), the `else` block is executed.

4. Within the `else` block, the function uses recursion. It calculates the length of the string by adding `1` to the length of the remaining string. This is done by calling `stringLengthRecursive(str + 1)`. Here, `str + 1` is used to move the pointer to the next character in the string.

5. The recursive call continues until the base case is met (an empty string), at which point the recursion begins to unwind.

By repeatedly adding `1` for each character in the string and moving the pointer to the next character, the function effectively calculates the length of the string recursively.


Let's walk through the code with input string "Hello":

1. The program starts by prompting the user to enter a string: "Enter a string: ".
   
2. The user enters the string "Hello".

3. The program calls the `stringLengthRecursive` function with the input string "Hello":

   - `stringLengthRecursive("Hello")`
     - The function checks if the first character, `'H'`, is the null terminator. It's not.
     - The `else` block is executed.
     - The function returns `1 + stringLengthRecursive("ello")`.

     - `stringLengthRecursive("ello")`
       - The function checks if the first character, `'e'`, is the null terminator. It's not.
       - The `else` block is executed.
       - The function returns `1 + stringLengthRecursive("llo")`.

         - `stringLengthRecursive("llo")`
           - The function checks if the first character, `'l'`, is the null terminator. It's not.
           - The `else` block is executed.
           - The function returns `1 + stringLengthRecursive("lo")`.

             - `stringLengthRecursive("lo")`
               - The function checks if the first character, `'l'`, is the null terminator. It's not.
               - The `else` block is executed.
               - The function returns `1 + stringLengthRecursive("o")`.

                 - `stringLengthRecursive("o")`
                   - The function checks if the first character, `'o'`, is the null terminator. It's not.
                   - The `else` block is executed.
                   - The function returns `1 + stringLengthRecursive("")`.

                   - `stringLengthRecursive("")`
                     	- The function checks if the first character, `'\0'`, is the null terminator. It is.
                     	- The base case is triggered, and the function returns `0`.

                 	- The result `1 + 0` is returned to the previous call, resulting in `1`.

             	- The result `1 + 1` is returned to the previous call, resulting in `2`.

         	- The result `1 + 2` is returned to the previous call, resulting in `3`.

		- The result `1 + 3` is returned to the previous call, resulting in `4`.

	- The result `1 + 4` is returned to the original call, resulting in `5`.
4. The program then displays the length of the input string using `printf`: "Length of the string: 5".

So, for the input string "Hello", the program correctly calculates and displays a length of `5`.
**********************************************************************************************************/
//......................................................................................................
//.NNNNNNN......NNNNNN..................................................................................
//.NNNNNNN......NNNNNN.........................................ttt......................................
//.NNNNNNNN.....NNNNNN.......................................ttttt......................................
//.NNNNNNNN.....NNNNNN.......................................ttttt......................................
//.NNNNNNNNN....NNNNNN.......................................ttttt......................................
//.NNNNNNNNNN...NNNNNN.......................................ttttt......................................
//.NNNNNNNNNN...NNNNNN..............oooooooooo............. ttttttttt....................eeeeeeeee......
//.NNNNNNNNNNN..NNNNNN.............oooooooooooo............ ttttttttt...................eeeeeeeeeeee....
//.NNNNNNNNNNN..NNNNNN............oooooooooooooo........... ttttttttt..................eeeeeeeeeeeee....
//.NNNNNNNNNNNN.NNNNNN...........oooooooooooooooo............ttttt.................... eeeeeeeeeeeeee...
//.NNNNNNNNNNNNNNNNNNN...........oooooo....ooooooo...........ttttt.................... eeeee...eeeeee...
//.NNNNNNNNNNNNNNNNNNN.......... oooooo.....oooooo...........ttttt.................... eeee.....eeeeee..
//.NNNNNN.NNNNNNNNNNNN.......... ooooo......oooooo...........ttttt.................... eeeeeeeeeeeeeee..
//.NNNNNN..NNNNNNNNNNN.......... ooooo......oooooo...........ttttt.................... eeeeeeeeeeeeeee..
//.NNNNNN..NNNNNNNNNNN.......... ooooo......oooooo...........ttttt.................... eeeeeeeeeeeeeee..
//.NNNNNN...NNNNNNNNNN.......... ooooo......oooooo...........ttttt.................... eeee.............
//.NNNNNN...NNNNNNNNNN.......... oooooo.....oooooo...........ttttt.................... eeeee............
//.NNNNNN....NNNNNNNNN...........oooooo....oooooo............ttttt.................... eeeee............
//.NNNNNN.....NNNNNNNN...........oooooooooooooooo............tttttttt................. eeeeeeeeeeeeee...
//.NNNNNN.....NNNNNNNN............oooooooooooooo.............tttttttt..................eeeeeeeeeeeeee...
//.NNNNNN......NNNNNNN.............oooooooooooo..............ttttttttt..................eeeeeeeeeeeee...
//.NNNNNN......NNNNNNN..............oooooooooo................tttttttt...................eeeeeeeeee.....
//......................................................................................................

/*

The difference between `int stringLength(const char *str)` and `int stringLength(char *str)` lies 
in the type of pointer being used and the potential side effects of modifying the string within the function.

1. `int stringLength(const char *str)`:
In this declaration, the `const` keyword is used before `char *str`. This means that the pointer `str` is a pointer to a constant character. 
This type of pointer indicates that the function will not modify the content of the string pointed to by `str`. 
Using a `const char *` pointer emphasizes that the string will be treated as read-only within the function. 
This is a good practice because it prevents accidental modifications to the input string and ensures the function won't alter the data it receives.

2. `int stringLength(char *str)`:
In this declaration, there's no `const` keyword before `char *str`. This means that the pointer `str` is a non-constant pointer to a character. 
It allows the function to potentially modify the content of the string pointed to by `str`. 
While you can technically use this type of pointer to calculate the string length without modifying the string itself, 
using a `const char *` pointer is considered safer and more semantically accurate if the function doesn't intend to modify the string.

Using `const` helps prevent accidental changes to the input data and makes the function's intent clearer. 
If you're certain that your function will only calculate the length and not modify the string, 
it's a good practice to use `const char *str` to communicate this intention to anyone reading or using your code.


Let's consider the following scenario:

scenario 1: without using 'const' keyword,
#include <stdio.h>
int stringLength( char *str) 
{
    *str = 'A';
    char *end = str; 

    while (*end != '\0') 
    {
        end++; 
    }

    return end - str; 
}
int main() {
    char userInput[100]; 

    printf("Enter a string: ");
    scanf("%s", userInput);

    int length = stringLength(userInput);

    printf("Length of the %s string: %d\n",userInput,length);

    return 0; 
}

the output will be :

Enter a string: mahmoud
Length of the Aahmoud string: 7


scenario 2: with using 'const' keyword,
#include <stdio.h>
int stringLength( const char *str) {
    *str = 'A';
    const char *end = str;

    while (*end != '\0')
    {
        end++;
    }

    return end - str;
}
int main() {
    char userInput[100];

    printf("Enter a string: ");
    scanf("%s", userInput);

    int length = stringLength(userInput);

    printf("Length of the %s string: %d\n",userInput,length);

    return 0;
}

Error " assignment of read-only location '*str' " will be generated 
*/



//*************************** Good Code *******************************/

#include<stdio.h>

/*
(2) C Function to find length of a given string using pointer.
*/

int Get_length(char *ptr);

 int main()
{
    char array[100];

    printf("Enter a String  : ");
    gets(array);


    int length = Get_length(array);

    printf("Length of a given string = %d\n",length);


    return 0;
}

int Get_length(char *ptr)
{
    int len;
    for(len=0; ptr[len] != '\0' ;len++);

    return len;
}
