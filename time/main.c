#include<stdio.h>
#include<stdlib.h>

int main()
{
    int minutesEnterd = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0;

    printf("please enter the number of minutes: ");

    //getting input from user
    scanf("%d", &minutesEntered);

    minutesInYear = (60 * 24 * 365);

    //formula to calculate years and days
    years = (minutesEnterd/minutesInYear);
    days = (minutesEnterd/60.0)/24.0;

    printf("%d minutes is approximately %f years and %f days\n", minutesEnterd,years,days);

    return 0;
}
