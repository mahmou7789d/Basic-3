#include<stdio.h>
#include<string.h>
#include"STD_TYPES.h"

typedef struct 
{
    f32 real;
    f32 imaginary;
}complex;

complex add(complex x,complex y);
complex x,y,result;
int main()
{
    
    printf("____The Real Number____\n\n");
    printf("Enter the two Real number: \n");
    if((scanf("%f",&x.real) == 1) && (scanf("%f",&y.real) == 1))
    {
        /*Do nothing , Continue*/
       
    }
    else
    {
        printf("Invalid_RealNumber ");
        return 0;
    }
     printf("____The Complex Number____\n\n");
     printf("Enter the two imaginary number: \n");
     if(scanf("%f",&x.imaginary) == 1 && scanf("%f",&y.imaginary) == 1)
    {
        /*Do nothing , Continue*/
        
    }
    else
    {
        printf("Invalid_ComplexNumber ");
        return 0;
    }
    result = add(x,y);
    printf("Sum of : %.2f+%.2fi ",result.real,result.imaginary);
    return 0;

}
complex add(complex x,complex y)
{
    complex Temp;
    Temp.real= x.real+y.real;
    Temp.imaginary=x.imaginary+y.imaginary;
    return (Temp);
}