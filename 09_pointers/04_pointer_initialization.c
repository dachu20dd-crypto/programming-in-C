#include<stdio.h>

void main()
{
    int a = 20;
    int *ptr;

    ptr = &a;

    printf("%d", *ptr);
}
