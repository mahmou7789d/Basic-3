//.............................................................................................
//.TTTTTTTTTTTTTTTTTT................................sskkk......................888888888......
//.TTTTTTTTTTTTTTTTTT................................sskkk..................... 8888888888.....
//.TTTTTTTTTTTTTTTTTT................................sskkk.................... 88888888888....
//.TTTTTTTTTTTTTTTTTT................................sskkk.................... 888888888888...
//.......TTTTTT......................................sskkk................... 888...888888...
//.......TTTTTT......................................sskkk................... 888...888888...
//.......TTTTTT......Taaaaaaaaa......aasssssssss.....sskkk...kkkkkkk......... 888...888888...
//.......TTTTTT.....TTaaaaaaaaaaa...aaassssssssss....sskkk..kkkkkkk........... 888...888888...
//.......TTTTTT....TTTaaaaaaaaaaa...aaasssssssssss...sskkk.kkkkkkk............ 88888888888....
//.......TTTTTT....TTTaaaaaaaaaaa..aaaasss.sssssss...sskkkkkkkkkkk............. 88888888888....
//.......TTTTTT....TTTaa...aaaaaa..aaaass...ssssss...sskkkkkkkkkk...............8888888888.....
//.......TTTTTT.............aaaaa..aaaassss..........sskkkkkkkkk.............. 88888888888....
//.......TTTTTT.........aaaaaaaaa..aaaassssssss......sskkkkkkkkk.............. 888888888888...
//.......TTTTTT.....TTaaaaaaaaaaa...aaassssssssss....sskkkkkkkkk............. 888...888888...
//.......TTTTTT....TTTaaaaaaaaaaa....aasssssssssss...sskkkkkkkkkk............ 888....888888..
//.......TTTTTT....TTTaaaaaaaaaaa......ssssssssssss..sskkkkkkkkkk............ 888....888888..
//.......TTTTTT...TTTTaaa...aaaaa..........ssssssss..sskkkk.kkkkkk........... 888....888888..
//.......TTTTTT...TTTTaa...aaaaaa..aaaass....ssssss..sskkk..kkkkkk........... 888...888888...
//.......TTTTTT...TTTTaaaaaaaaaaa..aaaasss.ssssssss..sskkk...kkkkkk.......... 888888888888...
//.......TTTTTT...TTTTaaaaaaaaaaaa.aaaasssssssssss...sskkk...kkkkkk........... 888888888888...
//.......TTTTTT....TTTaaaaaaaaaaaa..aaasssssssssss...sskkk....kkkkkk........... 88888888888....
//.......TTTTTT.....TTaaaaaaaaaaaa...aasssssssss.....sskkk....kkkkkkk...........888888888......
//.............................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Algorithm
Name        :   Assignment 10 - Lecture 10 - Problem number 8
Program     :   Write a C function to concatenate two strings.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (8) Write a C function to concatenate two strings.
+
==========================================================================================
*/

/*-------------------------             Approach 1               ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

// Function to concatenate two strings
void concatenateStrings(const char* str1, const char* str2, char* result) {
    int i, j;

    // Copy the characters from the first string
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    // Append the characters from the second string
    for (j = 0; str2[j] != '\0'; ++j, ++i) {
        result[i] = str2[j];
    }

    // Null-terminate the concatenated string
    result[i] = '\0';
}

int main() {
    char input1[100];
    char input2[100];
    char concatenated[200];  // Assuming the combined length won't exceed 200 characters

    printf("Enter the first string: ");
    scanf("%99s", input1);

    printf("Enter the second string: ");
    scanf("%99s", input2);

    concatenateStrings(input1, input2, concatenated);
    printf("Concatenated string: %s\n", concatenated);

    return 0;
}






// need to edit don't forget 
#include <stdio.h>
#include <string.h> // Include for strlen

void CocString(char arr1[], int size1, char arr2[], int size2, char arr3[], int size3);

int main()
{
    char arr1[50]; // Increase the size to accommodate up to 49 characters
    char arr2[50]; // Increase the size to accommodate up to 49 characters
    char Output[100]; // Adjust the output size accordingly

    while (1) {
        printf("Enter the first string: ");
        if (fgets(arr1, sizeof(arr1), stdin) == NULL) {
            break; // Exit the program if input fails (e.g., end of input stream)
        }

        // Remove newline character if present
        size_t len1 = strlen(arr1);
        if (len1 > 0 && arr1[len1 - 1] == '\n') {
            arr1[len1 - 1] = '\0';
        }

        printf("Enter the second string: ");
        if (fgets(arr2, sizeof(arr2), stdin) == NULL) {
            break; // Exit the program if input fails (e.g., end of input stream)
        }

        // Remove newline character if present
        size_t len2 = strlen(arr2);
        if (len2 > 0 && arr2[len2 - 1] == '\n') {
            arr2[len2 - 1] = '\0';
        }

        int count1 = strlen(arr1);
        int count2 = strlen(arr2);

        int count3 = count1 + count2;

        CocString(arr1, count1, arr2, count2, Output, count3);

        printf("The concatenated string: %s\n", Output);
    }

    return 0;
}

void CocString(char arr1[], int size1, char arr2[], int size2, char arr3[], int size3)
{
    printf("The 2 strings after operation: \n");

    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        arr3[i + size1] = arr2[i];
    }

    arr3[size3] = '\0'; // Null-terminate the concatenated string
}





// --------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

void CocString(char arr1[], int size1, char arr2[], int size2, char arr3[], int size3);

int main()
{
    char arr1[50];
    char arr2[50];
    char Output[100];

    int count1 = 0, count2 = 0;

    while (1)
    {
    Right_Input_1:
    {
        printf("\nEnter the first string: ");
        fgets(arr1, sizeof(arr1), stdin);

        // Remove the newline character from arr1
        arr1[strcspn(arr1, "\n")] = '\0';

        count1 = strlen(arr1);

        if (count1 >= 50)
        {
            printf("Error: Input string too long. Try again\n");
            count1 = 0;
            goto Right_Input_1;
        }
    }

    Right_Input_2:
    {
        printf("Enter the second string: ");
        fgets(arr2, sizeof(arr2), stdin);

        arr2[strcspn(arr2, "\n")] = '\0';

        count2 = strlen(arr2);

        if (count2 >= 50)
        {
            printf("Error: Input string too long. Try again\n");
            count2 = 0;
            goto Right_Input_2;
        }
    }

    int count3 = count1 + count2;
    CocString(arr1, count1, arr2, count2, Output, count3);

    printf("\nThe concatenated string: %s\n", Output);
    }
    return 0;
}

void CocString(char arr1[], int size1, char arr2[], int size2, char arr3[], int size3)
{
    printf("The 2 strings after operation:\n");

    for (int i = 0; i < size1; i++)
        arr3[i] = arr1[i];

    for (int i = 0; i < size2; i++)
        arr3[i + size1] = arr2[i];

    arr3[size3] = '\0';

    printf("%s\n", arr3);
}
