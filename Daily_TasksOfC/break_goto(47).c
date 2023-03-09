//WAP the jumping statements break,continue.
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=5;i++)
	{
		if(i==3)
		{
			printf("break statement is executed\n");
			break;
		}
		printf("%d\n",i);
	}
	printf("\n\n");
	for(i=0;i<=5;i++)
	{
		if(i==3)
		{
			printf("continue statement is executed\n");
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}
