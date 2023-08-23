// Write a C function to swap the contents of two arrays with
// the same length.

#include <stdio.h>

void swapArrays(int arr1[], int arr2[], int length) {
    for (int i = 0; i < length; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int length=5;
    
    int arr1[length];
    int arr2[length];

    printf("Enter elements for arr1:\n");
    for (int i = 0; i < length; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for arr2:\n");
    for (int i = 0; i < length; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("Before swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }

    swapArrays(arr1, arr2, length);

    printf("\nAfter swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
