#include<stdio.h>
int meiguihuashu(int i);
int main()
{
    int i;
    printf("请输入一个四位数:\n");
    scanf("%d",&i);
    meiguihuashu(i);
    return 0;
}
int meiguihuashu(int i)
{
    int a,b,c,d;
    a=i/1000;
    b=(i-a*1000)/100;
    c=(i-a*1000-b*100)/10;
    d=i%10;
    if(i==a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d)
        printf("yes");
    else printf("no");
}
