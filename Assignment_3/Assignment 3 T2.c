// Write program that converts any letter from 
// lowercase to uppercase.

#include <stdio.h>

int main() {
    char lowercase;
    char uppercase;

    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase);

    if (lowercase >= 'a' && lowercase <= 'z') {
        // Convert to uppercase by subtracting the ASCII difference between lowercase and uppercase letters
        uppercase = lowercase - 32;
        printf("Uppercase equivalent: %c\n", uppercase);
    } else {
        printf("You entered an invalid lowercase letter.\n");
    }

    return 0;
}

//--------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    char lowercase;
    char uppercase;

    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase);

    if (lowercase >= 'a' && lowercase <= 'z') {
        // Convert to uppercase by subtracting the ASCII difference between lowercase and uppercase letters
        uppercase = lowercase - ('a' - 'A');
        printf("Uppercase equivalent: %c\n", uppercase);
    } else {
        printf("You entered an invalid lowercase letter.\n");
    }

    return 0;
}


//---------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    char lowercase;
    char uppercase;

    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase);

    if (lowercase >= 'a' && lowercase <= 'z') {
        // Convert to uppercase using bitwise operation
        uppercase = lowercase & ~32;
        printf("Uppercase equivalent: %c\n", uppercase);
    } else {
        printf("You entered an invalid lowercase letter.\n");
    }

    return 0;
}
