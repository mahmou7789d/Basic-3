/* program to store student data(name,roll and marks)And display it */
#include <stdio.h>
#include "STD_TYPES.h"
typedef struct 
{
	uint8 stdname[50];
	uint16 phmark ;
	uint16 chmark ;
	uint16 langmark;
}std;
int main ()
{
	std student1; //creating new object in   std struct
	//printf("%d",scanf("%[^\n]%*c",&student1.stdname));
	printf("Please enter your name : ");
	scanf("%[^\n]%*c",&student1.stdname);
	fflush(stdin);
	printf("\nPlease enter your mark at physics  : ");
	b:
	if(scanf("%d",&student1.phmark) != 1)
	{
		printf("\n invalid input , please re enter your mark at physics : ");
		fflush(stdin);
		goto b;
	}
	printf("\nPlease enter your mark at chemistry  : ");
	c:
	if(scanf("%d",&student1.chmark) !=1 )
	{
		printf("\n invalid input , please re enter your mark at chemistry : ");
		fflush(stdin);
		goto c;
	}
	printf("\nPlease enter your mark at language1  : ");
	d:
	if(scanf("%d",&student1.langmark) != 1)
	{
		printf("\n invalid input , please re enter your mark at language1 : ");
		fflush(stdin);
		goto d;
	}
	uint16 degree = ((student1.phmark + student1.chmark + student1.langmark)/ 3);
	printf("\nyour name is %s and your total degree = %d%%",student1.stdname,degree);
	
	
}