//WAP to print Fibonacci series up to given number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,a,b,c;
	printf("enter the number for displaying fibonacci series:");
	scanf("%d",&num);
	a=0;
	b=1;
	printf("\n----- fibbonacci series-----\n");
	for(i=1;i<=num;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
