//WAP TO make pattern in rectangle.
//syntax:
//	for(initialization;condition;step)
//	{
//      outer loop
//		for(initialization;condition;step)
//		{
//		inner loop	
//		}
//	}
#include<stdio.h>
int main()
{
		int i,j;
		for(i=0;i<=4;i++)// this is for printing 5 number of rows
		{
			for(j=0;j<=4;j++)//this is for printing 5 number of columns for each row
			{
				printf("*");	
			}
			printf("\n");//this is for printing each row in diffrent line.
		}
		return 0;
}
