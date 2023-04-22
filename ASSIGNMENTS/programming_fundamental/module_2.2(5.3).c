//WAP to print table up to given numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,j;
	printf("-----multiplication table-----\n");
	printf("enter a number till which you want multiplication table:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d X %d=%d",i,j,i*j);
			printf("\n");
		}
		printf("-----\n");
	}
	return 0;
}
