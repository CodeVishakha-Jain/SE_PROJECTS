//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter number:");
	scanf("%d",&n1);
	(n1%2==0)?printf("%d is even number",n1):printf("%d is odd number",n1);
}
