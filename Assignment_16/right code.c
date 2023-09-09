#include <stdio.h>
#include "../../STD_TYPES.h"

typedef struct
{
	uint32 hours;
	uint32 minutes;
	uint32 seconds;
}period1;

typedef struct
{
	uint32 hours;
	uint32 minutes;
	uint32 seconds;
}period2;

uint32 hours,minutes,seconds;

void diff_2periods(period1 time1,period2 time2);


int main()
{
	period1 time1;
	period2 time2;
	
	printf("enter hours (period 1) : ");
	scanf("%d",&time1.hours);
	printf("enter minutes (period 1) : ");
	scanf("%d",&time1.minutes);
	while(time1.minutes>60)
	{
		printf("invalid input, try again\n");
		printf("enter minutes (period 1) : ");
		scanf("%d",&time1.minutes);
		
	}
	printf("enter seconds (period 1) : ");
	scanf("%d",&time1.seconds);
	while(time1.seconds>60)
	{
		printf("invalid input, try again\n");
		printf("enter seconds (period 1) : ");
		scanf("%d",&time1.seconds);
		
	}
	
	printf("enter hours (period 2) : ");
	scanf("%d",&time2.hours);
	printf("enter minutes (period 2) : ");
	scanf("%d",&time2.minutes);
	while(time2.minutes>60)
	{
		printf("invalid input, try again\n");
		printf("enter minutes (period 2) : ");
		scanf("%d",&time2.minutes);
		
	}
	printf("enter seconds (period 2) : ");
	scanf("%d",&time2.seconds);
	while(time2.seconds>60)
	{
		printf("invalid input, try again\n");
		printf("enter seconds (period 2) : ");
		scanf("%d",&time2.seconds);
		
	}
	
	diff_2periods(time1,time2);
	
	printf("\ndiff between 2 periods = %d hours , %d minutes , %d seconds\n",hours,minutes,seconds);
	
	printf("\n******************************************************************************************\n");
}

void diff_2periods(period1 time1,period2 time2)
{
	
	uint32 totaltime1=(time1.hours*3600)+(time1.minutes*60)+time1.seconds;
	uint32 totaltime2=(time2.hours*3600)+(time2.minutes*60)+time2.seconds;
	uint8 flag = totaltime1>=totaltime2?1:0;
	if(flag==1)
	{
		hours = time1.hours - time2.hours;
		minutes = time1.minutes - time2.minutes;
		if(time1.minutes < time2.minutes)
		{
			hours -=1;
			minutes = (time1.minutes +60) - time2.minutes;
		}
		seconds = time1.seconds - time2.seconds;
		if(time1.seconds < time2.seconds)
		{
			minutes -=1;
			seconds = (time1.seconds +60) - time2.seconds;
		}
	}
	else if(flag==0)
	{
		hours = time2.hours - time1.hours;
		minutes = time2.minutes - time1.minutes;
		if(time2.minutes < time1.minutes)
		{
			hours -=1;
			minutes = (time2.minutes +60) - time1.minutes;
		}
		seconds = time2.seconds - time1.seconds;
		if(time2.seconds < time1.seconds)
		{
			minutes -=1;
			seconds = (time2.seconds +60) - time1.seconds;
		}
	}
	
}