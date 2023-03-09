//WAP to make pattern and middle element must be dollar in rectangle
#include<stdio.h>
int main(){
	int i=0,j;
	while(i<=4)
	{
		j=0;
		while(j<=4)
		{
			if(i==2 && j==2)
			{
				printf("$ ");
			}
			else
			{
				printf("* ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
}
