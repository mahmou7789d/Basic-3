// Write a function called total, which totals the sum of an
// integer array passed to it (as the first parameter) and returns
// the total of all the elements as an integer. Let the second
// parameter to the function be an integer which contains the
// number of elements of the array.



#include <stdio.h>

int total(int arr[], int numElements) {
    int sum = 0;
    for (int i = 0; i < numElements; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numElements = 5;
    int arr[numElements];
    
    // Initialize the array elements
    for (int i = 0; i < numElements; i++) {
        arr[i] = (i + 1) * 10; // You can modify the initialization logic here
    }
    
    int result = total(arr, numElements);
    
    printf("The total sum of the array elements is: %d\n", result);
    
    return 0;
}

//----------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int total(int arr[], int numElements) {
    int sum = 0;
    for (int i = 0; i < numElements; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numElements;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &numElements);
    
    int arr[numElements];
    
    printf("Enter %d elements:\n", numElements);
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = total(arr, numElements);
    
    printf("The total sum of the array elements is: %d\n", result);
    
    return 0;
}


// keep in mind that this code uses Variable Length Arrays (VLAs) which are not standard C, but an optional feature introduced in C99. 
// Some compilers might support VLAs, but they are not guaranteed to work in all environments. 
// If you want to ensure portability, it's better to use dynamically allocated memory or predefined fixed-size arrays.
