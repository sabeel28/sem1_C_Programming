#include<stdio.h>
int main()
{
    _Bool a=1;
    _Bool b=1;
    _Bool result;

    result=!(a&&b);// OR||,AND&&,! NOT

    printf("%d",result);

    return 0;
}
