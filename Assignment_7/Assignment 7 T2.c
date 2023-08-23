// Write a program that computes the nth term ofthe 
// arithmetic series: 1, 3, 5, 7, 9, …
// Run the program to compute the 100th term of the given series


#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);   //enter n = 100

    // The nth term of the series can be calculated using the formula: nth_term = 2n - 1
    int nth_term = 2 * n - 1;

    printf("The %dth term of the series is: %d\n", n, nth_term);

    return 0;
}


//---------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);  //enter n = 100

    int current_term = 1;  // Start with the first term
    int common_difference = 2;  // Common difference between terms

    for (int i = 1; i < n; i++) {
        current_term += common_difference;  // Increment by the common difference
    }

    printf("The %dth term of the series is: %d\n", n, current_term);

    return 0;
}

//-------------------------------------------------------------------------------------------
#include <stdio.h>

// Recursive function to calculate the nth term of the series
int nthTerm(int n) {
    if (n == 1) {
        return 1;  // Base case: the first term is 1
    } else {
        return nthTerm(n - 1) + 2;  // Recursively calculate the previous term and add 2
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);   //enter n = 100

    int nth_term = nthTerm(n);

    printf("The %dth term of the series is: %d\n", n, nth_term);

    return 0;
}






// An arithmetic series is a sequence of numbers in which the difference between consecutive terms is constant. In other words, each term is obtained by adding a fixed value, called the "common difference," to the previous term. The general form of an arithmetic series is:

// a, a + d, a + 2d, a + 3d, ...

// Here, "a" is the first term of the series, "d" is the common difference between terms, and the terms are indexed starting from 0.

// For example, the series 1, 3, 5, 7, 9, ... is an arithmetic series with a common difference of 2 and a first term of 1. Each term is obtained by adding 2 to the previous term.

// The formula to calculate the nth term of an arithmetic series is:

// nth_term = a + (n - 1) * d

// Where:

// nth_term is the nth term of the series.
// a is the first term of the series.
// n is the index of the term.
// d is the common difference between terms.