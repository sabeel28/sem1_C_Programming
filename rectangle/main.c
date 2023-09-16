//Author:Mohd Sabeel Aijaz
//Purpose:To print the area and perimeter of rectangle
//Date:26sep22
#include<stdio.h>
int main()
{
    double length=15.3;
    double width=32.3;
    double area;
    double perimeter;

    //calculating the area and perimeter
    area=length*width;
    perimeter=2*(length+width);

    //displaying output
    printf("Length=%0.2f,\nWidth=%0.2f,\nPerimeter=%0.2f",length,width,perimeter);
    printf("\nArea=%0.2f\n",area);

    return 0;
}
