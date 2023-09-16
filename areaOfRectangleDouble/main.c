#include<stdio.h>
int main()
{
    double area=0.0;
    double perimeter=0.0;
    double length=4.34;
    double width=3.02;

    perimeter=2*(length+width);
    area=length*width;

    printf("area is:%.2f\n",area);
    printf("perimeter is:%0.2f\n",perimeter);
    return 0;
}
