// Write a program to display half pyramid using stars
// pattern.
// *
// * *
// * * *
// * * * *
// * * * * *


#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

//---------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        int j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
    }

    return 0;
}
