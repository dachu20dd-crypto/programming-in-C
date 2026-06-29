#include<stdio.h>

struct Employee
{
    int id;
    float salary;
};

void main()
{
    struct Employee e1;

    e1.id = 10;
    e1.salary = 25000;

    printf("Employee ID = %d\n", e1.id);
    printf("Salary = %.2f", e1.salary);
}
