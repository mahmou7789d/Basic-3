// Write a program to reverse a number.

#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

// Inside the loop:
// The statement int digit = number % 10; extracts the last digit of the number using the modulo operator %. For example, if number is 123, digit would be 3.
// The statement reversedNumber = reversedNumber * 10 + digit; adds the extracted digit to the reversedNumber. It effectively shifts the existing digits of reversedNumber one place to the left and adds the new digit at the units place. This step gradually builds up the reversed number. For example, if reversedNumber is 0 and digit is 3, after this line reversedNumber becomes 3.
// The statement number /= 10; removes the last digit from the number by integer division. For example, if number is 123, after this line number becomes 12.