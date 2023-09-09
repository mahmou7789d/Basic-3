#include <stdio.h>
#include "STD_TYPES.h"

	typedef struct{
		f32 real;//real part of complex number
		f32 img;//Imaginary part of complex number
	}Complex_Number;
	
	Complex_Number AddComplex(Complex_Number obj1, Complex_Number obj2);
	
int main(){//C function to add two complex numbers by passing two structures to a function and display the results.
	
	Complex_Number obj1;
	Complex_Number obj2;
	
	printf("Enter 2 Compelx Numbers:\nComplex 1 Real: ");
	scanf("%f",&obj1.real);
	printf("Complex 1 Imaginary: ");
	scanf("%f",&obj1.img);
	
	printf("Complex 2 Real: ");
	scanf("%f",&obj2.real);
	printf("Complex 2 Imaginary: ");
	scanf("%f",&obj2.img);
	
	Complex_Number obj3 = AddComplex(obj1,obj2);
	printf("Addition of these Complex number:\nResult = %.3f ",obj3.real);
	if(obj3.img >=0)
		printf("+ %.3f",obj3.img);
	else
		printf("- %.3f",(obj3.img*-1));
	
	
	return 0;
}

Complex_Number AddComplex(const Complex_Number obj1, const Complex_Number obj2){
	
	Complex_Number res;
	
	res.real = obj1.real + obj2.real;
	res.img = obj1.img + obj2.img;
	
	return res;
}