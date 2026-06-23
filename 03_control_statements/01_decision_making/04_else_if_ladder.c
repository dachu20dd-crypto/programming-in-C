#include<stdio.h>

int main()
{
    int mark = 75;

    if(mark >= 90)
    {
        printf("Grade A");
    }
    else if(mark >= 80)
    {
        printf("Grade B");
    }
    else if(mark >= 70)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
