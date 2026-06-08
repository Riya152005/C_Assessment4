#include <stdio.h>
int main()
{
    int n, temp, div = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if((n % 10) % 2 == 0)
        printf("%d", n);
    else
    {
        temp = n;
        while(temp >= 10)
        {
            temp = temp / 10;
            div = div * 10;
        }
        printf("%d", n - div);
    }
    return 0;
}
