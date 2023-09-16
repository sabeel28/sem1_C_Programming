#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the two numbers:");
    scanf("%d%d",&n1,&n2);

    if (n1==n2)
        printf("The two number are equal");
    else if (n1>n2)
        printf("%d is greater\n:",n1);
    else
        printf("%d is greater\n:",n2);
    return 0;
}
