#include <stdio.h>
int main()
{
    int n, i = 1, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
start:
    if (i <= n)
    {
        if (n % i == 0)
            count++;
        i++;
        goto start;
    }
    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}