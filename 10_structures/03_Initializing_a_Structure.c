#include<stdio.h>

struct Student
{
    int roll;
    char name[20];
};

void main()
{
    struct Student s1 = {101, "Divya"};

    printf("Roll = %d\n", s1.roll);
    printf("Name = %s", s1.name);
}
