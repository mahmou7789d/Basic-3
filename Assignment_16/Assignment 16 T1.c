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
Target      :   C Structure
Name        :   Assignment 16 - Lecture 16 - Problem number 1
Program     :   C Program to store information (name, roll and marks) for a student using structure and display it.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (1) C Program to store information (name, roll and marks) for a student using structure and display it.
+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
/**
 * 
 * the most simplest solution for this task 
 * */
#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Declare a variable of type struct Student
    struct Student student1;

    // Input student information
    printf("Enter student name: ");
    scanf("%s", student1.name);

    printf("Enter student roll number: ");
    scanf("%d", &student1.roll);

    printf("Enter student marks: ");
    scanf("%f", &student1.marks);

    // Display student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}

/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>

// Function prototype for checking if a string contains only alphabetic characters and spaces.
int IsAlphapet(char* str);

// Define a structure to represent student information.
typedef struct {
    char name[20];  // Name of the student, up to 19 characters.
    int roll;       // Roll number of the student.
    float marks;    // Marks obtained by the student.
} student;

int main() {
    student studentData; // Declare a variable of type 'student' to store student information.

    // Prompt the user to enter the student's name.
    printf("Enter student name: ");
    // Read the student's name using scanf and allow spaces in the input.
    scanf("%[^\n]s", studentData.name);
    // Clear the input buffer to prevent issues with subsequent input.
    fflush(stdin);

    // Check if the entered name contains only alphabetic characters and spaces.
    if (IsAlphapet(studentData.name)) 
    {
        // Prompt the user to enter the student's roll number.
        printf("Enter student roll number: ");
        // Read and validate the student's roll number.
        if (scanf("%d", &studentData.roll) == 1) 
        {
            // Prompt the user to enter the student's marks.
            printf("Enter student Mark number: ");
            // Read and validate the student's marks.
            if (scanf("%f", &studentData.marks) == 1) 
            {
                // Display the student's information.
                printf("Name: %s\n", studentData.name);
                printf("Roll Number: %d\n", studentData.roll);
                printf("Marks: %.2f\n", studentData.marks);
            } 
            else 
            {
                // Display an error message for invalid marks and return an error code (1).
                printf("Invalid Mark Number\n");
                return 1;
            }
        } 
        else 
        {
            // Display an error message for invalid roll number and return an error code (1).
            printf("Invalid Roll Number\n");
            return 1;
        }
    } 
    else 
    {
        // Display an error message for an invalid name and return an error code (1).
        printf("Invalid Name\n");
        return 1;
    }

    // Return 0 to indicate successful execution of the program.
    return 0;
}

// Function to check if a string contains only alphabetic characters and spaces.
int IsAlphapet(char* str) {
    int returnVal = 1; // Initialize the return value to true (1).

    // Iterate through each character in the string.
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is not an alphabetic character (uppercase or lowercase) or a space.
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ')) 
        {
            returnVal = 0; // If any non-alphabetic character is found, set the return value to false (0).
        }
    }

    return returnVal; // Return the final result: 1 if the string contains only alphabetic characters and spaces, 0 otherwise.
}


/*-------------------------          Approach 3                  ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h> // Include the string.h library for string manipulation functions.
#include "STD_TYPES.h" // Assuming STD_TYPES.h contains necessary standard types like int and float.

// Define a structure to represent student information.
typedef struct
{
    char name[20]; // Name of the student, with a maximum length of 19 characters (plus null-terminator).
    int roll;      // Roll number of the student.
    float mark;    // Marks obtained by the student.
} student;

int main()
{
    student std; // Declare a student structure to hold student information.

    // Input for student information.
    printf("Please enter information:\n");
    
    // Input the name using fgets to handle spaces and buffer overflow.
    printf("Enter name: ");
    fgets(std.name, sizeof(std.name), stdin);

    // Remove the trailing newline character from the name input.
    std.name[strcspn(std.name, "\n")] = '\0';

    // Input the roll number as an integer.
    printf("Enter roll number: ");
    scanf("%d", &std.roll);

    // Clear the input buffer to prevent issues with the next input.
    getchar();

    // Input the marks as a floating-point number.
    printf("Enter your mark: ");
    scanf("%f", &std.mark);

    // Clear the input buffer to prevent issues with the next input.
    getchar();

    // Display student information.
    printf("\nDisplaying Information:\n\n");
    printf("Name: %s\n", std.name);
    printf("Roll number: %d\n", std.roll);
    printf("Marks: %.1f\n", std.mark);

    return 0; // Return 0 to indicate successful execution.
}

/**
 * Explanation for those lines:
 * 
 * fgets(std.name, sizeof(std.name), stdin);
 * std.name[strcspn(std.name, "\n")] = '\0';
 * 
 * */

/*
fgets(std.name, sizeof(std.name), stdin);

- `fgets` is a C standard library function used to read a line of text from 
    an input stream (`stdin` in this case, which is the standard input, typically the keyboard) 
    and store it in a character array (in this case, `std.name`).
- `std.name` is the character array where the input text (in this case, the student's name) 
    will be stored.
- `sizeof(std.name)` calculates the size (in bytes) of the `std.name` character array. 
    It ensures that `fgets` won't read more characters than the size of the array can hold, 
    which is essential to prevent buffer overflow.
- `stdin` is the standard input stream from which `fgets` will read the input.

The `fgets` function reads a line of text until it encounters a newline character (`'\n'`) 
or reaches the maximum number of characters specified by `sizeof(std.name)`. 
It then stores this line (including the newline character if present) in `std.name`.

std.name[strcspn(std.name, "\n")] = '\0';

- `strcspn` is another C standard library function used for string manipulation. 
    It calculates the length of the initial part of the string (in this case, `std.name`) 
    that does not contain any of the characters specified in the second argument 
    (in this case, `"\n"`, which is just a newline character).
- `strcspn(std.name, "\n")` calculates the length of the string 
    until the first occurrence of the newline character (`'\n'`) within `std.name`.
- The result of `strcspn` represents the position of the newline character in the string.
- By setting `std.name[result]` to `'\0'`, you are replacing the newline character 
    with the null-terminator (`'\0'`). 

This effectively removes the trailing newline character from the string.
- The purpose of removing the trailing newline character is to ensure that 
 string contains only the actual name entered by the user and no unwanted characters. 
This is important because the newline character is included when 
the user presses the "Enter" key after entering the name, 
and you typically want to remove it to work with a clean string.

*/