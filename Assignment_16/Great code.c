#include <stdio.h>
#include "STD_TYPES.h"

typedef struct
{
    uint32 Hour;
    uint32 Min;
}Clock;

int main()
{
	Clock one, two;
	uint32 DiHr;
	uint32 DiMin;
	/*********************************Scan Times***********************************/
	printf("Enter Time one");
	printf("\n");
	printf("Hour: ");
	scanf("%d",&one.Hour);
	printf("Minutes: ");
	scanf("%d",&one.Min);
	//printf("Hour:%d\n",one.Hour);
	//printf("Minutes:%d",one.Min);

    printf("\n\n");

	printf("Enter Time two");
	printf("\n");
	printf("Hour: ");
	scanf("%d",&two.Hour);
	printf("Minutes: ");
	scanf("%d",&two.Min);
	//printf("Hour:%d\n",two.Hour);
	//printf("Minutes:%d\n",two.Min);


	/*********************************Function call***********************************/
	Dif_time(one, two, &DiHr, &DiMin);

	printf("Time Difference: %d hours, %d minutes", DiHr, DiMin);

	return 0;
}

void Dif_time(Clock obj1, Clock obj2, uint32 *DifHr, uint32 *DifMin)
{
    if((obj1.Hour)>(obj2.Hour) && (obj1.Min)>(obj2.Min))
    {
        *DifHr = obj1.Hour - obj2.Hour;
        *DifMin = obj1.Min - obj2.Min;
    }
    else if((obj1.Hour)<(obj2.Hour) && (obj1.Min)<(obj2.Min))
    {
        *DifHr = obj2.Hour - obj1.Hour;
        *DifMin = obj2.Min - obj1.Min;
    }
    else
    {
        *DifHr = abs(obj1.Hour - obj2.Hour);
        *DifMin = abs(obj1.Min - obj2.Min);
        if((obj1.Hour)>(obj2.Hour) && (obj1.Min)<(obj2.Min))
        {
            *DifHr -= 1;
        }
        else if((obj1.Hour)<(obj2.Hour) && (obj1.Min)>(obj2.Min))
        {
            *DifHr -= 1;
        }
    }
}
