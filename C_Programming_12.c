#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = 0;
Loop:
    if (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
        goto Loop;
    }
    printf("Sum = %d", sum);
}
