#include<stdio.h>

struct Student
{
    int roll;
};

void display(struct Student s)
{
    printf("%d", s.roll);
}

void main()
{
    struct Student s1 = {101};

    display(s1);
}
