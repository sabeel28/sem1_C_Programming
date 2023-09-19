#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("variables of type char occupy %zd\n", sizeof(char));
    printf("variables of type long occupy %zd\n", sizeof(long));
    printf("variables of type double occupy %zd\n", sizeof(double));
    printf("variables of type short occupy %zd\n", sizeof(short));
    printf("variables of type int occupy %zd\n", sizeof(int));
    printf("variables of type long long occupy %zd\n", sizeof(long long));
    printf("variables of type long double occupy %zd\n", sizeof(long double));
    printf("variables of type flot occupy %zd\n", sizeof(float));


    return 0;
}
