#include<stdio.h>
int add(int s, int a)
{
	return (s+a);
}
int main()
{
	int n,s=0,a;
	printf("Enter the number of numbers to add\n");
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		printf("Enter the  number\n");
		scanf("%d", &a);
	        s = add(s,a);	
	}

	printf("The sum of the numbers is %d \n",s); 
}
