//WAP to find factorial of a given number
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	//we have to check every case;
	printf("enter any number:");
	scanf("%d",&n);
	i=n;
	if(n==0)
	{
		printf("factorial of %d=%d",n,fact);
	}
	else if(n<0)
	{
		printf("invalid number");
	}
	else
	{
		while(i>=1)
		{
			fact=fact*i;
			i--;
		}
		printf("fact(%d)=%d\n",n,fact);
		printf("or\n%d!=%d\n",n,fact);
	}
	return 0;
}
