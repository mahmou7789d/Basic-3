/* C Function to store information (name, id and grade) for 10
students in array of structures using pointers and another
function to print all the structures using pointers. */
# include <stdio.h>
#include "STD_TYPES.h"
typedef struct 
{
	f32 grade ;
	uint16 id;
	uint8 name [50];
	
	

}std;
void studentdata(std *class);
void printdata(std *class);
int main ()
{
	uint8 i ;
	std arr[10];
	
	studentdata(arr);
	printdata(arr);
	
}

void studentdata(std *class)
{
	uint16 i;
	for( i=0;i<10;i++)
	{
		printf("please enter student %d id ",i+1);
		a:
		if (scanf("%d",&(class+i)->id) !=1 )
		{
			printf(" invalid input , please re enter numbers only \n student %d ID : ",i+1);
			 fflush(stdin);
			 goto a;
		}
	    printf("\nplease enter student %d name: ",i+1);
        fflush(stdin);
		scanf("%[^\n]%*c",class[i].name);
		printf("\nplease enter student %d grade ",i+1);
		b:
		if ((scanf("%f",&(class+i)->grade) != 1)|| ((class+i)->grade>100) )
		{
			printf("please re enter the grade correctly  xx.xx<=100 \n student %d grade : ",i+1);
			 fflush(stdin);
			 goto b;
	    }
	    printf("\n");
	}
}
void printdata(std *class)
{
	uint16 i;
	for( i=0;i<10;i++)
	{
	printf("%s YOUR ID is %d , and your GRADE  = %.2f %% \n",(class+i)->name,(class+i)->id,(class+i)->grade) ;
	}
} 