#include<stdio.h>
int main()
{
    int agg,m1,m2,m3,m4,m5;
    float per;
    printf("Enter marks in 5 subjects: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    agg=m1+m2+m3+m4+m5;
    per=agg/5;
    printf("Aggregate Marks=%d\n",agg);
    printf("percentage Marks=%f\n",per);
    return 0;
}
