#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void delchar(char str[],char c);
int main()
{
    char *str=0,c='k';
    int i;
    printf("请输入一个字符串:\n");
    str=(char *)malloc(sizeof(char));
    for(i=0;(*(str+i)=getchar())!='\n';i++)
        str=(char *)realloc(str,strlen(str)+1);
    *(str+i)='\0';
    delchar(str,c);
    printf("%s\n",str);
    free(str);
    return 0;
}
void delchar(char str[],char c)
{
    int len=strlen(str),i,k=0;
    for(i=0;i<len;i++)
    {
        if(str[i]==c)
            k++;
        else
            str[i-k]=str[i];
    }
    *(str+i-k)='\0';
    printf("%s\n",str);
}

