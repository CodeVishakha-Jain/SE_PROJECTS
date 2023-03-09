//WAP to take input of term from the user and print the fibbonacci series upto the term.
#include<stdio.h>
int main()
{
	int i,n,a3,a1=0,a2=1;
	printf("enter the number of terms you want to print in fibbonacci series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a1);
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
	return 0;
}
