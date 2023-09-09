#include <stdio.h>
#include "STD_TYPES.H"

	typedef struct{
		uint32 hrs;
		uint32 min;
		uint32 sec;
	}Time;

Time Time_Diff(Time obj1, Time obj2);

int Check_Time(Time t);//this function checks the validity of the input time


int main(){//C Function to calculate the difference between two time periods using structures
	
	Time t1,t2,t3;
	
	printf("\nEnter 2 Time Periods\nTime 1 hours: ");
	scanf("%d",&t1.hrs);
	printf("Time 1 minutes: ");
	scanf("%d",&t1.min);
	printf("Time 1 seconds: ");
	scanf("%d",&t1.sec);
	
	printf("Time 2 hours: ");
	scanf("%d",&t2.hrs);
	printf("Time 2 minutes: ");
	scanf("%d",&t2.min);
	printf("Time 2 seconds: ");
	scanf("%d",&t2.sec);
	
	if ((Check_Time(t1) != -1) && (Check_Time(t2) != -1)){//check if both time periods are valid
		t3 = Time_Diff(t1,t2);
		printf("\nTime Difference:\n%d Hours %d Minutes %d Seconds\n",t3.hrs,t3.min,t3.sec);
	}	

	return 0;
}

Time Time_Diff(Time obj1, Time obj2){
	Time res;
	sint8 tmp;
	//calculate seconds diff
	if(obj2.sec < obj1.sec){// if difference in seconds is less than 1 minute decrement the minutes
		if(obj2.min > obj1.min)
			obj2.min--;
		tmp = 60 -(obj1.sec - obj2.sec);
	}
	else
		tmp = obj2.sec - obj1.sec;
	if(tmp <0)
		tmp*= -1;
	res.sec = (unsigned)tmp;
	
	//calculate the minutes diff
	if(obj2.min < obj1.min){// if difference in minutesd is less than 1 hour decrement the hours
		if(obj2.hrs > obj1.hrs)
			obj2.hrs--;
		tmp= 60-(obj1.min - obj2.min);
	}
	else
		tmp= obj2.min - obj1.min;
	if(tmp <0)
		tmp*= -1;
	res.min = (unsigned) tmp;
	
	//calculate the hours diff
	tmp = obj2.hrs - obj1.hrs;
	if(tmp <0)
		tmp*= -1;
	res.hrs = (unsigned) tmp;
	
	return res;
}

int Check_Time(Time t){
	if(t.sec >=60){
		printf("Invalid Time!!");
		return -1;
	}
	if(t.min>=60){
		printf("Invalid Time!!");
		return -1;
	}
	if(t.hrs >=24){
		printf("Invalid Time!!");
		return -1;
	}
	
}