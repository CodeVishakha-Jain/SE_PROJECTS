//WAP to print factorial of given number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,fact=1,i;
	printf("enter a number:");
	scanf("%d",&num);
	if(num<=1)
	{
		printf("fact(%d)=%d",num,fact);
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		printf("fact(%d)=%d",num,fact);
	}
	return 0;
}
