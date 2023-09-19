/*Author : Sabeel
Purpose : This program is going to calculate the area and perimeter of rectangle*/

#include<stdio.h>

int main()
{
    double width = 23;
    double height = 45;
    double area = 0;
    double perimeter = 0;

    perimeter = 2*(height+width);
    area = width*height;

    printf("Perimeter is : %f\n",perimeter);
    printf("area is : %f\t",area);

    return 0;

}
