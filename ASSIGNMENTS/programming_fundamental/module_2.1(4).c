//WAP to find simple interest.
#include<stdio.h>
#include<conio.h>
int main()
{
	int p,r,t,si;
	printf("---simple interest---\n");
	printf("enter a principle amount:");
	scanf("%d",&p);
	printf("enter a rate:");
	scanf("%d",&r);
	printf("enter a time period:");
	scanf("%d",&t);
	si=p*r*t/100;
	printf("simple interest=%d",si);
	return 0;
}
