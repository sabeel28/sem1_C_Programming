#include<stdio.h>
intg main()
{
    int rating;
    printf("enter your rating (1-b)\n");
    scanf("%d",&rating);
    switch(rating)
    {
    case 1:
        printf("your rating is 1\n ");
    case 2:
        printf("your rating is 2\n ");
    case 3:
        printf("your rating is 3\n ");
    case 4:
        printf("your rating is 4\n ");
    case 5:
        printf("your rating is 5\n ");
    default:
        printf("invalid rating\n");
    }
    return 0;
}
