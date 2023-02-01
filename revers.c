#include <stdio.h>
void main()
{
    int i, n, revers = 0;
    printf("enter number");
    scanf("%d", &n);
    for (i = 0; i <= n; --i)
    {

        revers = (revers * 10) + (n % 10);
        n = n / 10;
    }

    printf("%d", revers);
}
