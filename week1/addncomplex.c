#include<stdio.h>
typedef struct{
    int real;
    int imag;
}complex;
complex num;
complex findsum(int n)
{
	int i,real[n],imag[n];
	for(i=0;i<n;i++){
		int j=i+1;
		printf("enter real and complex part of %d number:",j);
		scanf("%d%d",&real[i],&imag[i]);
		num.real+=real[i];
		num.imag+=imag[i];
	}
	return num;
}

int main(){
	int n;
	printf("how many complex numbers do you want to add:");
	scanf("%d",&n);
	num=findsum(n);
	printf("the sum is %d+i%d",num.real,num.imag);    
    return 0;
}
