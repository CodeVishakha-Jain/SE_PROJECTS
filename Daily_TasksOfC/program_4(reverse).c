//WAP to print the number in reverse order eg:64728---->reverse=82746
#include<stdio.h>
int main()
{
	int n1,i,rev=0;
	printf("enter number:");
	scanf("%d",&n1);
	for(;n1>0;)
	{
		i=n1%10;
		n1=n1/10;
		rev=rev*10+i;
	}
	printf("the revese number of %d :%d",n1,rev);
}
