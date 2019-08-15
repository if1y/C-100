#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
       int n=4-i;
       while(n>=1)
       {
           printf(" ");
           n--;
        }
       for(int m=1;m<=2*i-1;m++)
        {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}
