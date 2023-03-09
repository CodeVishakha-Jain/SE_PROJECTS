//WAP take a number from user and print 1 to number and sum of number.
#include<stdio.h>
int main()
{
	int i,j,n,sum=0;
	i=1;
	printf("enter any number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}
	printf("sum of all the number = %d",sum);
	return 0;
}
