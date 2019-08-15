#include<stdio.h>
int main()
{
    double i=-1,sum=0,t=-1;
    for(int m=1;m<=100;m++)
    {
        t=t*i;
        sum+=t/m;
    }
    printf("%f",sum);
    return 0;
}
