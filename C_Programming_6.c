#include<stdio.h>
int main()
{
    int num=10;
loop:
    if(num<20)
    {  
        if(num%2!=0)
        printf("%d\n",num);
        num++;
        goto loop;
    }
  
}
