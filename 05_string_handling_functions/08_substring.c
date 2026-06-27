#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";

    printf("%s", strstr(str, "World"));

    return 0;
}
