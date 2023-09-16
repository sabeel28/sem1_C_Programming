#include <stdio.h>
int main()
{
    float m,cm,ft,inch,km;//variable declaration
    printf("Enter the distance in kilometers\n:");
    scanf("%f",&km);//input from the user

   //formula used
    m=km/1000;
    cm=m/100;
    inch=cm/2.54;
    ft=inch/12;

    //printing the respective values
    printf("Distance in meter=%f\n",m);
    printf("Distance in centimeter=%f\n",cm);
    printf("Distance in feet=%f\n",ft);
    printf("Distance in inches=%f\n",inch);

    return 0;
}
