//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................222222222.....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................222222222222....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................22222222222222...
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................222222222222222..
//.......TTTTTT.................................................................kkkkkk...................222222222222222..
//.......TTTTTT.................................................................kkkkkk.................. 222222...222222..
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk........ 22222....222222..
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk...................222222..
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk....................222222..
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk....................222222...
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk....................2222222...
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk....................2222222....
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk...................2222222.....
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk..................2222222......
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk................2222222.......
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk..............2222222........
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk.............2222222.........
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk...........2222222..........
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk...........222222222222222..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk......... 222222222222222..
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk......... 222222222222222..
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk........ 222222222222222..
//........................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Structure
Name        :   Assignment 16 - Lecture 16 - Problem number 2
Program     :   C function to add two complex numbers by passing two structures to a function and display the results.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (2) C function to add two complex numbers by passing two structures to a function and display the results.

+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Define a structure to represent a complex number
struct Complex {
    double real;
    double imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum;

    // Input the first complex number
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%lf %lf", &num1.real, &num1.imag);

    // Input the second complex number
    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%lf %lf", &num2.real, &num2.imag);

    // Add the two complex numbers
    sum = addComplex(num1, num2);

    // Display the result
    printf("Sum = %.2lf + %.2lfi\n", sum.real, sum.imag);

    return 0;
}



#include <stdio.h>
#include "STD_TYPES.h"

typedef struct
{
    float real;
    float img;
} complex;

complex add_two_complex_numbers(const complex *n1, const complex *n2);

int main()
{
    complex num1, num2, res;

    printf("Please enter real and imaginary parts of the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.img);

    printf("Please enter real and imaginary parts of the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.img);

    res = add_two_complex_numbers(&num1, &num2);

    printf("Result: %.2f %c %.2fi\n", res.real, (res.img >= 0) ? '+' : '-', fabs(res.img));
    return 0;
}

complex add_two_complex_numbers(const complex *n1, const complex *n2)
{
    complex result = {
        n1->real + n2->real,
        n1->img + n2->img
    };
    return result;
}
