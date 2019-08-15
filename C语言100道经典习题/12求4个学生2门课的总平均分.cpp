#include<stdio.h>
int main()
{
    double a[2][4];
    double sum=0;
    printf("请输入第一门的成绩：\n");
    for(int i=0;i<=3;i++)
        {
            scanf("%lf",&a[0][i]);
            sum+=a[0][i];
        }
    printf("请输入第二门的成绩：\n");
    for(int i=0;i<=3;i++)
        {
            scanf("%lf",&a[1][i]);
            sum+=a[1][i];
        }
    printf("%.3f",sum/8);
    return 0;
}
