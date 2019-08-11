#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char *s);
int main()
{
    printf("请输入一串字符:\n");
    char *str=0;
    int i=0;
    str=(char*)malloc(1);//等价于(char*)malloc(sizeof(char))
    for(i=0;(*(str+i)=getchar())!='\n';i++)  //输入任意长度字符串
        str=(char*)realloc(str,strlen(str)+1);
    *(str+i)='\0';
    fun(str);
    printf("%s",str);
    free(str);
    return 0;
}
void fun(char *s)
{
    int n=strlen(s);
    int m=0;
    int t;
    for(m=0;m<n/2;m++)
    {
        t=*(s+m);
        *(s+m)=*(s+n-m-1);
        *(s+n-m-1)=t;
    }
}
