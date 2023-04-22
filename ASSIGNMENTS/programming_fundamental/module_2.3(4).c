//WAP to find factorial using recursion.
#include<stdio.h>
#include<conio.h>
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
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	printf("fact(%d)=%d",num,fact(num));
	return 0;
}
