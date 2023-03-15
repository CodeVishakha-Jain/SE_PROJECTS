//WAP to make fibbonacci series
#include<stdio.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf("enter terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
