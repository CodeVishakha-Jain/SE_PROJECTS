//WAP to make pattern.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char c;
	for(i=1;i<=5;i++)
	{
		c='A';
		for(j=1;j<=i;j++)
		{
			printf("%c ",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}