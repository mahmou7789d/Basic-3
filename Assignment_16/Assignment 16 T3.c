//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk......................33333333......
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.....................3333333333.....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk....................333333333333....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk...................33333333333333...
//.......TTTTTT.................................................................kkkkkk...................33333333333333...
//.......TTTTTT.................................................................kkkkkk...................333333..333333...
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk.........33333...333333...
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk..................333333...
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk.................3333333....
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk.................33333333....
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk..................3333333.....
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk...................333333333...
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk...................333333333...
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk.......................333333..
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk......................333333..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk........... 33333....333333..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk........... 333333...333333..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk...........333333333333333..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk...........33333333333333...
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk...........3333333333333...
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk...........333333333333....
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk............33333333......
//........................................................................................................................

/*
==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Structure
Name        :   Assignment 16 - Lecture 16 - Problem number 3
Program     :   C Function to calculate the difference between two time periods using structures.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (3) C Function to calculate the difference between two time periods using structures.

+
==========================================================================================
*/

/*-------------------------          Approach 1                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Define a structure to represent time
typedef struct {
    int hours;
    int minutes;
    int seconds;
} time;

// Function declarations
time difference(time start_time, time stop_time); // Function to calculate time difference
int check(time t); // Function to check if a time structure is valid
time read(); // Function to read a time from user input

int main() {
    // Declare variables to store start and stop times
    time start, stop;

    // Prompt the user to enter the start time and read it
    printf("Enter the start time (hh:mm:ss): ");
    start = read();

    // Validate the start time
    while (!check(start)) {
        printf("Invalid start time. Please enter again: ");
        start = read();
    }

    // Prompt the user to enter the stop time and read it
    printf("Enter the stop time (hh:mm:ss): ");
    stop = read();

    // Validate the stop time
    while (!check(stop)) {
        printf("Invalid stop time. Please enter again: ");
        stop = read();
    }

    // Calculate the time difference between start and stop
    time diff;
    diff = difference(start, stop);

    // Display the time difference
    printf("The difference is %d hours, %d minutes, and %d seconds.\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
// Function to calculate the difference between two time structures
time difference(time start_time, time stop_time) 
{
    // Declare a variable to store the result
    time time_difference;

    // Convert the times to seconds
    int start_seconds = start_time.hours * 3600 + start_time.minutes * 60 + start_time.seconds;
    int stop_seconds = stop_time.hours * 3600 + stop_time.minutes * 60 + stop_time.seconds;

    // Calculate the absolute difference in seconds
    int seconds_difference = stop_seconds > start_seconds ? stop_seconds - start_seconds : start_seconds - stop_seconds;

    // Calculate hours, minutes, and seconds from the total seconds
    time_difference.hours = seconds_difference / 3600;
    time_difference.minutes = (seconds_difference % 3600) / 60;
    time_difference.seconds = (seconds_difference % 3600) % 60;

    return time_difference;
}

// Function to check if a time structure is valid
int check(time t) {
    if (t.hours < 0 || t.hours > 23) 
    {
        return 0; // Return 0 for false (hours out of range)
    }

    if (t.minutes < 0 || t.minutes > 59) 
    {
        return 0; // Return 0 for false (minutes out of range)
    }

    if (t.seconds < 0 || t.seconds > 59) 
    {
        return 0; // Return 0 for false (seconds out of range)
    }

    return 1; // Return 1 for true (valid time)
}

time read() {
    time t;
    int valid_input;

    // Use a loop to repeatedly prompt for input until it's valid
    do {
        valid_input = scanf("%d:%d:%d", &t.hours, &t.minutes, &t.seconds);

        // Check if all components (hours, minutes, and seconds) were successfully read
        if (valid_input == 3) {
            // Additional validation if needed
            if (check(t)) {
                break;  // Input is valid, exit the loop
            } else {
                printf("Invalid time format. Please enter again (hh:mm:ss): ");
            }
        } else {
            printf("Invalid input format. Please enter again (hh:mm:ss): ");
            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
        }
    } while (1);  // Infinite loop until valid input is provided

    return t;
}

/*-------------------------          Approach 3                  ------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>

// Define a structure to represent a period of time with hours, minutes, and seconds.
typedef struct
{
	int hours;
	int minutes;
	int seconds;
} period1;

// Declare global variables to store the difference between two time periods.
int hours, minutes, seconds;

// Function prototype to calculate the difference between two time periods.
void diff_2periods(period1 time1, period1 time2);

int main()
{
	period1 time1={0,0,0};
	period1 time2={0,0,0};

	// Input for the first time period (time1).
	printf("Enter hours (period 1): ");
	while (time1.hours > 24)
	{
		printf("Invalid input, try again\n");
		printf("Enter hours (period 1): ");
		scanf("%d", &time1.hours);
	}
	printf("Enter minutes (period 1): ");
	scanf("%d", &time1.minutes);
	while (time1.minutes > 60)
	{
		printf("Invalid input, try again\n");
		printf("Enter minutes (period 1): ");
		scanf("%d", &time1.minutes);
	}
	printf("Enter seconds (period 1): ");
	scanf("%d", &time1.seconds);
	while (time1.seconds > 60)
	{
		printf("Invalid input, try again\n");
		printf("Enter seconds (period 1): ");
		scanf("%d", &time1.seconds);
	}

	// Input for the second time period (time2).
	printf("Enter hours (period 2): ");
	while (time2.hours > 24)
	{
		printf("Invalid input, try again\n");
		printf("Enter hours (period 1): ");
		scanf("%d", &time2.hours);
	}
	printf("Enter minutes (period 2): ");
	scanf("%d", &time2.minutes);
	while (time2.minutes > 60)
	{
		printf("Invalid input, try again\n");
		printf("Enter minutes (period 2): ");
		scanf("%d", &time2.minutes);
	}
	printf("Enter seconds (period 2): ");
	scanf("%d", &time2.seconds);
	while (time2.seconds > 60)
	{
		printf("Invalid input, try again\n");
		printf("Enter seconds (period 2): ");
		scanf("%d", &time2.seconds);
	}

	// Calculate the difference between the two time periods.
	diff_2periods(time1, time2);

	// Display the difference between the two periods.
	printf("\nDifference between the two periods = %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

	return 0;
}
// Function to calculate the difference between two time periods (time1 and time2).
void diff_2periods(period1 time1, period1 time2)
{
	// Calculate the total seconds for each time period.
	int totaltime1 = (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds;
	int totaltime2 = (time2.hours * 3600) + (time2.minutes * 60) + time2.seconds;

	// Check which time period is greater and set a flag accordingly.
	char flag = totaltime1 >= totaltime2 ? 1 : 0;

	// Calculate the difference between the two time periods based on the flag.
	if (flag == 1)
	{
		hours = time1.hours - time2.hours; // Calculate the difference in hours.
		minutes = time1.minutes - time2.minutes; // Calculate the difference in minutes.

		// Adjust minutes if necessary (when time1 minutes < time2 minutes).
		if (time1.minutes < time2.minutes)
		{
			hours -= 1; // Decrement the hour difference by 1.
			minutes = (time1.minutes + 60) - time2.minutes; // Calculate corrected minutes.
		}

		seconds = time1.seconds - time2.seconds; // Calculate the difference in seconds.

		// Adjust seconds if necessary (when time1 seconds < time2 seconds).
		if (time1.seconds < time2.seconds)
		{
			minutes -= 1; // Decrement the minute difference by 1.
			seconds = (time1.seconds + 60) - time2.seconds; // Calculate corrected seconds.
		}
	}
	else if (flag == 0)
	{
		hours = time2.hours - time1.hours; // Calculate the difference in hours.
		minutes = time2.minutes - time1.minutes; // Calculate the difference in minutes.

		// Adjust minutes if necessary (when time2 minutes < time1 minutes).
		if (time2.minutes < time1.minutes)
		{
			hours -= 1; // Decrement the hour difference by 1.
			minutes = (time2.minutes + 60) - time1.minutes; // Calculate corrected minutes.
		}

		seconds = time2.seconds - time1.seconds; // Calculate the difference in seconds.

		// Adjust seconds if necessary (when time2 seconds < time1 seconds).
		if (time2.seconds < time1.seconds)
		{
			minutes -= 1; // Decrement the minute difference by 1.
			seconds = (time2.seconds + 60) - time1.seconds; // Calculate corrected seconds.
		}
	}
}
// Function to calculate the difference between two time periods (time1 and time2).
void diff_2periods(period1 time1, period1 time2)
{
	// Calculate the total seconds for each time period.
	int totaltime1 = (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds;
	int totaltime2 = (time2.hours * 3600) + (time2.minutes * 60) + time2.seconds;

	// Check which time period is greater and set a flag accordingly.
	char flag = totaltime1 >= totaltime2 ? 1 : 0;

	// Calculate the difference between the two time periods based on the flag.
	if (flag == 1)
	{
		hours = time1.hours - time2.hours; // Calculate the difference in hours.
		minutes = time1.minutes - time2.minutes; // Calculate the difference in minutes.

		// Adjust minutes if necessary (when time1 minutes < time2 minutes).
		if (time1.minutes < time2.minutes)
		{
			hours -= 1; // Decrement the hour difference by 1.
			minutes = (time1.minutes + 60) - time2.minutes; // Calculate corrected minutes.
		}

		seconds = time1.seconds - time2.seconds; // Calculate the difference in seconds.

		// Adjust seconds if necessary (when time1 seconds < time2 seconds).
		if (time1.seconds < time2.seconds)
		{
			minutes -= 1; // Decrement the minute difference by 1.
			seconds = (time1.seconds + 60) - time2.seconds; // Calculate corrected seconds.
		}
	}
	else if (flag == 0)
	{
		hours = time2.hours - time1.hours; // Calculate the difference in hours.
		minutes = time2.minutes - time1.minutes; // Calculate the difference in minutes.

		// Adjust minutes if necessary (when time2 minutes < time1 minutes).
		if (time2.minutes < time1.minutes)
		{
			hours -= 1; // Decrement the hour difference by 1.
			minutes = (time2.minutes + 60) - time1.minutes; // Calculate corrected minutes.
		}

		seconds = time2.seconds - time1.seconds; // Calculate the difference in seconds.

		// Adjust seconds if necessary (when time2 seconds < time1 seconds).
		if (time2.seconds < time1.seconds)
		{
			minutes -= 1; // Decrement the minute difference by 1.
			seconds = (time2.seconds + 60) - time1.seconds; // Calculate corrected seconds.
		}
	}
}

/*****************************************************************************************************************/
/******************                     Explaination of function                              ********************/
/*****************************************************************************************************************/
/*
```
// Function to calculate the difference between two time periods (time1 and time2).
void diff_2periods(period1 time1, period1 time2)
{
	// Calculate the total seconds for each time period.
	int totaltime1 = (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds;
	int totaltime2 = (time2.hours * 3600) + (time2.minutes * 60) + time2.seconds;
```

- This section calculates the total number of seconds for both `time1` and `time2` by converting hours, minutes, 
and seconds into seconds and summing them up. It uses the formula `(hours * 3600) + (minutes * 60) + seconds` to calculate the total seconds.

```
	// Check which time period is greater and set a flag accordingly.
	char flag = totaltime1 >= totaltime2 ? 1 : 0;
```

- A `flag` variable is used to determine which time period is greater. If `totaltime1` (the total seconds in `time1`) 
is greater than or equal to `totaltime2` (the total seconds in `time2`), `flag` is set to 1, indicating that `time1` is greater. 
Otherwise, it's set to 0, indicating that `time2` is greater.

```c
	// Calculate the difference between the two time periods based on the flag.
	if (flag == 1)
	{
		hours = time1.hours - time2.hours; // Calculate the difference in hours.
		minutes = time1.minutes - time2.minutes; // Calculate the difference in minutes.

		// Adjust minutes if necessary (when time1 minutes < time2 minutes).
		if (time1.minutes < time2.minutes)
		{
			hours -= 1; // Decrement the hour difference by 1.
			minutes = (time1.minutes + 60) - time2.minutes; // Calculate corrected minutes.
		}

		seconds = time1.seconds - time2.seconds; // Calculate the difference in seconds.

		// Adjust seconds if necessary (when time1 seconds < time2 seconds).
		if (time1.seconds < time2.seconds)
		{
			minutes -= 1; // Decrement the minute difference by 1.
			seconds = (time1.seconds + 60) - time2.seconds; // Calculate corrected seconds.
		}
	}
	else if (flag == 0)
	{
		hours = time2.hours - time1.hours; // Calculate the difference in hours.
		minutes = time2.minutes - time1.minutes; // Calculate the difference in minutes.

		// Adjust minutes if necessary (when time2 minutes < time1 minutes).
		if (time2.minutes < time1.minutes)
		{
			hours -= 1; // Decrement the hour difference by 1.
			minutes = (time2.minutes + 60) - time1.minutes; // Calculate corrected minutes.
		}

		seconds = time2.seconds - time1.seconds; // Calculate the difference in seconds.

		// Adjust seconds if necessary (when time2 seconds < time1 seconds).
		if (time2.seconds < time1.seconds)
		{
			minutes -= 1; // Decrement the minute difference by 1.
			seconds = (time2.seconds + 60) - time1.seconds; // Calculate corrected seconds.
		}
	}
}
```

- This section calculates the difference between the two time periods based on the value of the `flag` variable. If `flag` is 1, 
it means that `time1` is greater than or equal to `time2`, 
so it calculates the difference accordingly, considering potential "borrowing" of minutes and seconds.
- If `flag` is 0, it means that `time2` is greater than `time1`, so it calculates the difference in the opposite direction, 
again considering potential "borrowing" of minutes and seconds.

*/
