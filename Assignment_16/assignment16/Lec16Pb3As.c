#include<stdio.h>
#include<string.h>
#include"STD_TYPES.h"
typedef struct 
{
    uint16 hours,minutes,seconds;
}TwoPeriod;
void DifferenceBetweenTwoPeriod(TwoPeriod StartTime ,TwoPeriod StopTime,TwoPeriod * diff);
TwoPeriod StartTime, StopTime, diff;
int main()
{
    printf("Enter the start time. \n\n");
   printf("Enter hours, minutes and seconds: ");
   if(scanf("%d", &StartTime.hours) ==1 && scanf("%d",&StartTime.minutes)==1 && scanf("%d",&StartTime.seconds)==1)
   {
     /*do nothing, continue*/
   }
   else
   {
    printf("Invalid_Input...\n");
    return 0;
   }

   printf("Enter the stop time. \n\n");
   printf("Enter hours, minutes and seconds: ");
   if(scanf("%d", &StopTime.hours) ==1 && scanf("%d",&StopTime.minutes)==1 && scanf("%d",&StopTime.seconds)==1)
   {
     /*do nothing, continue*/
   }
   else
   {
    printf("Invalid_Input...\n");
    return 0;
   }

   // Difference between start and stop time
   DifferenceBetweenTwoPeriod(StartTime, StopTime,  &diff);
   printf("\nTime Difference: %d:%d:%d - ", StopTime.hours,StopTime.minutes,StopTime.seconds);
   printf("%d:%d:%d ", StartTime.hours,StartTime.minutes,StartTime.seconds);
   printf("= %d:%d:%d\n",diff.hours,diff.minutes,diff.seconds);
   return 0;

}
void DifferenceBetweenTwoPeriod(TwoPeriod StartTime ,TwoPeriod StopTime,TwoPeriod *diff)
{
  if(StopTime.seconds > StartTime.seconds)
  {
    diff->seconds = StopTime.seconds - StartTime.seconds;
  }
  else
  {
   diff->seconds = StartTime.seconds - StopTime.seconds;

  }
   
  if(StopTime.minutes > StartTime.minutes)
  {
    diff->minutes = StopTime.minutes - StartTime.minutes;
  }
  else
  {
    diff->minutes = StartTime.minutes - StopTime.minutes;
  }
  
  diff->hours = StopTime.hours - StartTime.hours;
}


