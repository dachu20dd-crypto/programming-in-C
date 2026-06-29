#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int num = 5;

    printf("Sum = %d", sum(num));

    return 0;
}
