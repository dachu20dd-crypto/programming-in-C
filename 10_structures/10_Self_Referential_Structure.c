#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void main()
{
    struct Node n1;

    n1.data = 10;
    n1.next = NULL;

    printf("%d", n1.data);
}
