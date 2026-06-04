#include<stdio.h>
int main()
{
    int num=1,x,y,z,a;
loop:
    if(num<=1000)
    {
    x=num/100;
    y=(num/10)%10;
    z=num%10;
    a=x+y+z;
    {  
        if((num%2!=0)&&(y==7))
        printf("%d\n",num);
        num++;
        goto loop;
    }
    }
}
