#include <stdio.h>
void main()
{
    int n, m, o;
    //  rs1, rs2, rs5, rs10, rs20, rs50, rs100;
    printf(" enter the amount:");
    scanf("%d", &n);

    m = n / 100;
    o = n % 100;
    m = m + o / 50;
    o = o % 50;
    m = m + o / 20;
    o = o % 20;
    m = m + o / 10;
    o = o % 10;
    m = m + o / 5;
    o = o % 5;
    m = m + o / 2;
    o = o % 2;
    m = m + o / 1;

    printf("the number of note%d", m);
}