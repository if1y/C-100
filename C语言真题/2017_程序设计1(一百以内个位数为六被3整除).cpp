#include<stdio.h>
int main(){
    for(int i=6;i<=100;i=i+10)
    {
       if(i%3==0)
            printf("%4d\n",i);
    }
    return 0;
}
