//WAP TO make pattern in rectangle.
//syntax:
// initialization;
//	while(condition)
//	{
//      outer loop
//		initialization;
//		while(condition)
//		{
//		inner loop	
//		step;
//		}
//      step;
//	}
#include<stdio.h>
int main()
{
		int i=0,j;
		while(i<=4)// this is for printing 5 number of rows
		{
			j=0;
			while(j<=4)//this is for printing 5 number of columns for each row
			{
				printf("*");
				j++;	
			}
			printf("\n");//this is for printing each row in diffrent line.
			i++;
		}
		return 0;
}
