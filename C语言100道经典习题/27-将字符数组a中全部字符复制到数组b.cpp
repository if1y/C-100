#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int m;
    gets(a);
    for(m=0;m<strlen(a);m++)
    {
        if(a[m]=='\0')
            break;
        else b[m]=a[m];
    }
    *(b+m)='\0';
    printf("%s",b);
    return 0;
}
