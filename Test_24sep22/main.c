#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%s%d",str,&i);

    printf("\nYou entered:%s::%d",str,i);

    return 0;
}
