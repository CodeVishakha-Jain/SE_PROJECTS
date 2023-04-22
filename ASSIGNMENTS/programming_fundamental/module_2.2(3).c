//WAP to find number is even or odd using ternary operator
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("-----even odd using ternary operator------\n");
	printf("enter a number:");
	scanf("%d",&a);
	(a%2==0)?printf("%d is even number",a):printf("%d is odd number",a);
	
	return 0;
}
