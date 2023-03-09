//WAP to take input from the user and print the table from 1 to the number given by the user.
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter any number till which you want the table:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\n",i,j,i*j);
		}
		printf("\n\n");
	}
}
