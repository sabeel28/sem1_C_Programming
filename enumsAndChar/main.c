#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
    enum gender{male,female};
    enum gender mygender;
    mygender=male;

    enum gender anothergender;
    anothergender=female;

    printf(" %d\n %d",mygender,anothergender);

    return 0;
}
