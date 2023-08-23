// Write a program to display a full pyramid using stars
// pattern.
//     *
//    ***
//   *****
//  *******
// *********


#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars in the current row
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to the next line after printing stars for the current row
        printf("\n");
    }

    return 0;
}
