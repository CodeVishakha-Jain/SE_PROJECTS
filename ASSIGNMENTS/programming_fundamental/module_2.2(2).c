//WAP to swap two numbers without using third variable.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("-----swap of two variable-----\n");
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n-----After swap of two variable-----\n");
	printf("the first number=%d\n",a);
	printf("the second number=%d",b);
	return 0;
}
