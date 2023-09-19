#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //declaring variable
    double width = atoi(argv[1]);
    double height =atoi(argv[2]);
    double perimeter = 0.0;
    double area = 0.0;

    //declaring the perimeter and area
    perimeter = 2.0 *(height + width);
    area = width*height;

    //displaying input
    printf(" Width is : %f\n height is : %f\n Perimeter is: %f\n",  width, height, perimeter);
    printf("Area is: %f\n", area);

    return 0;
}
