// define recursive function and wap to factorial of a number with using recursive function.
#include<stdio.h>
int factorial(int n)
{
	if(n<=0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	printf("fact(%d)=%d",n,factorial(n));
	return 0;
}
