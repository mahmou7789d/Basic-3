

// Write a C program to display cross or X-shape using stars pattern.

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the cross: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == j || j == size - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

// This program takes the size of the cross as input from the user and then uses nested loops to print the stars in the pattern of a cross or X-shape.
//  The condition i == j corresponds to the top-left to bottom-right diagonal of the cross, 
// and the condition j == size - i + 1 corresponds to the top-right to bottom-left diagonal of the cross. 
// For all other positions, spaces are printed.