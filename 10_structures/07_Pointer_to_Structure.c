#include<stdio.h>

struct Student
{
    int roll;
};

void main()
{
    struct Student s1 = {101};

    struct Student *ptr = &s1;

    printf("%d", ptr->roll);
}
