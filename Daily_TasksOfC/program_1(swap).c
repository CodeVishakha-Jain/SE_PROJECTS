//WAP to swap two numbers without using third variable.
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("before swapping:\n");
	printf("enter first number:");
	scanf("%d",&n1);
	printf("enter second number:");
	scanf("%d",&n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\nafter swapping");
	printf("\nfirst number:%d",n1);
	printf("\nsecond number:%d",n2);
	return 0;
	
}
