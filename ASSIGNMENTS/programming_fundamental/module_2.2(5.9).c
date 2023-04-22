//WAP you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,num,num2,rev=0,rem,first,last;
	printf("enter a number:");
	scanf("%d",&num);
	num2=num;
	for(;num>0;)
	{
		rem=num%10;
		num=num/10;	
		rev=rev*10+rem;
		if(i==1)
		{
			first=rem;
		}
		i++;
	}
	if(rev>0)
	{
		last=rev%10;
	}
	printf("\nthe sum of first and last digit of %d is %d",num2,first+last);
	return 0;
}
