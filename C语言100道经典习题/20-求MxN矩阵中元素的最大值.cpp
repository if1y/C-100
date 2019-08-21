#include<stdio.h>
int main()
{
    int m,n,p,q,max=0;
    printf("请输入m,n的值；\n");
    scanf("%d,%d",&m,&n);
    int a[m][n];
    for(p=0;p<m;p++)
     for(q=0;q<n;q++)
        {
            scanf("%d",&a[p][q]);
            if(a[p][q]>max)
                max=a[p][q];
        }
    for(p=0;p<m;p++)  //打印M*N矩阵
     {
         for(q=0;q<n;q++)
           printf("%-3d",a[p][q]);
         printf("\n");
     }
    printf("最大值为:%d\n",max);//输出最大值
    return 0;
}
