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

/******************************************************************************************************************/

#include <stdio.h>
#include <string.h>

int IsAlphapet(char* str);
int GetLength(char* str);

typedef struct {
    char name[20];
    int roll;
    float marks;
} student;

int main() {
    student studentData;
    printf("Enter student name: ");
    scanf("%[^\n]s", studentData.name);
    fflush(stdin);
    if (IsAlphapet(studentData.name))
    {
        printf("Enter student roll number: ");
        if( scanf("%d", &studentData.roll) == 1)
        {
            printf("Enter student Mark number: ");
            if(scanf("%f", &studentData.marks) == 1)
            {
                printf("Name: %s\n", studentData.name);
                printf("Roll Number: %d\n", studentData.roll);
                printf("Marks: %.2f\n", studentData.marks);
            }
            else
            {
                printf("Invalid Mark Number\n");
                return 1;
            }
        }
        else
        {
            printf("Invalid roll\n");
            return 1;
        }
    }
    else
    {
        printf("Invalid Name\n");
        return 1;
    }
    return 0;
}

int IsAlphapet(char* str)
{
    int returnVal = 1;
    for (int i = 0; str[i] != '\0'; i++)
        {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' '))
        {
            returnVal = 0;
        }
    }
    return returnVal;
}


/******************************************************************************************************************/


#include <stdio.h>
#include <string.h> 
#include "STD_TYPES.h"

typedef struct
{
    char  name[20];
    uint32 roll;
    float mark;
} student;

int main()
{
    student std;

    printf("Please enter information:\n");
    printf("Enter name: ");
    fgets(std.name, sizeof(std.name), stdin);
    std.name[strcspn(std.name, "\n")] = '\0'; // Remove the trailing newline

    printf("Enter roll number: ");
    scanf("%d", &std.roll);
    getchar(); // Clear the input buffer

    printf("Enter your mark: ");
    scanf("%f", &std.mark);
    getchar(); // Clear the input buffer

    printf("\nDisplaying Information:\n\n");
    printf("Name: %s\n", std.name);
    printf("Roll number: %d\n", std.roll);
    printf("Marks: %.1f\n", std.mark);

    return 0;
}

