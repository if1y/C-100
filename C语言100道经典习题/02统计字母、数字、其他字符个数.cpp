#include<stdio.h>
#include<string.h>
int main()
{
    char title[100];
    printf("请输入一串字符串\n");
    gets(title);
    int changdu=strlen(title);
    printf("长度%d\n",changdu);
    int zimu=0,kongge=0,shuzi=0,qita=0;
    for(int i=0;i<=changdu;i++)
       {
        if((title[i]>='a'&&title[i]<='z')||(title[i]>='A'&&title[i]<='Z'))
                      zimu++;
        else if(title[i]>='0'&&title[i]<='9')
                      shuzi++;
        else if(title[i]==' ')
                      kongge++;
        else qita++;
       }
       printf("字母%d\n",zimu);
       printf("数字%d\n",shuzi);
       printf("空格%d\n",kongge);
       printf("其他字符%d\n",qita);
    return 0;
}

