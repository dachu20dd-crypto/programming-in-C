#include<stdio.h>

void main()
{
    int a = 10;

    int *p = &a;

    int **q = &p;

    printf("%d", **q);
}
