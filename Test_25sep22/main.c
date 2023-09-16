#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum primaryColor{red,yellow,green};
    enum primaryColor myColor,gegsColor;

    myColor=yellow;
    gegsColor=red;
    printf("%d\n",myColor);
    printf("%d",gegsColor);

    return 0;
}
