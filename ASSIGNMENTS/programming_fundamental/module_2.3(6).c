//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,a[2][2],b[2][2],c[2][2];
	printf("enter matrix A elements:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter matrix B elements:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\naddition of two matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	printf("\nsubtraction of two matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	printf("\nmultiplication of two matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			c[i][j]=0;
			for(k=0;k<=1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
