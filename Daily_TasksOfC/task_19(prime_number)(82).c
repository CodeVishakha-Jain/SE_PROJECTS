//WAP to check if it prime numbr or not
#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter any number:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			break;
		}
	}
	if(i==num)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is non-prime number",num);
	}
}
