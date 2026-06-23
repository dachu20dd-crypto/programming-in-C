#include<stdio.h>
void main()
{
  float peri_triangle,a,b,c;
  printf("enter the 3 sides of a triangle");
  scanf("%f%f%f",&a,&b,&c);
  peri_triangle=a+b+c;
  printf("the perimeter of triangle is %f",peri_triangle);

}
