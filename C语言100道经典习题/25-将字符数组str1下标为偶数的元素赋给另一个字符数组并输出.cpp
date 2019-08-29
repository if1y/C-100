#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[30];
    int i,n=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(i%2==0&&a[i]!='\0')
            {
                b[n]=a[i];
                n++;
            }
    }
    b[n]='\0';
    printf("数字一:%s\n数字二:%s",a,b);
    return 0;
}
