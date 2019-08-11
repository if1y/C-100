#include<stdio.h>
int main()
{
    int i=0,j=0,k=0;
    int y[500]={0};
    int s;
    for(i=2;i<=1000;i++)
    {
        k=0;
        s=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                y[k]=j;
                s=s+j;
                k++;
            }
        }
        if(s==i)
        {
            printf("%d=",s);
            for(k=k-1;k>0;k--)
                printf("%d+",y[k]);
            printf("1\n");
        }
    }
}
