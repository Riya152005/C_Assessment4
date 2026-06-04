#include<stdio.h>
int main()
{
    int num=1,x=0;
loop:
    if(num<6)
    {
        x=x+num;
        num++;
        goto loop;
    }
    
    printf("%d",x);
}
