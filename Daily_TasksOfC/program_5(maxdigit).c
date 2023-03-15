//WAP to print number find max from given number(EG NO--1562 max number is 6)
#include<stdio.h>
int main()
{
	int n1,n2,i,max;
	printf("enter number:");
	scanf("%d",&n1);
	n2=n1;
	for(;n2>10;)
	{
		i=n2%10;
		n2=n2/10;
		if(i>max)
		{
			max=i;
		}
		
	}
	printf("the max number of %d :%d",n1,max);
}
