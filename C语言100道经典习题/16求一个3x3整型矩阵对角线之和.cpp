#include<stdio.h>
int main()
{
    int a[3][3],sum=0;
    printf("请输入一个3*3的矩阵:\n");
    for(int i=0;i<=2;i++)
    {
        scanf("%d,%d,%d",&a[i][0],&a[i][1],&a[i][2]);
    }
    sum=a[0][0]+a[0][2]+a[1][1]+a[2][0]+a[2][2];
    printf("%d",sum);
    return 0;
}
