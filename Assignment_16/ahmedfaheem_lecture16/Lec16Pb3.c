#include <stdio.h>
#include "STD_TYPES.h"


typedef struct{
	uint32 hour;
	uint32 minute;
	uint32 second;
}time;

void enter_check(uint32 *data);

void sub(time one,time two);

void convert_positive(sint32 *ptr);
int main(){
	
	
	/*
	(3) C Function to calculate the difference between two time periods using structures.
	*/
	
	time time_1;
	time time_2;
	
	printf("Enter Times on 24-Hour \n");
	
	printf("First Period\n");
	printf("Enter Hour: ");
	enter_check(&time_1.hour);
	printf("Enter Minutes: ");
	enter_check(&time_1.minute);
	printf("Enter Seconds: ");
	enter_check(&time_1.second);
	
	
	printf("\nSecond Period\n");
	printf("Enter Hour: ");
	enter_check(&time_2.hour);
	printf("Enter Minutes: ");
	enter_check(&time_2.minute);
	printf("Enter Seconds: ");
	enter_check(&time_2.second);
	
	
	printf("Difference between two time periods \n");
	sub(time_1, time_2);
	return 0;
}

void enter_check(uint32 *data){

	uint8 flag = 0;
	while(!flag){
		
		if(scanf("%d",data) == 1){
			flag = 1;
			
		}else{
			
			while(getchar() != '\n');  // clear buffer
			printf("Plz enter Again: ");
		}
	}
	
	
}

void convert_positive(sint32 *ptr){
	// convert to positive is < 0
	if(*ptr < 0){
		*ptr *= -1;
	}
	
}


void sub(time one,time two){
	
	
	sint32 h, m, s;
	
	h = one.hour - two.hour;
	m = one.minute - two.minute;
	s = one.second - two.second;
	
	convert_positive(&h);
	convert_positive(&m);
	convert_positive(&s);
	
	printf("%dH: %dM : %dS",h, m, s);
}

