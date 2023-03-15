//WAP to make a summation of given number(Eg>1523 Ans:-11)
#include<stdio.h>
int main()
{
	int n1,n2,i,sum=0;
	printf("enter number:");
	scanf("%d",&n1);
	n2=n1;
	for(;n2>0;)
	{
		i=n2%10;
		n2=n2/10;
		sum=sum+i;
	}
	printf("the summation of %d:%d",n1,sum);
}
