
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
            if (scanf(" %[^\n]s", students[i].name) != 1) {
                printf("Error reading input.\n");
                return 1;
            }
            fflush(stdin); 
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


//-------------------------------------------------------------------------------------------------------------------
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


