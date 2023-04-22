//WAP to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,num2,rem,max=0;
	printf("enter a number:");
	scanf("%d",&num);
	num2=num;
	for(;num>0;)
	{
		rem=num%10;
		num=num/10;
		if(max<rem)
		{
			max=rem;
		}
	}
	printf("\nthe max of %d is %d",num2,max);
	return 0;
}
