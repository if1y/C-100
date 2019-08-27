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
    printf("\n×î´óÖµ%d",max);
    return 0;
}
