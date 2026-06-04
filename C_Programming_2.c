#include<stdio.h>
int main()
{
    int num=5;
loop:
    if(num>=1)
    {
        printf("%d\n",num);
        num--;
        goto loop;
    }
}
