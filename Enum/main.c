#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company{GOOGLE, FACEBOOK, XEROX, YAHOO , EBAY, MICROSOFT};

    enum Company microsoft = MICROSOFT;
    enum Company google = GOOGLE;
    enum Company ebay  = EBAY;

    printf("the value of MICROSOFT is : %d\n", microsoft);
    printf("the value of google is : %d\n", google);
    printf("the value of ebay is : %d\n", ebay);


    return 0;
}
