
/*
(4) C Function to store information (name, id and grade) for 10 
students in array of structures using pointers and another 
function to print all the structures using pointers

*/

#include "STD_TYPES.h"

#include <stdio.h>

typedef struct
{
	uint8 name[100];
	uint32 id;
	uint32 grade;
	
}Student;

void StoreInformationOfStudent(Student*,uint32);
void printStudentStructure(Student*,uint32);

int main(void)
{
	Student Arr[10];
	
	StoreInformationOfStudent(Arr,10);
	printStudentStructure(Arr,10);
	return 0;
}


void StoreInformationOfStudent(Student* students, uint32 size)
{
	uint32 EnterGradeAgain=0;
	
	for(uint32 i=0; i<size; i++)
	{
		fflush(stdin);
		printf("Enter name of Student %d: ",i+1);
		fgets((students+i)->name,100,stdin);
		
		printf("Enter id of Student %d (Must be number): ",i+1);
		scanf("%d",&((students+i)->id));
		
		do{
			EnterGradeAgain=0;
		printf("Enter grade Student %d(Must be number): ",i+1);
		
		scanf("%d",&((students+i)->grade));
		if((students+i)->grade>100)
		{
			printf("\nPlease enter the grade lessthan or equal 100\n\n");
			EnterGradeAgain=1;
		}
		}while(EnterGradeAgain);
		printf("\n-----------------\n\n");
		
	}
	
	
}


void printStudentStructure(Student* students,uint32 size)
{
	printf("\n--------------- printing --------------------------\n\n");
	for(uint32 i=0; i<size; i++)
	{
		printf("Student %d: \n",i+1);
		printf("name: %s\n",(students+i)->name);
		printf("id: %d\n",(students+i)->id);
		printf("grade: %d",(students+i)->grade);
		
		printf("\n-----------------\n\n");
	}
	
	
}