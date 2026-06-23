#include<stdio.h>

int main()
{
    int mark = 80;
    int passed = 1;

    if(mark >= 60)
    {
        if(passed == 1)
        {
            printf("Eligible for Admission");
        }
        else
        {
            printf("Not Passed");
        }
    }
    else
    {
        printf("Insufficient Marks");
    }

    return 0;
}
