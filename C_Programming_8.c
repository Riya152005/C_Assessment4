#include<stdio.h>
int main()
{
    int num=1,x,y,z;
loop:
    if(num<=100)
    {
    x=num/10;
    y=num%10;
    z=x+y;
    {  
        if((num%2==0)&&(z==6))
        printf("%d\n",num);
        num++;
        goto loop;
    }
    }
}
