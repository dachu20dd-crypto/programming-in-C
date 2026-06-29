#include<stdio.h>

struct Student
{
    int roll;
};

struct Student getData()
{
    struct Student s = {101};

    return s;
}

void main()
{
    struct Student s1;

    s1 = getData();

    printf("%d", s1.roll);
}
