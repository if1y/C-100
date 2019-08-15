#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
      {
        for(int n=1;n<=i;n++)
          printf("*");
        printf("\n");
      }
    return 0;
}
