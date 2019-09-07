#include<stdio.h>
int main()
{
    char a[3][20];
    int i=0,max=0,flag;
    for(i=0;i<3;i++)
    {
        scanf("%s",&a[i][0]);
    }
    for(i=0;i<20;i++)
    {
        if(a[0][i]==a[1][i]&&a[1][i]==a[2][i])
            continue;
        else
        {
            if(a[0][i]>a[1][i])
                {max=a[0][i];
                flag=0;}
            else {max=a[1][i];
                 flag=1;}
            if(max<a[2][i])
                {max=a[2][i];
                flag=2;}
        }

    }
    printf("\n×î´óÖµ:%s",a[flag]);
    return 0;
}
