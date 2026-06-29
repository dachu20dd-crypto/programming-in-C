#include<stdio.h>

struct Student
{
    int roll;
    float marks;
};

void main()
{
    struct Student s1;

    s1.roll = 1;
    s1.marks = 95.5;

    printf("Roll = %d\n", s1.roll);
    printf("Marks = %.1f", s1.marks);
}
