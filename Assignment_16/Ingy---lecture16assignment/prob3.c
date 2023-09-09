 /* C Function to calculate the difference between two time
periods using structures. */

# include <stdio.h>
# include "STD_TYPES.h"
typedef struct  
{
	uint16 h;
	uint16 m;
	uint16 s;
}time;

time btween2timeperiods ( time T1 , time T2 );

int main ()
{
	time t1 ,t2 ,result;
	printf("to calculate the difference between two time periods\n");
printf("enter the fist time period ");
	printf("\nhour:");
	a:
	if (( scanf("%hd",&t1.h) !=1 ) || (t1.h<0) || (t1.h>24))
	{ 
      
		   printf("invalid input, re enter the hour: ");
		   fflush(stdin);
		   goto a;
		   
	   
	}
	printf("\nminutes:");
	b:
	if( ( scanf("%hd",&t1.m) !=1 ) || (t1.m<0) || (t1.m>59))
	{ 
        
		   printf("invalid input, re enter the minutes: ");
		   fflush(stdin);
		   goto b;
		   
	   
	}
	printf("\nseconds:");
	c:
	if ( (scanf("%hd",&t1.s) !=1 )|| (t1.s<0) || (t1.s>59)) 
	{ 
       
		   printf("invalid input, re enter the seconds: ");
		   fflush(stdin);
		   goto c;
		   
	   
	}
 printf("enter the second time period ");
	printf("\nhour:");
	d:
	if (( scanf("%hd",&t2.h) !=1 ) || (t2.h<0) || (t2.h>24) )
	{ 
       
		   printf("invalid input, re enter the hour: ");
		   fflush(stdin);
		   goto d;
		   
	   
	}
	printf("\nminutes:");
	e:
	if ( (scanf("%hd",&t2.m) !=1 ) || (t2.m<0) || (t2.m>59) )
	{ 

		   printf("invalid input, re enter the minutes: ");
		   fflush(stdin);
		   goto e;
		   
	}
	printf("\nseconds:");
	f:
	if ( (scanf("%hd",&t2.s) !=1 ) || (t2.s<0) || (t2.s>59) )
	{ 

		   printf("invalid input, re enter the seconds: ");
		   fflush(stdin);
		   goto f;
		   
	   
	}
result = btween2timeperiods (  t1 , t2 );
printf("\nthe difference between two time periods hh:mm:ss = %d:%d:%d  ",result.h,result.m,result.s);

}
	
time btween2timeperiods ( time T1 , time T2 )
{
	time res;
	if (T1.h>T2.h)
	{
	res.h = T1.h - T2.h ;
	}
	else
	{
	res.h = T2.h - T1.h	;
	}
	if (T1.m>T2.m)
	{
	res.m = T1.m - T2.m ;
	}
	else
	{
	res.m = T2.m - T1.m	;
	}
	if (T1.s>T2.s)
	{
	res.s = T1.s - T2.s ;
	}
	else
	{
	res.s = T2.s - T1.s	;
	}
	
	return res;
}
