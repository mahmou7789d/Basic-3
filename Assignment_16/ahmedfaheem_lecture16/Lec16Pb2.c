#include <stdio.h>
#include "STD_TYPES.h"

typedef struct{
	
	f32 real;
	f32 imag;
	
	
}complex;

void add(complex one,complex two);
void enter_check(f32 *data);
int main(){
	
	/*
	(2) C function to add two complex numbers by passing two 
        structures to a function and display the results.
	*/
	
	complex num_One;
	complex num_Two;
	
	printf("First Complex\n");
	printf("Enter real number: ");
    enter_check(&num_One.real);
    printf("Enter imaginary number: ");
    enter_check(&num_One.imag);
	
	printf("Second Complex\n");
	printf("Enter real number: ");
    enter_check(&num_Two.real);
    printf("Enter imaginary number: ");
    enter_check(&num_Two.imag);
	printf("sum of the two complex: ");
	add(num_One,num_Two);
	
	return 0;
}

	// check if not number
void enter_check(f32 *data){

	uint8 flag = 0;
	while(!flag){
		
		if(scanf("%f",data) == 1){
			flag = 1;
			
		}else{
			
			while(getchar() != '\n');  // clear buffer
			printf("Plz enter Number Again: ");
		}
	}
	
	
}

void add(complex one,complex two){
	
	float real, imag;
	
	real = one.real + two.real;
	imag = one.imag + two.imag;
	printf("%.2f+%.2fi",real, imag);

}

