#include <stdio.h>
#include "STD_TYPES.h"

typedef struct{
	
	uint32 id;
	uint8 name[10];
	uint32 grade;
	
}student;

void data_Entery(student *std, uint32 size);
void enter_check(sint32 *data);
void data_Display(student *std, uint32 size);

int main(){
	
  /*
  (4) C Function to store information (name, id and grade) for 10 
      students in array of structures using pointers and another 
      function to print all the structures using pointers
  
  */

  student std[10];
  data_Entery(std,10);
  data_Display(std,10);
  

	return 0;
}

void enter_check(sint32 *data){

	uint8 flag = 0;
	while(!flag){
		
		if(scanf("%d",data) == 1){
			if(*data < 0){ // if data is negative value
				flag = 0;
				printf("Plz enter Again: ");
			}else{
			flag = 1;
			}
		}else{
			
			while(getchar() != '\n');  // clear buffer
			printf("Plz enter Again: ");
		}
	}
	
	
}


void data_Entery(student *std, uint32 size){
	
	uint32 counter = 0;
	
	for(counter = 0; counter <size;counter++){
		printf("Enter Data Of Student ID:%d \n", counter +1);
		(std + counter)->id = counter +1;
		printf("Enter Student Name: ");
		scanf("%s",(std + counter)->name); /*(std + counter)->name is array so that pass address*/ 
		printf("Enter Grade: ");
		enter_check(&((std + counter)->grade) );
		printf("-----------------------------\n");

	}
	
}

void data_Display(student *std, uint32 size){
	uint32 counter = 0;
	printf("-----------------------------\n");
	for(counter = 0; counter <size;counter++){
		printf("Student ID:%d \n", (std + counter)->id);
		printf("Student Name: %s \n",(std + counter)->name);
		printf("Grade: %d \n",(std + counter)->grade);
		printf("-----------------------------\n");
	}
	
	
	
}


