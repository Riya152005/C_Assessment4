#include <stdio.h>
int main()
{
    int n, rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    rev = 0;
Loop:
    if (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
        goto Loop;
    }
    printf("Reverse = %d", rev);
}
