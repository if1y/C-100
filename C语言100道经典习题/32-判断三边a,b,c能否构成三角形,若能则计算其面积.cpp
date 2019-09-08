#include<stdio.h>
#include<math.h>
int main()
{
    int a[3],i=0,nmax,max,flag,sum=0;
    double s,p;
    printf("请输入三边的值:\n");
    for(i=0;i<3;i++)
      scanf("%d",&a[i]);
    if(a[0]>a[1])
        {nmax=a[0];
        flag=0;}
    else {nmax=a[1];
        flag=1;}
    if(nmax<a[2])
        {max=a[2];
         flag=2;}
    for(i=0;i<3;i++)
    {
        if(i!=flag)
            sum+=a[i];
    }
    if(sum>max)
        {
            printf("能构成三角形\n");
            p=(a[0]+a[1]+a[2])/2;
            s=sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
            printf("三角形面积为%.2f",s);
        }
    else
        printf("不能构成三角形\n");
    return 0;
}
