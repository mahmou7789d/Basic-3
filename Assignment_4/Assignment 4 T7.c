// Write a program to display inverted half pyramid using
// stars pattern.
// * * * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
//-----------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j <= rows; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
//------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
