#include<stdio.h>

void display(int *n)
{
    printf("%d", *n);
}

void main()
{
    int a = 50;

    display(&a);
}
