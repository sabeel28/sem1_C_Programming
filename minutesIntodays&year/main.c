#include <stdio.h>
#include <stdlib.h>
int main()
{
    float minEntered,days,year,minutesInYear,minutesInDays;
    printf("enter the number of minutes: ");
    scanf("%f",&minEntered);
    minutesInYear=365*24*60;
    year=minEntered/minutesInYear;
    printf("Year in minutesEntered: %f\n",year);
    minutesInDays=24*60;
    days=minEntered/minutesInDays;
    printf("Days in minutesEntered: %f",days);
    return 0;
}
