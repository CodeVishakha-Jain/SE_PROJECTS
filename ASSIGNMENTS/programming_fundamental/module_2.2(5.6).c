//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,num2,rev=0,rem;
	printf("enter a number:");
	scanf("%d",&num);
	num2=num;
	for(;num>0;)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	printf("\nthe reverse of %d is %d",num2,rev);
	return 0;
}
