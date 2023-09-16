//Name: Mohd Sabeel Aijaz
//Date:22-Mar-22
#include<stdio.h>
int main()
{
    float days,years,minutesEntered,minutesInDays,minutesInYears;
    printf("enter the no. of minutes: ");
    scanf("%f",&minutesEntered);

    //For the calculation of days
    minutesInDays=24*60;
    days=minutesEntered/minutesInDays;
    printf("days in minutesEntered: %f\n",days);

    //For the calculation of years
    minutesInYears=365*24*60;
    years=minutesEntered/minutesInYears;
    printf("years in minutesEntered: %f\n",years);
    return 0;
}
