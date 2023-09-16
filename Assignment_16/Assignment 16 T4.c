//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk..........................444444....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk..........................444444....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.........................4444444....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk........................44444444....
//.......TTTTTT.................................................................kkkkkk........................44444444....
//.......TTTTTT.................................................................kkkkkk.......................444444444....
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk............4444444444....
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk.............4444444444....
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk.............44444444444....
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk.............444444444444....
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk..............44444.444444....
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk..............444444.444444....
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk............. 44444..444444....
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk............. 44444..444444....
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk............ 444444444444444..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk........... 444444444444444..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk........... 444444444444444..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk.......... 444444444444444..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk..................444444....
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk.................444444....
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk.................444444....
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk................444444....
//........................................................................................................................

/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Structure
Name        :   Assignment 16 - Lecture 16 - Problem number 4
Program     :   C Function to store information for 10 students in array of structure.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (4) C Function to store information (name, id and grade) for 10
                    students in array of structures using pointers and another
                    function to print all the structures using pointers.
+
==========================================================================================
*/

/*-------------------------        Approach 1:                   ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int id;
    float grade;
}Student;

void inputStudentData( Student *students, int numStudents) 
{
    for (int i = 0; i < numStudents; i++) 
    {
        printf("Enter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }
}

void printStudentData( Student *students, int numStudents) 
{
    printf("Student Information:\n");
    for (int i = 0; i < numStudents; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Grade: %.2f\n", students[i].grade);
    }
}

int main() {
    int numStudents = 10;
    Student students[numStudents];

    inputStudentData(students, numStudents);
    printStudentData(students, numStudents);

    return 0;
}


/**************************************************************************************************************/
#include <stdio.h>
#include "STD_TYPES.h"


/*
(4) C Function to store information (name, id and grade) for 10
students in array of structures using pointers and another
function to print all the structures using pointers.
*/

typedef struct
{
    uint32 id;
    uint8 name[20];
    uint8 grade;

} Students;

void Storing_Information(Students *obj,uint8 size);
void Display_Information(Students *obj,uint8 size);

int main()
{
    Students std[10];
    Storing_Information(&std,4);
    Display_Information(&std,4);
    return 0;
}

