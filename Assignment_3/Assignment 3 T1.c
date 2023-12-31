/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Switch & Ternary & ASCII
Name        :   Assignment 3 - Lecture 3 - Problem number 1
Program     :   Write a program that takes one character and checks if it alphabet or not.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (1) Write a program that takes one character and checks if it alphabet or not.

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/



#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    // Check if the character is an alphabet letter
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("%c is an alphabet.\n", character);
    } else {
        printf("%c is not an alphabet.\n", character);
    }

    return 0;
}



/*-------------------------          Approach 2                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <ctype.h> // for the isalpha function

int isAlphabet(char c) {
    return isalpha(c); // isalpha() returns a non-zero value if the character is an alphabet letter
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (isAlphabet(character)) {
        printf("%c is an alphabet.\n", character);
    } else {
        printf("%c is not an alphabet.\n", character);
    }

    return 0;
}


/*-------------------------          Approach 3                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    int isAlphabet = (character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z');

    printf("%c is %s alphabet.\n", character, isAlphabet ? "an" : "not an");

    return 0;
}
