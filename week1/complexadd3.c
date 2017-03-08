#include<stdio.h>
   struct complex 
     {
      float real;
      float imaginary;
          };
  struct complex add(struct complex x, struct complex y, struct complex z);
  struct complex getcomplex()
{
   struct complex d;
   printf("Enter real and imaginary parts of a number:\n");
   scanf("%f%f",&d.real ,&d.imaginary);
   return d;
}

int main(){
   struct complex a;
   struct complex b;
   struct complex c;
   struct complex d;
    a=getcomplex();
    b=getcomplex();
    c=getcomplex();
   d=add(a,b,c);
   printf("The sum of three complex numbers is:");
   printf("%f+i%f",d.real,d.imaginary);
}

struct complex add(struct complex x,struct complex y, struct complex z)
{
  struct complex d;
  d.real=x.real+y.real+z.real;
  d.imaginary=x.imaginary+y.imaginary+z.imaginary;
  return d;
}

