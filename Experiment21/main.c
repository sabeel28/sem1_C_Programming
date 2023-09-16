#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =43;
    int *p1;
    int **p2;
    p1 = &a;
    p2 = &p1;
    printf("value of a is : %d\n", a);
    printf("value of a is : %d\n", *p1);
    *p1 = 187; //changed value of variable to 187 through pointer
    printf("value of a is : %d\n", **p2);

    return 0;
}
