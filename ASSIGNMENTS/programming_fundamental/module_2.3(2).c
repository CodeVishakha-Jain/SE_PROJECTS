//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	int ch;
	printf("enter number1:");
	scanf("%d",&a);
	printf("enter number2:");
	scanf("%d",&b);
	fflush(stdin);
	printf("\n-----menu-----\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulo\n");
	printf("enter choice for operation:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\naddition=%d",a+b);
				break;
		case 2:printf("\nsubtraction=%d",a-b);
				break;
		case 3:printf("\nmultiplication=%d",a*b);
				break;
		case 4:printf("\ndivision=%d",a/b);
				break;
		case 5:printf("\nmodulo=%d",a%b);
				break;
		default:printf("invalid operator");
	}
	return 0;	
}
