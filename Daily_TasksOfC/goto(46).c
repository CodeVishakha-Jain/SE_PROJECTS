//WAP jumping statements:goto
#include<stdio.h>
int main()
{
	int i=1;
	mylab:
	for(;i<=10;i++)
	{
		if(i==7)
		{
			i++;
			printf("hello\n");
			goto mylab;
		}
		printf("%d\n",i);
	}
	return 0;
}
