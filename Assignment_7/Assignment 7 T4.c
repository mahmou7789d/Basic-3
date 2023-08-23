

// The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called 
// Fibonacci numbers, each is the sum of the preceding 2.
// Write a program which given n, returns the nth Fibonacci 
// number.
// - with for/while
// - with recursion



#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;

    int prev = 1, current = 1, next;

    for (int i = 3; i <= n; i++) {
        next = prev + current;
        prev = current;
        current = next;
    }

    return current;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;

    int fib[n+1];
    fib[0] = 0;
    fib[1] = fib[2] = 1;

    for (int i = 3; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib[n];
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;

    int prev = 1, current = 1;
    int i = 3;

    while (i <= n) {
        int next = prev + current;
        prev = current;
        current = next;
        i++;
    }

    return current;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;

    int fib[3] = {1, 1, 0};
    int i = 3;

    while (i <= n) {
        fib[2] = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = fib[2];
        i++;
    }

    return fib[2];
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
//---------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
