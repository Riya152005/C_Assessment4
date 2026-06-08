#include <stdio.h>
int main()
{
    int n, temp, first, last;
    int div = 1, middle, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    temp = n;
loop:
    if(temp > 9)
    {
        temp = temp / 10;
        div = div * 10;
        goto loop;
    }
    first = temp;
    middle = (n % div) / 10;
    result = last * div + middle * 10 + first;
    printf("Result = %d", result);
    return 0;
}
