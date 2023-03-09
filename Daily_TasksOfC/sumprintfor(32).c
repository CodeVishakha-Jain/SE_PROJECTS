//WAP take a number from user and print 1 to number and sum of number.
#include<stdio.h>
int main()
{
	int i,j,n,sum=0;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("sum of all the number = %d",sum);
	return 0;
}
