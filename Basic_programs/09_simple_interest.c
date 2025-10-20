#include<stdio.h>
void main()
{
  float p,n,r,simple_interest;
  printf("enter the value for p,n,r");
  scanf("%f%f%f",&p,&n,&r);
  simple_interest=(p*n*r)/100;
  printf("simple interest :%f",simple_interest);

}
