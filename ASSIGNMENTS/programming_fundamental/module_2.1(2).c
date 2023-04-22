//WAP to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter number1:");
	scanf("%d",&a);
	printf("enter number2:");
	scanf("%d",&b);
	fflush(stdin);
	printf("\naddition=%d",a+b);
	printf("\nsubtraction=%d",a-b);
	printf("\nmultiplication=%d",a*b);
	printf("\ndivision=%d",a/b);
	printf("\nmodulo=%d",a%b);
	return 0;	
}
