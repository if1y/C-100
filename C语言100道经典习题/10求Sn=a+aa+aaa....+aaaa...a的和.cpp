#include<stdio.h>
#include<math.h>
int main()
{
    printf("ÇëÊäÈëa,nµÄÖµ:\n");
    double a,n,t,flag,sum=0;;
    scanf("%lf,%lf",&a,&n);
    for(int m=1;m<=n;m++)
    {
        flag=m;
        int jubu=0;
       while(flag>=1)
    {
        t=pow(10,flag-1);
        jubu+=a*t;
        flag--;
    }
        sum+=jubu;
    }
    printf("%.0f",sum);
    return 0;
}
