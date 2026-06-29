#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;

    ptr = (int*)malloc(sizeof(int));

    *ptr = 100;

    printf("%d", *ptr);

    free(ptr);
}
