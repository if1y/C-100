#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20],max=0;
    for(int i=0;i<20;i++)
    {
        a[i]=rand();

        if(a[i]>max)
            max=a[i];
        printf("%d\t",a[i]);
    }
    int min=a[0];
    for(int i=0;i<20;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("\n最大值%d,最小值%d",max,min);
    return 0;
}
