// Write a program to add two floating numbers. Determine the integer floor of the sum. The floor is the truncated float value, 
// anything after the decimal point is dropped


#include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    float sum = num1 + num2;
    int floorSum = (int)sum; // This casting truncates the decimal part

    printf("Sum: %.2f\n", sum);
    printf("Integer floor of the sum: %d\n", floorSum);

    return 0;
}


// Enter the first floating-point number: -1.2
// Enter the second floating-point number: -1.2
// Sum: -2.40
// Integer floor of the sum: -2
//-----------------------------------------------------------------------

#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    float sum = num1 + num2;
    //use the floor function from the math.h library to find the floor value of the sum
    int floorSum = (int)floor(sum);

    printf("Sum: %.2f\n", sum);
    printf("Integer floor of the sum: %d\n", floorSum);

    return 0;
}

//------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    float sum = num1 + num2;
    int floorSum = (int)sum; // Truncate the decimal part

    // Adjust floorSum if the sum is negative and has a fractional part
    if (sum < 0 && sum - floorSum != 0) {
        floorSum--;
    }

    printf("Sum: %.2f\n", sum);
    printf("Integer floor of the sum: %d\n", floorSum);

    return 0;
}

// Enter the first floating-point number: -1.2
// Enter the second floating-point number: -1.2
// Sum: -2.40
// Integer floor of the sum: -3


// In this solution, after truncating the decimal part using casting, we check if the sum is negative 
// and if it has a fractional part. If both conditions are true, we decrement the floorSum value to correctly handle negative values.

//----------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    float sum = num1 + num2;
    int floorSum;

    if (sum >= 0) {
        floorSum = (int)sum; // Truncate the decimal part
    } else {
        floorSum = (int)(sum - 1); // Adjust for negative values
    }

    printf("Sum: %.2f\n", sum);
    printf("Integer floor of the sum: %d\n", floorSum);

    return 0;
}
