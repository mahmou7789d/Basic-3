/* program to add two complex numbers */
# include <stdio.h>
# include "STD_TYPES.h"
typedef struct number
{
	float Rnum;
	float imgnum;
}number;

number  sumOftwoCompNum(number num1, number num2);

int main ()
{
    number n1,n2,result;
	printf("please enter the 1st complex num : \n");
	printf("real part : ");
	x:
	
	if (scanf("%f",&n1.Rnum) != 1 )
	{
		printf("\ninvlid input , please enter a new number  ");
		fflush(stdin);
		goto x;
	}
	printf("imaginary part : ");
	y:
	if (scanf("%f", &n1.imgnum)!= 1)
		{
		printf("\ninvlid input , please enter a new number  ");
		fflush(stdin);

		goto y;
	}
	printf("\n");
	printf("please enter the 2nd complex num : \n");
	printf("real part : ");
	z:
	if (scanf("%f",&n2.Rnum)!=1)
	{
		printf("\ninvlid input , please enter a new number  ");
		fflush(stdin);

		goto z;
	}
	printf("imaginary part : ");
	f:
	if (scanf("%f", &n2.imgnum)!= 1)
		{
		printf("\ninvlid input , please enter a new number ");
		fflush(stdin);

		goto f;
	}
	printf("\n");

    result = sumOftwoCompNum(n1,n2); 
    printf(" ( %.3f + ( %.3fi)) + (%.3f + ( %.3fi)) = %.3f +( %.3fi)",n1.Rnum,n1.imgnum,n2.Rnum,n2.imgnum,result.Rnum,result.imgnum);
	
}




number sumOftwoCompNum(number num1, number num2)
{
	number res ;

res.Rnum = num1.Rnum + num2.Rnum ;
res.imgnum = num1.imgnum + num2.imgnum ;
	return res;
}