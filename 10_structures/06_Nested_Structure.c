#include<stdio.h>

struct Address
{
    char city[20];
};

struct Student
{
    int roll;
    struct Address addr;
};

void main()
{
    struct Student s1 = {101, "Chennai"};

    printf("Roll = %d\n", s1.roll);
    printf("City = %s", s1.addr.city);
}
