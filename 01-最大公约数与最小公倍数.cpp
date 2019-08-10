#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入两个数\n");
    scanf("%d,%d",&a,&b);
    int nmin=a<b?a:b;
    for(int i=nmin;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("最大公约数为%d\n",i);
            printf("最小公倍数为%d",a*b/i);
            break;
        }
    }
    return 0;
}
