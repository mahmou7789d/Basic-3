
//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................222222222.....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................222222222222....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................22222222222222...
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................222222222222222..
//.......TTTTTT.................................................................kkkkkk...................222222222222222..
//.......TTTTTT.................................................................kkkkkk.................. 222222...222222..
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk........ 22222....222222..
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk...................222222..
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk....................222222..
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk....................222222...
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk....................2222222...
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk....................2222222....
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk...................2222222.....
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk..................2222222......
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk................2222222.......
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk..............2222222........
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk.............2222222.........
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk...........2222222..........
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk...........222222222222222..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk......... 222222222222222..
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk......... 222222222222222..
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk........ 222222222222222..
//........................................................................................................................
/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Pointers
Name        :   Assignment 12 - Lecture 12 - Problem number 2
Program     :   C Function to act as simple calculator 
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (2) Write a C Function that returns the addition or subtraction 
					or multiplication or division for two numbers. The function 
					should take the required operation and two numbers as 
					arguments. It also should check that the input operation is one 
					of those operation that mentioned before and if not it should 
					return error. The function should be implemented using switch case 

+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/


#include <stdio.h>
/* declration of Small_Cal function */
int Small_Cal(char opreation,int num1,int num2);

int main()
{
	char opreation;
	int result;
	int Number1;
	int Number2;	
	
	/* ask user to enter Number1 */
	printf("\nPlease Enter number1   : ");
	scanf("%d", &Number1);
	
	/* ask user to enter Number2 */
	printf("\nPlease Enter number2   : ");
	scanf("%d", &Number2);
	
	/* ask user to enter opreation */
	printf("\nPlease Enter opreation : ");
	scanf(" %c", &opreation);
	
	/* call function to do opreation on numbers */
	/* store result from function to vatiable */
	result=Small_Cal(opreation,Number1,Number2);
	
	/* if to check if opreation done correct or not */ 
	if(result)
	{
		/* print the result of opreation */
	    printf("\nThe result of (%i) %c (%i)  = %i",Number1,opreation,Number2,result);
	}
	else
	{
		/* do Nothing */
	}
		
	return 0; 
}

/* defination of function to get addition or subtraction or multiplication or division for two numbers. */ 
int Small_Cal(char opreation,int num1,int num2)
{
	int Local_result; 
	switch(opreation)
	{
		
		case '+' : Local_result=num1+num2;break;
		case '-' : Local_result=num1-num2;break;
		case '*' : Local_result=num1*num2;break;
		case '/' : 
		if(0==num2)
		{
			printf("\n Errorro Divde by zero ");
			return 0;
		}
		else
		{
		  Local_result=num1/num2;break;	
		}
		default:printf("\n Errorro Enter Vaild opreation  ");break;
		
		
	}
	return Local_result ;
	
}