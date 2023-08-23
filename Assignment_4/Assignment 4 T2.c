// Write a  C program that reads a positive integer and checks if it is a perfect square.

#include <stdio.h>

int main() {
    int number;

    // Read the positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        int isPerfectSquare = 0;
        
        // Loop to check for perfect squares
        for (int i = 1; i <= number; i++) {
            if (i * i == number) {
                isPerfectSquare = 1;
                break;
            }
        }

        if (isPerfectSquare) {
            printf("%d is a perfect square.\n", number);
        } else {
            printf("%d is not a perfect square.\n", number);
        }
    }

    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <math.h>

int main() {
    int number;
    
    // Read the positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;
    }
    
    // Find the square root of the number
    double squareRoot = sqrt(number);

    // Check if the square root is an integer
    if ((int)squareRoot * (int)squareRoot == number) {
        printf("%d is a perfect square.\n", number);
    } else {
        printf("%d is not a perfect square.\n", number);
    }

    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int number;

    // Read the positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        // Calculate the integer part of the square root
        int sqrtNumber = 1;
        while (sqrtNumber * sqrtNumber < number) {
            sqrtNumber++;
        }

        // Check if it is a perfect square
        if (sqrtNumber * sqrtNumber == number) {
            printf("%d is a perfect square.\n", number);
        } else {
            printf("%d is not a perfect square.\n", number);
        }
    }

    return 0;
}



