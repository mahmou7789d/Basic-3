//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................33333333......
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.....................3333333333.....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................333333333333....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................33333333333333...
//.......TTTTTT.................................................................kkkkkk...................33333333333333...
//.......TTTTTT.................................................................kkkkkk...................333333..333333...
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk.........33333...333333...
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk..................333333...
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk.................3333333....
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk.................33333333....
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk..................3333333.....
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk...................333333333...
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk...................333333333...
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk.......................333333..
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk......................333333..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk........... 33333....333333..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk........... 333333...333333..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk...........333333333333333..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk...........33333333333333...
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk...........3333333333333...
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk...........333333333333....
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk............33333333......
//........................................................................................................................

/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Array
Name        :   Assignment 7 - Lecture 7 - Problem number 3
Program     :   Write a program that computes the nth term of the 
                geometric series: 1, 3, 9, 27, …
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (3) Write a program that computes the nth term of the 
                    geometric series: 1, 3, 9, 27, …
                    Run the program to compute the 10th term of the given series.

+
==========================================================================================
*/

/*-------------------------        Approach 1:                   ------------------------*/
/*---------------------------------------------------------------------------------------*/



#include <stdio.h>

int main() {
    int n = 10; // Change this value to compute a different term
    int firstTerm = 1;
    int commonRatio = 3;
    
    // Calculate the nth term using the formula: nthTerm = firstTerm * commonRatio^(n-1)
    int nthTerm = firstTerm;
    for (int i = 1; i < n; i++) {
        nthTerm *= commonRatio;
    }
    
    printf("The %dth term of the series is: %d\n", n, nthTerm);
    
    return 0;
}

//---------------------------------------------------------------------------------------------------------
#include <stdio.h>

// Recursive function to calculate the nth term of the geometric series
int geometricSeries(int n, int term, int ratio) {
    if (n == 1) {
        return term;
    } else {
        return geometricSeries(n - 1, term * ratio, ratio);
    }
}

int main() {
    int n = 10; // Change this value to compute a different term
    int firstTerm = 1;
    int commonRatio = 3;
    
    int nthTerm = geometricSeries(n, firstTerm, commonRatio);
    
    printf("The %dth term of the series is: %d\n", n, nthTerm);
    
    return 0;
}

//---------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

int main() {
    int n = 10; // Change this value to compute a different term
    int firstTerm = 1;
    int commonRatio = 3;
    
    // Calculate the nth term using the formula: nthTerm = firstTerm * commonRatio^(n-1)
    int nthTerm = firstTerm * pow(commonRatio, n - 1);
    
    printf("The %dth term of the series is: %d\n", n, nthTerm);
    
    return 0;
}



// A geometric series is a sequence of numbers in which each term after the first is found by multiplying the previous one by a fixed, 
// non-zero number called the common ratio. The general form of a geometric series is:

// ```
// a + ar + ar^2 + ar^3 + ... + ar^n
// ```

// Where:
// - `a` is the first term of the series.
// - `r` is the common ratio by which each term is multiplied to get the next term.
// - `n` is the number of terms in the series.

// Geometric series can either be infinite, extending infinitely, or finite, with a specific number of terms. 
// The sum of a finite geometric series can be calculated using the formula:

// ```
// S = a * (1 - r^n) / (1 - r)
// ```

// Where `S` is the sum of the series.

// For example, in the series 1, 3, 9, 27, ..., the first term `a` is 1, and the common ratio `r` is 3. 
// This series is a geometric series because each term is obtained by multiplying the previous term by 3.