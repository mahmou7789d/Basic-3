#include <stdio.h>
#include <stdlib.h>
#include "std_type.h"

typedef struct{
uint8 hours;
uint8 minutes;
uint8 second;
}time;

int calctime(time t1,time t2);


int main()
{
 time t1={6,30,45};
 time t2={4,25,30};
 uint16 result=calctime(t1,t2);
 uint8 hs=result/3600;
 uint8 ms=(result%3600)/60;
 uint8 sec=result%60;
    printf("the diffrence :%d hours, %d mintues ,%d second",hs,ms,sec);


    return 0;
}
int calctime(time t1,time t2){

uint16 total_s1=t1.hours*3000+t1.minutes+60+t1.second;
uint16 total_s2=t2.hours*3000+t2.minutes+60+t2.second;
uint16 deffrence =total_s1-total_s2;
return deffrence;
}




/*
****************************************************************************************************************
* @file           : Lec16Pb3.c
* @author         : Amr Mohamed (amrnassareng@gmail.com)
* @brief       : Contains a Function to calculate the difference between two time periods using structures.
****************************************************************************************************************
*/

#include <stdio.h>
#include "STD_TYPES.h"

typedef struct{
    uint8 hours;
    uint8 minutes;
    uint8 seconds;
}timePeriod;

timePeriod calcTimeDiff(timePeriod , timePeriod );

int main() {
    timePeriod timeOne, timeTwo, timeDiff;
   //INPUT
   //INVALID INPUT HANDLING
   printf("Enter Time 1 [hr min sec]: ");
   if(scanf("%hhu%hhu%hhu",&timeOne.hours,&timeOne.minutes,&timeOne.seconds)!=3 || timeOne.hours>23 || timeOne.minutes>59 ||timeOne.seconds>59)
   {
      printf("Invalid Time!\n");
      return -1;
   }
   //INVALID INPUT HANDLING
   printf("Enter Time 2 [hr min sec]: ");
   if(scanf("%hhu%hhu%hhu",&timeTwo.hours,&timeTwo.minutes,&timeTwo.seconds)!=3 || timeTwo.hours>23 || timeTwo.minutes>59 ||timeTwo.seconds>59)
   {
      printf("Invalid Time!\n");
      return -1;
   }
   //FUNCTION RETURN ASSIGNMENT
   timeDiff=calcTimeDiff(timeOne,timeTwo);
    // Display the result
    printf("Time Difference: %hhu hours, %hhu minutes, %hhu seconds\n", timeDiff.hours, timeDiff.minutes, timeDiff.seconds);

    return 0;
}

