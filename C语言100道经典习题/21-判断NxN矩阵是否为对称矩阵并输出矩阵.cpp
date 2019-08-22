#include<stdio.h>
int main()
{
    int n,i,m,flag=0;
    printf("请输入矩阵的阶数:\n");
    scanf("%d",&n);
    int a[n][n];
    printf("请输入矩阵元素:\n");
    for(i=0;i<n;i++)
        for(m=0;m<n;m++)
          scanf("%d",&a[i][m]);
    for(i=0;i<n;i++)
        {
            for(m=0;m<n;m++)
            {
                if(a[i][m]!=a[m][i])
                    flag=1;
                printf("%-3d",a[i][m]);
            }
            printf("\n");
        }
    if(flag==0)
        printf("为对称矩阵\n");
    else
        printf("不是对称矩阵\n");
    return 0;
}
