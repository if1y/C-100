#include<stdio.h>
int main()
{
    int year,mouth,day,sum=0,flag=0;
    printf("请输入“年,月,日”\n");
    scanf("%d,%d,%d",&year,&mouth,&day);
    mouth=mouth-1;
    for(;mouth>=1;mouth--)
    {
        if(year%400==0||(year%4==0&&year%100!=0))
            flag=1;
        if(mouth==4||mouth==6||mouth==9||mouth==11)
            sum+=30;
        else if(mouth==2&&flag==1)
            sum+=29;
        else if(mouth==2&&flag==0)
            sum+=28;
        else
            sum+=31;
    }
    printf("\n是%d年的第%d天",year,sum+day);
    return 0;
}
