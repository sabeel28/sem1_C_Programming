#include<stdio.h>
int main()
{
    unsigned long long sum = 0LL;
    unsigned int count = 0;//number of integer to be summed

    //Read the number of integers to be summed
    printf("\n Enter the numbers of integers you want to sum: ");
    scanf("%u",&count);

    //Sum integers from 1 to count
    for(unsigned int i=1;i<=count;++i)
    {
        sum+=i;
        printf("\nTotal of the first %u numbers is %llu",count,sum);
    }

    return 0;
}


























