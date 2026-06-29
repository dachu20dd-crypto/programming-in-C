#include<stdio.h>

struct Student
{
    int roll;
};

void main()
{
    struct Student s[3];

    s[0].roll = 101;
    s[1].roll = 102;
    s[2].roll = 103;

    for(int i=0;i<3;i++)
    {
        printf("%d\n", s[i].roll);
    }
}