void Storing_Information(Students *obj,uint8 size)
{
    if(NULL != obj)
    {
        uint8 i,x;
        for(i=0; i<size; i++)
        {
            printf("please enter information of student %d : \n",i+1);

            printf("Name : ");
            scanf("%s",(obj->name));

            printf("ID : ");
            x=scanf("%d",&(obj->id));
            while(x!=1)                  // this statement is here to avoid enter letter by user
            {
                printf("Invalid input, please enter an integer : ");
                scanf("%*[^\n]");                    // discard any remaining characters in the input buffer
                x=scanf("%d",&(obj->id));
            }

            printf("Grade : ");
            x=scanf("%d",&(obj->grade));
            while(x!=1)                    // this statement is here to avoid enter letter by user
            {
                printf("Invalid input, please enter an integer : ");
                scanf("%*[^\n]");                    // discard any remaining characters in the input buffer
                x=scanf("%d",&(obj->grade));
            }
            obj++;
        }
    }
    else
    {
        /*nothing*/
    }

}
void Display_Information(Students *obj,uint8 size)
{
    if(NULL != obj)
    {
        uint8 i;
        for(i=0; i<size; i++)
        {
            printf("information of student %d : \n",i+1);

            printf("Name : %s\n",obj->name);

            printf("ID : %d\n",obj->id);

            printf("Grade : %d\n",obj->grade);

            obj++;
        }
    }
    else
    {
        /*nothing*/
    }
}
/************************************************************************************************************/
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
    student studentData[2]; // Declare a variable of type 'student' to store student information.
    inputdata(&studentData,2);
    printdata(studentData,2);
    // Return 0 to indicate successful execution of the program.
    return 0;
}
void inputdata(student *studentData,int size)
{
    for(int i=0;i<size;i++)
    {
        // Prompt the user to enter the student's name.
    printf("Enter student name: ");
    fflush(stdin);
    // Read the student's name using scanf and allow spaces in the input.
    scanf("%[^\n]s", ((studentData+i))->name);
    //scanf("%[^\n]s", studentData[i].name);
    // Clear the input buffer to prevent issues with subsequent input.
    fflush(stdin);

    // Check if the entered name contains only alphabetic characters and spaces.
    if (IsAlphapet(((studentData+i))->name))
    {
        // Prompt the user to enter the student's roll number.
        printf("Enter student roll number: ");
        // Read and validate the student's roll number.
        if (scanf(" %d", &(studentData+i)->roll) == 1)
        {
            // Prompt the user to enter the student's marks.
            printf("Enter student Mark number: ");
            // Read and validate the student's marks.
            if (scanf("%f", &(studentData+i)->marks) == 1)
            {

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
    }
}
void printdata(student *studentData,int size)
{
    for(int i =0 ; i <size;i++)
    {
        // Display the student's information.
        printf("Name: %s\n", (studentData+i)->name);
        //printf("Name: %s\n", studentData[i].name);
        printf("Roll Number: %d\n", (studentData+i)->roll);
        printf("Marks: %.2f\n", (studentData+i)->marks);
    }

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

/**************************************************************************************************************/
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
    int size=5;
    student studentData[size];
    for(int i =0;i<size;i++)
    {
        printf("Enter student name: ");
        scanf("%[^\n]s", studentData[i].name);
        fflush(stdin);
        if (IsAlphapet(studentData[i].name))
        {
            printf("Enter student roll number: ");
            if( scanf("%d", &studentData[i].roll) == 1)
            {
                printf("Enter student Mark number: ");
                if(scanf("%f", &studentData[i].marks) == 1)
                {
                    printf("Name: %s\n", studentData[i].name);
                    printf("Roll Number: %d\n", studentData[i].roll);
                    printf("Marks: %.2f\n", studentData[i].marks);
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

/**************************************************************************************************************/



#include <stdio.h>
#include "STD_TYPES.h"

typedef struct{
    uint16 name[20];
    uint8 roll;
    uint32 marks[40][5];
} student;

int main(){
    uint8 i=0,x,n=0;

    while (x <= 0 || x > 40) {
        printf("Please enter the number of students to allocate their information as a max 40 students: ");
        scanf("%d", &x);
        if (x <= 0 || x > 40)
            printf("Invalid input! Please try again.\n");
    }

    student number[x];

    while (i<x){
        printf("Please enter student %d name (maximum 20 characters): ", i+1);
        scanf(" %[^\n]s", number[i].name);
        printf("Please enter student %d roll: ", i+1);
        scanf("%d", &number[i].roll);
        printf("Please enter student %d marks for his/her 5 subjects: ", i+1);
        n=0;
        while (n < 5) {
            scanf("%d", &number[i].marks[i][n]);
            n++;
        }

        //x--;
        i++;
        
    }
    printf("....................................................\nHere is the information for the assigned student\n....................................................\n");
    for (i=0; i < x; i++){
        printf("Student %d name is: %s\n", i+1, number[i].name);
        printf("Student %d roll is: %d\n", i+1, number[i].roll);
        n=0;
        while (n < 5){
            printf("Student %d marks: %d\n", i+1, number[i].marks[i][n]);
            n++;
        }

        printf("....................................................\n");
    }

    return 0;
}




#include <stdio.h>
#include "STD_TYPES.h"

#define MAX_STUDENTS 40
#define MAX_NAME_LENGTH 20
#define NUM_SUBJECTS 5

typedef struct {
    char name[MAX_NAME_LENGTH];
    uint8 roll;
    uint32 marks[NUM_SUBJECTS];
} Student;

int main() {
    uint8 x = 0;

    while (x <= 0 || x > MAX_STUDENTS) {
        printf("Please enter the number of students (up to %d): ", MAX_STUDENTS);
        scanf("%hhu", &x);
        if (x <= 0 || x > MAX_STUDENTS)
            printf("Invalid input! Please try again.\n");
    }

    Student students[MAX_STUDENTS];

    for (uint8 i = 0; i < x; i++) {
        printf("Please enter student %d name (maximum %d characters): ", i + 1, MAX_NAME_LENGTH);
        scanf(" %[^\n]s", students[i].name);
        printf("Please enter student %d roll: ", i + 1);
        scanf("%hhu", &students[i].roll);
        printf("Please enter student %d marks for %d subjects: ", i + 1, NUM_SUBJECTS);
        for (uint8 j = 0; j < NUM_SUBJECTS; j++) {
            scanf("%u", &students[i].marks[j]);
        }
    }

    printf("....................................................\nHere is the information for the assigned students\n....................................................\n");
    for (uint8 i = 0; i < x; i++) {
        printf("Student %d name is: %s\n", i + 1, students[i].name);
        printf("Student %d roll is: %hhu\n", i + 1, students[i].roll);
        printf("Student %d marks:\n", i + 1);
        for (uint8 j = 0; j < NUM_SUBJECTS; j++) {
            printf("Subject %d: %u\n", j + 1, students[i].marks[j]);
        }
        printf("....................................................\n");
    }

    return 0;
}






// --------------------------------------------------------------------------------------

#include <stdio.h>
#include <ctype.h>
// Define a structure to represent a student
struct Student {
    char name[50];
    int id;
    double grade;
};

// Function to print the information of a single student using pointers
void printStudent(const struct Student *student) {
    printf("Name: %s\n", student->name);
    printf("ID: %d\n", student->id);
    printf("Grade: %.2lf\n", student->grade);
    printf("\n");
}

int Is_alpha (const char* str)
{
    for(int i =0 ; str[i] ; i++)
    {
        if(!(isalpha(str[i]) || str[i] == ' '))
        {
            return 0;
        }
    }
    return 1;
}
int main() {
    struct Student students[10]; // Array to store information for 10 students

    // Input information for 10 students
    for (int i = 0; i < 10; i++) {

        printf("Enter information for student %d:\n", i + 1);

        do {
            printf("Name: ");
            fflush(stdin);  
            if (fgets(students[i].name, sizeof(students[i].name), stdin) == NULL) {
                printf("Error reading input.\n");
                return 1;
            }
            students[i].name[strcspn(students[i].name, "\n")] = '\0';

            if (!Is_alpha(students[i].name)) {
                printf("Name must contain only alphabetic characters.\n");
            }
        } while (!Is_alpha(students[i].name));



        printf("ID: ");
        if(scanf("%d", &students[i].id) != 1 )
        {
            printf("the ID must be an integer number");
            return 1;
        }


        printf("Grade: ");
        scanf("%lf", &students[i].grade);
        printf("\n");
    }

    // Print information for all students using pointers
    printf("Information for all students:\n");
    for (int i = 0; i < 10; i++) {
        printStudent(&students[i]);
    }

    return 0;
}
