//WAP to make multiplication of two matrix using 2-D array.
#include<stdio.h>
int main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j,k;
	printf("------------first matrix-----------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	printf("------------second matrix-----------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("m2[%d][%d]=",i,j);
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}
	printf("------------matrix multipliication-----------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m3[i][j]=0;
			for(k=0;k<3;k++)
			{
				m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
}
