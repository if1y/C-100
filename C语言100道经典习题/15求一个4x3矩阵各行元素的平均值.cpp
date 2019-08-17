#include<stdio.h>
int main()
{
    double a[4][3];
    double average[4];
    printf("请输入一个4*3矩阵:\n");
    for(int i=0;i<=3;i++)
    {
        scanf("%lf,%lf,%lf",&a[i][0],&a[i][1],&a[i][2]);
        average[i]=(a[i][0]+a[i][1]+a[i][2])/3;
    }
    for(int i=0;i<=3;i++)
        printf("第%d行平均值%.2f\n",i+1,average[i]);
    return 0;
}
