#include<stdio.h>
   
    int add(int a, int b, int c)
    {
     int d;
     d=a+b+c;
     return d;
     }
   
     int main(){
     int x, y, z;
     printf("Enter 3 numbers:");
     scanf("%d%d%d", &x, &y, &z);
     int u=add(x, y, z);
     printf("%d", u);
}
    
