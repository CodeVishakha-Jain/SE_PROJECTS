//WAP to take input from user and cretae the calculator.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("\nAddition : %d",a+b);
	printf("\nSubtraction : %d",a-b);
	printf("\nMultiplication : %d",a*b);
	printf("\nDivision : %d",a/b);
	printf("\nM0odulo : %d",a%b);
	return 0;
}
