#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum company{GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

    enum company xerox=XEROX;
    enum company google=GOOGLE;
    enum company ebay=EBAY;

    printf("The value of xerox =%d\n",xerox);
    printf("The value of google =%d\n",google);
    printf("The value of ebay =%d\n",ebay);

    return 0;
}
