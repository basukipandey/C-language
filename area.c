#include <stdio.h>
void main()
{
    float b, h, area;
    printf("enter the b h: ");
    scanf("%f%f", &b, &h);
    area = (b * h) * 1 / 2;
    printf("%f", area);
}