timePeriod calcTimeDiff(timePeriod t1, timePeriod t2) {
   
      timePeriod diff;
   
    uint32 totalTime1 = (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;
    uint32 totalTime2 = (t2.hours * 3600) + (t2.minutes * 60) + t2.seconds;
   
   uint32 diffTime = (totalTime1 > totalTime2) ? (totalTime1 - totalTime2) : (totalTime2 - totalTime1);

    diff.hours = diffTime / 3600;
    diff.minutes = (diffTime % 3600) / 60;
    diff.seconds = diffTime % 60;

    return diff;
}








#include <stdio.h>

// Define a structure to represent a time period
struct TimePeriod {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct TimePeriod timeDifference(struct TimePeriod start, struct TimePeriod end) {
    struct TimePeriod diff;

    // Calculate the difference for each component (hours, minutes, seconds)
    diff.seconds = end.seconds - start.seconds;
    diff.minutes = end.minutes - start.minutes;
    diff.hours = end.hours - start.hours;

    // Handle negative seconds and minutes by borrowing from the next higher unit
    if (diff.seconds < 0) {
        diff.seconds += 60;
        diff.minutes--;
    }
    if (diff.minutes < 0) {
        diff.minutes += 60;
        diff.hours--;
    }

    return diff;
}

int main() {
    struct TimePeriod startTime, endTime, timeDiff;

    // Input start time
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Input end time
    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the time difference
    timeDiff = timeDifference(startTime, endTime);

    // Display the difference
    printf("Time difference: %d hours, %d minutes, %d seconds\n", timeDiff.hours, timeDiff.minutes, timeDiff.seconds);

    return 0;
}











#include <stdio.h>
#include "STD_TYPES.h"

typedef struct {
    uint32 seconds;
    uint32 minutes;
    uint32 hours;
} Time;

void difference_between_two_time(const Time *start, const Time *stop, Time *diff);

int main() {
    Time StartTime, StopTime, difference;

    printf("Enter the start time:\n");
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &StartTime.hours, &StartTime.minutes, &StartTime.seconds);

    printf("Enter the stop time:\n");
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &StopTime.hours, &StopTime.minutes, &StopTime.seconds);

    difference_between_two_time(&StartTime, &StopTime, &difference);

    printf("\nTime Difference: %02d:%02d:%02d - ", StartTime.hours, StartTime.minutes, StartTime.seconds);
    printf("%02d:%02d:%02d = %02d:%02d:%02d\n", StopTime.hours, StopTime.minutes, StopTime.seconds,
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}

void difference_between_two_time(const Time *start, const Time *stop, Time *diff) {
    diff->seconds = start->seconds - stop->seconds;
    diff->minutes = start->minutes - stop->minutes;
    diff->hours = start->hours - stop->hours;

    if (diff->seconds < 0) {
        diff->seconds += 60;
        diff->minutes--;
    }

    if (diff->minutes < 0) {
        diff->minutes += 60;
        diff->hours--;
    }
}






#include <stdio.h>

typedef struct {
    unsigned char hours, mins, secs;
} time;

time different_periods(time period1, time period2);

int main() {
    time period1;
    time period2;
    time different;

    printf("Please enter the bigger time period in scale of (24 hours):\nenter its hours, minutes, seconds: ");
    scanf("%hhu %hhu %hhu", &period1.hours, &period1.mins, &period1.secs);

    printf("Please enter the 2nd time period in scale of (24 hours):\nenter its hours, minutes, seconds: ");
    scanf("%hhu %hhu %hhu", &period2.hours, &period2.mins, &period2.secs);

    different = different_periods(period1, period2);

    printf("The difference between the two time periods is:\n");
    printf("%hhu:%hhu:%hhu\n", different.hours, different.mins, different.secs);

    return 0;
}

time different_periods(time period1, time period2) {
    time different;

    while (period1.secs > period2.secs) {
        period2.mins--;
        period2.secs += 60;
    }
    different.secs = period2.secs - period1.secs;

    while (period1.mins > period2.mins) {
        period2.hours--;
        period2.mins += 60;
    }
    different.mins = period2.mins - period1.mins;

    if (period2.hours < period1.hours) {
        period2.hours += 24; 
    }

    different.hours = period2.hours - period1.hours;

    return different;
}






#include <stdio.h>
Time difference_between_two_time(const Time *start, const Time *end, Time *Timediff);
typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

int main() {
    Time period1,period2;
    printf("Enter the start time:\n");
    printf("Enter hours, minutes, and seconds: ");
    
                    if(!(Inputperiod2(&period2)))
                    {
                        difference_between_two_time();
                    }
                    else
                        return 1;
                }
    scanf("%d %d %d", &StopTime.hours, &StopTime.minutes, &StopTime.seconds);
    return 0;
}

int Inputperiod(Students *obj)
{
    printf("Enter hours, minutes, and seconds: ");
    if(scanf("%d %d %d", &obj.hours, &obj.minutes, &obj.seconds)!= 3)
    {
        printf("Invalid Inputs");
        return 1;
    }
    else
    {
        if(obj.hours < 0 && obj.hours > 24)
        {
            printf("Error");
            return 1;
        }
        else
        {
            if(obj.minutes < 0 && obj.minutes > 60)
            {
                printf("Error");
                return 1;
            }
            else
            {
                if(obj.seconds < 0 && obj.seconds > 60)
                {
                    printf("Error");
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
        }

    }
    
}



void VoidtimeDifference(const Time *start, const Time *stop, Time *diff)
{
    diff->seconds = start->seconds - stop->seconds;
    diff->minutes = start->minutes - stop->minutes;
    diff->hours   = start->hours   - stop->hours;

    if (diff->seconds < 0)
    {
        diff->seconds += 60;
        diff->minutes--;
    }
    if (diff->minutes < 0)
    {
        diff->minutes += 60;
        diff->hours--;
    }
}




// Function to calculate the difference between two time periods
Time timeDifference(Time start,Time end)
{
    Time diff;
    diff.seconds = end.seconds - start.seconds;
    diff.minutes = end.minutes - start.minutes;
    diff.hours   = end.hours   - start.hours;

    // Handle negative seconds and minutes by borrowing from the next higher unit
    if (diff.seconds < 0)
    {
        diff.seconds += 60;
        diff.minutes--;
    }
    if (diff.minutes < 0)
    {
        diff.minutes += 60;
        diff.hours--;
    }

    return diff;
}


void VoidtimeDifference(const Time *start, const Time *stop, Time *diff)
{
    while (startstart.secs > stop.secs) {
      stop.mins--;
      stop.secs += 60;
   }
   different -> secs = stop.secs - start.secs;
   while (start.mins > stop.mins) {
      stop.hours--;
      stop.mins += 60;
   }
   different -> mins = stop.mins - start.mins;
   different -> hours = stop.hours - start.hours;
}
