#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void MyStrcat(char *dstStr,char *srcStr);
int main()
{
    char *p=0,*q=0;
    int m=0,n=0;
    printf("请输入第一个字符串：");
    p=(char*)malloc(1);
    for(m=0;(*(p+m)=getchar())!='\n';m++)
        p=(char*)realloc(p,strlen(p)+1);
       *(p+m)='\0';
    printf("请输入第一个字符串：");
    q=(char*)malloc(1);
    for(n=0;(*(q+n)=getchar())!='\n';n++)
        q=(char*)realloc(q,strlen(q)+1);
        *(q+n)='\0';
    MyStrcat(p,q);
    free(p);
    free(q);
    return 0;
}
void MyStrcat(char *dstStr,char *srcStr)
{
    int lens=strlen(dstStr)+strlen(srcStr);
    int a=strlen(dstStr);
    dstStr=(char*)realloc(dstStr,lens+1);
    for(int b=0;b<strlen(srcStr);b++)
        {
            dstStr[a]=srcStr[b];
            a++;
        }
    printf("最终：%s",dstStr);
}
