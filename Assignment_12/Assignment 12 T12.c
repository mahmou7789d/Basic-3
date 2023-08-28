//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.................. 777777777777777..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.................. 777777777777777..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.................. 777777777777777..
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.................. 777777777777777..
//.......TTTTTT.................................................................kkkkkk...........................777777...
//.......TTTTTT.................................................................kkkkkk..........................777777....
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk................777777....
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk................777777.....
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk................777777......
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk.................777777......
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk..................77777.......
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk..................777777.......
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk..................777777.......
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk.................777777........
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk................777777........
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk...............777777........
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk...............77777.........
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk.............777777.........
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk.............777777.........
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk............777777.........
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk............777777.........
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk...........777777.........
//........................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Pointers
Name        :   Assignment 12 - Lecture 12 - Problem number 7
Program     :   Given a string, create a new string made up of its last two letters, reversed and separated by a space, 
                the word is “bat”.Return string contains ”t a”
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (7)Given a string, create a new string made up of its last two letters, reversed and separated by a space, 
                the word is “bat”.Return string contains ”t a”

+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>

// Function to calculate the length of a string
int stringLength(const char *str);
void createNewString(const char *input, char *output) ;
int main() {
    int length = 100;
    char Input_Array[length]; // Original input array
    char Output_Array[4]; // Array to hold the new string: 3 characters + 1 null terminator
    char *Ptr_Input = Input_Array; // Pointer to the input array
    char *Ptr_Output = Output_Array; // Pointer to the output array

    printf("Please Enter Original string: ");
    scanf("%s", Ptr_Input); // Read the input string from the user
    
    createNewString(Ptr_Input, Ptr_Output); // Call the function to create the new string

    printf("Original string: %s\n", Ptr_Input); // Print the original input string
    printf("New string: %s\n", Ptr_Output); // Print the new string

    return 0;
}

// Function to calculate the length of a string
int stringLength(const char *str) {
    int length = 0; // Initialize a variable to store the length of the string
    
    // Loop through each character in the string until the null terminator is encountered
    while (*str != '\0') {
        length++; // Increment the length for each character
        str++; // Move the pointer to the next character
    }
    
    return length; // Return the calculated length of the string
}

// Function to create a new string based on specific requirements
void createNewString(const char *input, char *output) 
{
    int len = stringLength(input); // Calculate the length of the input string
    // output[0]=*output=arr[size-1] =*(arr+(size-1));
    // output[1]=*(output+1)=' ';
    // output[2]=*(output+2)=arr[size-2]=*(arr+size-2);
    // output[3]=*(output+3)='\0'
    if (len >= 2) {
        *output       = *(input + (len - 1)); // Store the last character in the output
        *(output + 1) = ' '; // Store a space character at the second position in the output
        *(output + 2) = *(input + (len - 2)); // Store the second to last character in the output
        *(output + 3) = '\0'; // Null-terminate the output string
    } else {
        *output = '\0'; // Empty string if input has less than 2 characters
    }
}
/*
void createNewString(const char *input, char *output) {
    int len = stringLength(input);

    if (len >= 2) {
        output[0] = input[len - 1]; // Last character
        output[1] = ' '; // Space
        output[2] = input[len - 2]; // Second to last character
        output[3] = '\0'; // Null-terminate the string
    } else {
        output[0] = '\0'; // Empty string
    }
}

*/









#include <stdio.h>
int stringLength(const char *str) ;

int main() {
    char input[] = "love";
    char output[4]; // 3 characters + 1 null terminator

    createNewString(input, output);

    printf("Original string: %s\n", input);
    printf("New string: %s\n", output);

    return 0;
}
// Approach 1: using while loop and return variable hold length of the string
int stringLength(const char *str) 
{
    int length = 0; // Initialize a variable to store the length of the string

    // Loop through each character in the string until the null terminator is encountered
    while (*str != '\0') 
    {
        length++;   // Increment the length for each character
        str++;      // Move the pointer to the next character
    }

    return length; // Return the calculated length of the string
}



size=3
arr[size]="bat"
output ="t a"

b = arr[0] =arr[size-3]  = *(ptr+size-3)
a = arr[1] =arr[size-2]  = *(ptr+size-2)
t = arr[2] =arr[size-1]  = *(ptr+size-1) 





#include <stdio.h>


int getLength(char arr[]);

int main(){
    
    /*
    (7) Given a string, create a new string made up of its last two 
        letters, reversed and separated by a space, the word is “bat”. 
        Return string contains ”t a”
    */
    char str[20];
    
    printf("Enter String (Max 20 Character):");
    gets(str);
    
    int strLength = getLength(str);
    char lastTwo[3] = { *(str+(strLength-1)), ' ', *(str+(strLength-2)) };
    printf("Result:\n");
    
    int i;
    for(i = 0;i<3;i++){
        printf("%c",*(lastTwo+i));
    }
    
    
    return 0;
}
int getLength(char arr[]){
    
    int i,Length =0;
    
    for(i = 0;*(arr+i)!='\0';i++){
        Length++;
    }
    return Length;
}





#include<stdio.h>

/*
(7) Given a string, create a new string made up of its last two
letters, reversed and separated by a space, the word is “bat”.
Return string contains ”t a”.
*/

void special_func(char *ptr);

 int main()
{
    char array[100];

    printf("Enter a String  : ");
    gets(array);


    special_func(array);




    return 0;
}

void special_func(char *ptr)
{
    int len;
    for(len=0; ptr[len] != '\0' ;len++);
    printf("%c  %c",ptr[len-1],ptr[len-2]);

}
