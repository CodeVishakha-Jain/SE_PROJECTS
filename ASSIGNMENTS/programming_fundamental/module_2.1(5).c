//WAP to check if the given year is a leap year or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("enter a year:");
	scanf("%d",&year);2
	if(year%4==0)
	{
		printf("the %d year is leap year",year);
	}
	else
	{
		printf("the %d year is non-leap year",year);
	}
	return 0;
}
