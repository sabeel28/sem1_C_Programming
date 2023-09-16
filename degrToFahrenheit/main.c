//Author:Mohd Sabeel Aijaz
//Date:31jan22
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f,c;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%d",&f);
    c=5*(f-32)/9;
    printf("Temperature in centigrade:%d",c);
    return 0;
}
-------------------(Another way of doing)--------
//Author=Mohd Sabeel Aijaz

//Date:15Mar22

#include<stdio.h>

int main()

{
   
 float f,c;//f=fahrenheit,c=celcius
    
printf("temperature in fahrenheit: ");
    
scanf("%f",&f);
    
    
c=5*(f-32)/9;
    
printf("temperature in degree celcius:%0.2f",c);
    
return 0;

}