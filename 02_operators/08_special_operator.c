#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;

    printf("Value of a = %d\n", a);

    printf("sizeof(a) = %lu bytes\n", sizeof(a));

    printf("Address of a = %p\n", &a);

    printf("Value using pointer = %d\n", *ptr);

    int x = (1, 2, 3);
    printf("Comma Operator Result = %d\n", x);

    return 0;
}
