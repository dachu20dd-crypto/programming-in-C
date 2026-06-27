#include <stdio.h>

int main()
{
    int a[5];
    int i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array Elements are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
