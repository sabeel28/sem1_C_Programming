//Left shift operator
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=60;//0011 1100
    int result=0;

    //Formula used x<<y =>x=x*(2^y)

    result=a<<2;
    printf("result=%d",result);
}
