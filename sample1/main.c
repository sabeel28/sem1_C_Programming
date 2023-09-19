#include<stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter the value: ");
    scanf("%d%s",&i,str);//Note:Here we not use & for string
    printf("You entered:%d%s\n",i,str);

    return 0;
}
