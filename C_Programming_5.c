#include<stdio.h>
int main()
{
    int num=1;
loop:
    if(num<=9)
    {  
        if(num%2!=0)
        printf("%d\n",num);
        num++;
        goto loop;
    }
  
}
