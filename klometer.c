#include <stdio.h>
void main()
{
    float km, me, feet, inch;
    printf("enter the distance between to city in km");
    scanf("%f", &km);
    me = km * 1000;
    feet = km * 3280.83;
    inch = km * 39370.1;
    printf("meter=%f\n feet=%f\n inches=%f\n", me, feet, inch);
}