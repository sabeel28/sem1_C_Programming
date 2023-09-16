//Bitwise XOR ^
#include<stdio.h>
int main()
{
    unsigned int a=60;//(0011 1100)
    unsigned int b=13;//(0000 1101)
    int c=0;

    c=a^b;
    //0011 0001
    printf("c=%d",c);

    return 0;
}
