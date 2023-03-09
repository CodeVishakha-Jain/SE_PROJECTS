//Recursion:the process of calling itself again and again is called as recursion.

//Recursive function:when the function called itself is called recusive function.
#include<stdio.h>
int recursive(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else
	{
		return n+recursive(n-1);
		//when we return something it doesn't printed hence we have to print it using print statement.
	}
}
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	printf("Addition of Natural numbers:%d",recursive(num));
	return 0;
}
