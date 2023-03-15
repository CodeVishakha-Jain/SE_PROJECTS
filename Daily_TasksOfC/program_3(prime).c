//WAP to find that number is prime number or not.
#include<stdio.h>
int main()
{
	int n1,i;
	printf("enter number:");
	scanf("%d",&n1);
	for(i=2;i<n1;i++)
	{
		if(n1%i==0)
		{
			break;
		}
	}
	if(i==n1)
	{
		printf("%d number is prime",n1);
	}
	else
	{
		printf("%d number is non-prime",n1);
	}
	return 0;
}
