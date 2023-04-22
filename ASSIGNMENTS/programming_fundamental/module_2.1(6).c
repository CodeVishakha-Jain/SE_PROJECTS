//WAP to convert years into days and days into years.
#include<stdio.h>
#include<conio.h>
int main()
{
	float year;
	int day;
	printf("\n---year to day conversion---\n");
	printf("enter year:");
	scanf("%f",&year);
	day=year*365;
	printf("day %d for given year %.2f",day,year);
	printf("\n---day to year conversion---\n");
	printf("enter day:");
	scanf("%d",&day);
	year=(day/365);
	printf("year %.2f for given days %d",year,day);
	return 0;
}

