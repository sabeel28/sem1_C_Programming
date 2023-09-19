//Author:Mohd Sabeel Aijaz
//Date:31jan22

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,b,r,area,circum;

    //finding area & perimeter of rectangle
    printf("Enter the length of rectangle: ");
    scanf("%d",&l);
    printf("Enter the breath of rectangle: ");
    scanf("%d",&b);
    printf("perimeter is:%d\n",2*(l+b));
    printf("area is:%d\n",(l*b));

    //now printing area & circumference of circle
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    circum=2*3.14*r;
    area=3.14*r*r;
    printf("Area of circle:%d\n",area); //how to make decimal prcision?
    printf("Circumference of circle is:%d\n",circum);
    return 0;
}
