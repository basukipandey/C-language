#include "stdio.h"
void main()
{
    int l, b, area, perimeter, choice;
    printf("enter the lenght breath");
    scanf("%d%d", &l, &b);
    printf("1 area\n2perimeter\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("area=%dinches\n", l * b);
    }
    else if (choice == 2)
    {
        printf("perimeter=%dinches\n", 2 * (l + b));
    }
    else
    {
        printf(" num invalid");
    }
}