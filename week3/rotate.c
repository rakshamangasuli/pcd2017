#include<stdio.h>

unsigned int RightShift(unsigned int x, unsigned int n)
{
	for(int i=1;i<=n;i++)
	{
		if(x%2==0)
		{
  			x=x>>1;
		 }	
   		else
		{
			x=x>>1;
      			x=x+(1<<31);
  		}
	}
	return x;
}

int main()
{
  unsigned int x,n,result;
  printf("Enter x:");
  scanf("%u",&x);
  printf("Enter how many times to rotate:");
  scanf("%u",&n);
  result=RightShift(x,n);
  printf("Answer is: %u",result);

}
