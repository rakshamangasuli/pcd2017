#include<stdio.h>
struct complex
{
     float real;
     float imaginary;
};
struct complex add(struct complex x, struct complex y);
 struct complex getcomplex()
{
     struct complex c;
     printf("Enter real and imaginary parts of a complex no.\n");
     scanf("%f%f",&c.real,&c.imaginary);
     return c;
}

int main()
{
      struct complex a;
      struct complex b;
      struct complex c;
      a=getcomplex();
      b=getcomplex();
      c=add(a,b);
      printf("The sum of two complex numbers is");
      printf("%f+i%f",c.real,c.imaginary);
}

struct complex add(struct complex x, struct complex y)
{
    struct complex c;
    c.real=x.real+y.real;
    c.imaginary=x.imaginary+y.imaginary;
    return c;
}

