#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter the num:");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i++)
    {
        sum = sum + n;

        printf("%d", &sum);
    }
}