#include<stdio.h>

struct Student
{
    int id;
    char grade;
};

void main()
{
    struct Student s1;

    s1.id = 101;
    s1.grade = 'A';

    printf("ID = %d\n", s1.id);
    printf("Grade = %c", s1.grade);
}
