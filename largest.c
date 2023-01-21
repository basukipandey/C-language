#include <stdio.h>
void main()
{
    int n1, n2;
    printf("enter the number");
    scanf("%d%d", &n1, &n2);
    if (n1 > n2)
    {
        printf("n1 is largest no");
    }
    else
    {
        printf("n2 is largest no");
    }
}