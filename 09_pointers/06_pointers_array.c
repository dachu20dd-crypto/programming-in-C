#include<stdio.h>

void main()
{
    int arr[3] = {10,20,30};
    int *ptr = arr;

    printf("%d %d %d", ptr[0], ptr[1], ptr[2]);
}
