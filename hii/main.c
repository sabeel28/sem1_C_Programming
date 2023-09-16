#include<stdio.h>
enum week{monday,tuesday,wednesday,thursday,friday,saturday,sunday};
int main()
{
    enum week;
    {
      printf("%d\n",monday);
      printf("%d\n",tuesday);
      printf("%d\n",wednesday);
      printf("%d\n",thursday);
      printf("%d\n",friday);
      printf("%d\n",saturday);
      printf("%d\n",sunday);
    };
    return 0;

}
