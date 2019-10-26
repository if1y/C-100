#include<stdio.h>
int main()
{
    int sum1=0,sum2=0;
    for(int i=0;i<=10;i++)
    {
        if(i%2!=0)
            sum1+=i;
        else
            sum2+=i;
    }
    printf("奇数和为:%d\n偶数和为:%d\n",sum1,sum2);
    return 0;
}
