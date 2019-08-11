#include<stdio.h>
void fun1(char *p)
{
    char *q;
    q=p;
    while(*q!='\0'){
        (*q)++;
        q++;
    }
}
int main()
{
    char a[]={"Program"},*p;
    p=&a[3];
    printf("%s\n",p);
    fun1(p);
    printf("%s\n",a);
}
