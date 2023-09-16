#include<stdio.h>
int main()
{
    unsigned int a=23;//0001 0111
    unsigned int b=76;//0100 1100

    int c;
    c=a|b;
    //0101 1111
    printf("c=%d",c);

    return 0;
}
