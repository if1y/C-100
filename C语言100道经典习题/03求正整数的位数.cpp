#include<stdio.h>
int main()
{
    char i[20];
    int n;
    printf("请输入一个正整数:\n");
    gets(i);
    for(n=0;i[n]!='\0';n++)
        ;
    printf("位数：%d",n);
    return 0;
}
