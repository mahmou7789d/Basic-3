// Write a C program that takes a number and a bit number from 
// the user, then print the value of this bit in this number

#include <stdio.h>

int main() {
    int number, bitNumber;
    int BitValue;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Get the bit number from the user
    printf("Enter the bit number: ");
    scanf("%d", &bitNumber);

    
    BitValue=(number >> bitNumber) & 1;
    // Extract and print the value of the specified bit
    printf("The bit at position %d is %d\n", bitNumber, BitValue);

    return 0;
}

//---------------------------------------

#include <stdio.h>

int main() {
    int number, bitNumber;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Get the bit number from the user
    printf("Enter the bit number: ");
    scanf("%d", &bitNumber);

    // Shifting 1 by the bitNumber positions to create a bitmask
    int bitmask = 1 << bitNumber;

    // Using bitwise AND to check if the bit is set or not
    if ((number & bitmask) != 0) {
        printf("The bit at position %udis 1\n", bitNumber);
    } else {
        printf("The bit at position %d is 0\n", bitNumber);
    }

    return 0;
}
