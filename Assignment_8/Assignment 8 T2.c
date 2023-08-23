// Write a C function to return the index of LAST occurrence of
// a number in a given array. Array index start from 0. If the item
// is not in the list return -1


#include <stdio.h>

int lastIndexOf(int arr[], int size, int target) {
    int lastIndex = -1;  // Initialize to -1 in case the target is not found

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            lastIndex = i;  // Update lastIndex when target is found
        }
    }

    return lastIndex;
}

int main() {
    int arr[] = {2, 4, 6, 8, 4, 10, 4, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int lastIndex = lastIndexOf(arr, size, target);

    if (lastIndex != -1) {
        printf("Last occurrence of %d is at index %d\n", target, lastIndex);
    } else {
        printf("%d is not found in the array\n", target);
    }

    return 0;
}


//---------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int lastIndexOf(int arr[], int size, int target) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == target) {
            return i;  // Return the index when target is found
        }
    }

    return -1;  // Return -1 if target is not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 4, 10, 4, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int lastIndex = lastIndexOf(arr, size, target);

    if (lastIndex != -1) {
        printf("Last occurrence of %d is at index %d\n", target, lastIndex);
    } else {
        printf("%d is not found in the array\n", target);
    }

    return 0;
}
