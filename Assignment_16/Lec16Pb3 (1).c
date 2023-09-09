#include <stdio.h>

// Declare a structure to represent a clock
typedef struct {
    int hours;
    int minutes;
    int seconds;
} Clock;

// Function to add two clocks
void add(Clock one, Clock two, int *Hsum, int *Msum, int *Ssum);

int main() {
    Clock one, two;
    int Hsum, Msum, Ssum, onee = 0, twoe = 0;

    // Input for the first clock
    printf("Enter 1st Clock hours: ");
    scanf("%d", &one.hours);

    // Normalize the 12-hour format to 24-hour format
    if (one.hours >= 12) {
        onee = one.hours - 12;
    }

    printf("Enter 1st Clock minutes: ");
    scanf("%d", &one.minutes);
    printf("Enter 1st Clock seconds: ");
    scanf("%d", &one.seconds);

    // Input for the second clock
    printf("\nEnter 2nd Clock hours: ");
    scanf("%d", &two.hours);

    // Normalize the 12-hour format to 24-hour format
    if (two.hours >= 12) {
        twoe = two.hours - 12;
    }

    // Calculate the absolute difference between two 12-hour formats
    twoe = onee - twoe;
    if (twoe < 0) {
        twoe *= -1;
    }

    printf("Enter 2nd Clock minutes: ");
    scanf("%d", &two.minutes);
    printf("Enter 2nd Clock seconds: ");
    scanf("%d", &two.seconds);

    // Call the add function to add the clocks
    add(one, two, &Hsum, &Msum, &Ssum);

    // Display the result in 24-hour and 12-hour formats
    printf("\nSum of Clock 24h = %d:%d:%d\n", Hsum, Msum, Ssum);
    printf("Sum of Clock 12h = %d:%d:%d\n", twoe, Msum, Ssum);

    return 0;
}

// Function to add two clocks
void add(Clock one, Clock two, int *Hsum, int *Msum, int *Ssum) {
    *Hsum = one.hours + two.hours;
    *Msum = one.minutes + two.minutes;
    *Ssum = one.seconds + two.seconds;

    /*NOTE: THIS FOLLOWING PART IS NOT MINE*/

    // Normalize minutes and seconds
    if (*Ssum >= 60) {
        *Msum += *Ssum / 60;
        *Ssum %= 60;
    }
    if (*Msum >= 60) {
        *Hsum += *Msum / 60;
        *Msum %= 60;
    }
}
