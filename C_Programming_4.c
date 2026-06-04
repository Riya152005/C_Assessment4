#include<stdio.h>
int main()
{
    int num=6,x=0;
loop:
    if(num>=1)
    {
        x=x+num;
        num--;
        goto loop;
    }
    
    printf("%d",x);
}
