#include<stdio.h>
int main()
{
    int number,sign;
    printf("please enter the number: ");
    scanf("%i",&number);

    if(number<0)
        sign=-1;
    else if(number==0)
        sign=0;
    else
        sign=1;
    printf("sign is: %i\n",sign);

    return 0;
}
