#include<stdio.h>
int main()
{
    char a[80],b[80],*p="aAbcdDefgGH";
    int i=0,j=0;
    while(*p!='\0')
    {
        if(*p>='a'&&*p<='z')
        {
            a[i]=*p;
            i++;
        }
        else
        {
            b[j]=*p;
            j++;
        }
        p++;
    }
    a[i]=b[j]='\0';
    puts(a);
    puts(b);
    return 0;
}
