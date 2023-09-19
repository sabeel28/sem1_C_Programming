#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum=0LL;//Stores the sum of integers
    unsigned int count=0;//the numbers of integer to be sumed

    //read the number of integer to be sumed
    printf("enter the number of integers you want to sum: ");
    scanf("%u\n",&count);

    //sum integers from one to count
    for(unsigned int count=1;count<=10;count++)
        sum +=1;

       printf("\nTotal number of first %u numbers is: %llu\n",count,sum);

    return 0;
}
