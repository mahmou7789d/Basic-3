//....................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.........................11111..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk........................111111..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.......................1111111..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................11111111..
//.......TTTTTT.................................................................kkkkkk....................1111111111..
//.......TTTTTT.................................................................kkkkkk...................11111111111..
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk.........11111111111..
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk..........11111111111..
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk...........1111..11111..
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk..................11111..
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk...................11111..
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk....................11111..
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk....................11111..
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk....................11111..
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk...................11111..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk..................11111..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk..................11111..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk.................11111..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk.................11111..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk................11111..
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk................11111..
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk...............11111..
//....................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Pointers
Name        :   Assignment 12 - Lecture 12 - Problem number 1
Program     :   C Function to compute sum of the array elements using pointers.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (1) Write a C function that compute sum of the array elements using pointers.
+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

// Function Prototype
long long int array_sum(int *arr, int size);

int main() {
	// Declare a size of array of integers
    int size=6;

    // Declare an array of integers with the given size
    int nums[size];
    int *ptr_nums = nums;
    // Input array elements from the user
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", ptr_nums+i);
        //scanf("%d", &nums[i]);
    }

    // Call the array_sum function to compute the sum of array elements
    long long int result = array_sum(ptr_nums, size);

    // Print the sum of array elements
    printf("Sum of array elements: %lld\n", result);

    return 0;
}
/*********************************** Function definition*****************************/
// Function to compute the sum of array elements using pointers
long long int array_sum(int *arr, int size)
{
    long long int sum = 0;

    // Iterate through the array using pointer arithmetic
    for (int i = 0; i < size; i++)
    {

        sum += (long long int)*arr;  // Add the value pointed to by 'arr' to the sum
        arr++;        			     // Move the pointer to the next element
    }

    return sum;
}
/********************************* Tracing the code to show you overflow cases  ****************************
 * int Normal case 
 * int result = array_sum(nums, size);
 * printf("Sum of array elements: %d\n", result);
 * 
 * with this input :
 * Element 1: 2147483647
 * Element 2: 1
 * Element 3: 2
 * Element 4: 3
 * Element 5: 4
 * Element 6: 5
 * 
 * this is the output :
 * Sum of array elements: -2147483634 
 * 
 * 
 * In this case, the overflow occurred because the sum of sum and the first element of the array (2147483647) exceeds 
 * the maximum value that an int can hold (2147483647). 
 * 
 * -------------------------------------------------------------------------------
 * in Model Case:
 * long long int result = array_sum(nums, size);
 * printf("Sum of array elements: %lld\n", result);
 * 
 * with this input :
 * Element 1: 2147483647
 * Element 2: 1
 * Element 3: 2
 * Element 4: 3
 * Element 5: 4
 * Element 6: 5
 * 
 * this is the output :
 * Sum of array elements: 2147483662 
 * */

/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************/
/******************************************************************************************************************
 * Look at this code for More Practice 
 * 
 * */
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

// Function to compute the sum of array elements using pointers
bool safe_add(int a, int b, int *result) 
{
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) 
    {
        return false; // Overflow will occur
    }
    *result = a + b;
    return true; // Addition is safe
}

int array_sum(int *arr, int size) {
    int sum = 0;

    // Iterate through the array using pointer arithmetic
    for (int i = 0; i < size; i++) {
        if (!safe_add(sum, *arr, &sum)) {
            printf("Overflow occurred during sum calculation.\n");
            return 0; // Handle overflow
        }
        arr++; // Move the pointer to the next element
    }

    return sum;
}

int main() {
	// Declare a size of array of integers 
    int size=6;
    // Declare an array of integers with the given size
    int nums[size];

    // Input array elements from the user
    printf("Enter %d elements separated by spaces:\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &nums[i]);
    }

    // Call the array_sum function to compute the sum of array elements
    int result = array_sum(nums, size);

    // Print the sum of array elements
    printf("Sum of array elements: %d\n", result);

    return 0;
}







#include <stdio.h>

void FillArray(int* ptr, int size);
int ArraySum (const int* ptr, int size);

int main(){// C Function to compute sum of the array elements using pointers.
    
    int arr[6];
    FillArray(arr,6);
    
    int sum = ArraySum(arr,6);
    
    printf("Summation of array elements = %d",sum);
    
    
    
    return 0;
}

int ArraySum (const int* ptr, int size){
    if(ptr != NULL){// check for Wild Pointer   
        int sum =0;
        for(int i=0;i<size;i++)
            sum += *(ptr + i);
        
        return sum;
    }
}


void FillArray(int* ptr, int size){
    if(ptr != NULL){    
        printf("\nPlease fill the array of size %d:\n",size);
        for(int i=0;i<size;i++){
            printf("Enter element number %d: ",i+1);
            scanf("%d",ptr + i);
        }
    }
}