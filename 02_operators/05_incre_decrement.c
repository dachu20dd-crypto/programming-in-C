#include <stdio.h>

int main()
{
    int a = 10;

    printf("a = %d\n", a);

    printf("Pre Increment : %d\n", ++a);
    printf("Post Increment: %d\n", a++);

    printf("Value after increment: %d\n", a);

    printf("Pre Decrement : %d\n", --a);
    printf("Post Decrement: %d\n", a--);

    printf("Value after decrement: %d\n", a);

    return 0;
}
