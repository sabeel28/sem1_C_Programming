#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum,n;
    sum = 0;
    printf("Enter the number you want to get multiple :");
    scanf("%d",&a);
    printf("Enter how many multiples required :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        sum = sum + a;
	printf("%d \n", sum);
    }

    return 0;
}
