//WAP make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,num2,sum=0,rem;
	printf("enter a number:");
	scanf("%d",&num);
	num2=num;
	for(;num>0;)
	{
		rem=num%10;
		num=num/10;
		sum+=rem;
	}
	printf("\nthe sum of %d is %d",num2,sum);
	return 0;
}
