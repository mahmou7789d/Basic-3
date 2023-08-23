// Write a C program to calculate the power of a number.
// The number and its power are input from user.

#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the power using a loop
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is %lld\n", base, exponent, result);

    return 0;
}

// the above code can't handle the negative exponent cases to i write the following code 
//-----------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int base, exponent;
    double result = 1.0;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the power using a loop
    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else {
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
    }

    printf("%d raised to the power of %d is %lf\n", base, exponent, result);

    return 0;
}
