#include <stdio.h>

int num = 100;    // Global variable

void display()
{
    extern int num;

    printf("Value of num = %d\n", num);
}

int main()
{
    display();

    return 0;
}
