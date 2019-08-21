#include<stdio.h>
int main()
{
    int a[3][5];
    printf("请输入矩阵的值:\n");
    for(int i=0;i<=2;i++)
      scanf("%d,%d,%d,%d,%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
    for(int m=0;m<=4;m++)
    {
        int max=0;
        for(int n=0;n<=2;n++)
        {
            if(a[n][m]>max)
                max=a[n][m];
        }
        printf("%d列最大值为%d\n",m+1,max);
    }
    return 0;
}
