#include<stdio.h>
int main()
{
   int num,x=0;
   printf("Enter a number:");
   scanf("%d",&num);
   loop:
       if(num>0)
    {
       num=num/10;
       x++;
       goto loop;
   }
   printf("%d",x);
}
