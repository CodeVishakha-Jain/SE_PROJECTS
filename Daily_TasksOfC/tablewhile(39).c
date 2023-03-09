//WAP to print table of any number.
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("any number which you want to print the table:");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
	return 0;
}
