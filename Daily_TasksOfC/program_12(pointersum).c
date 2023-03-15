//WAP to make addition of two numbers using pointer.
#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	printf("enter number1:");
	scanf("%d",&a);
	printf("enter number2:");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	printf("the sum of two numbers:%d",*p1+*p2);
	return 0;10
	
}
