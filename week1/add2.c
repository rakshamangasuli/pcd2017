#include<stdio.h>

int add(int a, int b)
{
  int c;
  c=a+b;
  return c;
}

int main()
{
int x,y;
printf("Enter 2 numbers:");
scanf("%d%d", &x, &y);
int z=add(x,y);
printf("%d", z);
}

