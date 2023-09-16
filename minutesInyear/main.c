#include<stdio.h>
int main()
{
    int minutesEntered=0;
    double years=0.0;
    double days=0.0;
    double minutesInYear=0;
    printf("Please enter the number of minutes: ");
    //input from the user
    scanf("%d",&minutesEntered);

    minutesInYear=(365*60*24);
    //required conversion
    years=(minutesEntered/minutesInYear);
    days=(minutesEntered/60*24);
    //output
    printf("\nyears=%f,\ndays=%f\n",years,days);
}
