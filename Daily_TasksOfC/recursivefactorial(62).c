//WAP to find factorial of a number.
int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
#include<stdio.h>
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	printf("fact(%d)=%d",num,fact(num));
	return 0;
}

