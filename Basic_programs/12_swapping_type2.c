#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping\n");
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
}
