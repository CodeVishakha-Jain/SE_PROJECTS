//WAP to check the range of the number
#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num>=1 && num<=10)
	{
		printf("number is in range 1 to 10");
	}
	else if(num>=11 && num<=20)
	{
		printf("number is in range 11 to 20");
	}
	else if(num>=21 && num<=30)
	{
		printf("number is in range 21 to 30");
	}
	else if(num>=31 && num<=40)
	{
		printf("number is in range 31 to 40");
	}
	else if(num>=41 && num<=50)
	{
		printf("number is in range 41 to 50");
	}
	else
	{
		printf("number is invalid");
	}
	return 0;
}
