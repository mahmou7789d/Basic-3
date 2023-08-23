// Write a C program that takes a number and a bit number from 
// the user, toggle the required bit, then print the new value

#include <stdio.h>

int main() {
    int number, bitNumber;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit number to toggle (0-31): ");
    scanf("%d", &bitNumber);

    if (bitNumber < 0 || bitNumber > 31) {
        printf("Invalid bit number. Please enter a value between 0 and 31.\n");
        return 1;
    }

    // Toggle the specified bit
    int newNumber = number ^ (1 << bitNumber);

    // Print the new value
    printf("The new value after toggling bit %d is: %d\n", bitNumber, newNumber);

    return 0;
}



// int newNumber = number ^ (1 << bitNumber);
// This line toggles the specified bit in the number variable. It uses a bitwise XOR operation to achieve the toggling.
// (1 << bitNumber) creates a value where only the bit at bitNumber is set (all other bits are 0). 
// XORing this value with the original number toggles the selected bit.

// ---------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int number, bitNumber;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit number to toggle (0-31): ");
    scanf("%d", &bitNumber);

    if (bitNumber < 0 || bitNumber > 31) {
        printf("Invalid bit number. Please enter a value between 0 and 31.\n");
        return 1;
    }

    // Create a mask with only the bitNumber-th bit set
    int mask = 1 << bitNumber;

    // Toggle the specified bit using bitwise XOR
    int newNumber = number ^ mask;

    // Print the new value
    printf("The new value after toggling bit %d is: %d\n", bitNumber, newNumber);

    return 0;
}
