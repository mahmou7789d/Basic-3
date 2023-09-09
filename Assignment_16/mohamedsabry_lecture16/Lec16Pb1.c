#include <stdio.h>
#include "STD_TYPES.h"


int main(){//C Program to store information (name, roll and marks) for a student using structure and display it.
	
	typedef struct{
		uint8 name[11];
		uint8 roll;
		uint32 mark;
	}Student;
	
	uint8 id=1;
	
	Student one={.roll = id++};
	
	printf("Please enter your name (Not more than 10 characters):\n");
	scanf("%10s",one.name);
	
	printf("Please enter your grade (Out of 100): ");
	if(scanf("%d",&one.mark) == 1){//check if user entered a number
		if(one.mark >100){// check if number not more that 100
			printf("Your grade cannot be more than 100!");
			return 0;
		}
		else{//Print the struct
			printf("\nYour name is %s\nYour Id is %d\nYour Grade is %d\n",one.name,one.roll,one.mark);
		}
	}
	else
		printf("Please enter a number!!");
	
	
	return 0;
}
