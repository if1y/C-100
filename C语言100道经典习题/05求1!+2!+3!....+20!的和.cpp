#include<stdio.h>
int main()
{
    int sum=0;
    for(int n=1;n<=20;n++)
    {
        int a=1;
        for(int m=n;m>=1;m--)
            a=a*m;
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}
