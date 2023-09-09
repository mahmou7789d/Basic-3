#include <stdio.h>
#include "STD_TYPES.h"

	typedef struct{
		uint8 name[11];
		uint32 grade;
	}Student;

int FillStudents(Student *ptr);
void PrintStudents(Student *ptr);


int main(){//C Function to store information (name, id and grade) for 10
//students in array of structures using pointers and another function to print all the structures using pointers.
	
	Student arr[10];
	printf("Please Input All Students information:\n");
	if(FillStudents(arr) != -1){
		printf("\n------ Student Information ------\n");
		PrintStudents(arr);
	}
	
	return 0;
}

int FillStudents(Student *ptr){
	if(ptr != NULL){
		for(int i =0;i<10;i++){
			printf("Student %d Name: ",i+1);
			scanf("%s",(ptr+i)->name);
			printf("Student %d Grade: ",i+1);
			scanf("%d",&((ptr+i)->grade));
			if(((ptr+i)->grade) >100){
				printf("Invalid Grade!!");
				return -1;
			}
		}
	}
}

void PrintStudents(Student *ptr){
	if(ptr != NULL){
		for(int i =0;i<10;i++){
			printf("\nStudent ID: %d\n",i+1);
			printf("Student Name: %s\n",((ptr+i)->name));
			printf("Student Grade: %d\n",((ptr+i)->grade));
		}
	}
}
	
