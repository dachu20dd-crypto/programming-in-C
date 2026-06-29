#include<stdio.h>

typedef struct
{
    int roll;
    char name[20];
} Student;

void main()
{
    Student s1 = {101, "Divya"};

    printf("Roll = %d\n", s1.roll);
    printf("Name = %s", s1.name);
}
