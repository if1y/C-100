#include<stdio.h>
int main()
{
    double n,sum=0;
    printf("请输入n的值:\n");
    scanf("%lf",&n);
    for(int i=0;i<n;i++)
    {
        double flag=1;
        for(int m=1;m<=i;m++)
        {
            flag=flag*m;
        }
        sum+=1/flag;
    }
    printf("%.4f",sum);
    return 0;
}
