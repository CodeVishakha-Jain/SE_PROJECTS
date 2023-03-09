//WAP reverse of a number
#include<stdio.h>
int main()
{
	int rem,num,rev=0;
	printf("enter any number which you want to reverse:");
	scanf("%d",&num);
	for(;num>0;)
	{
		rem=num%10;
		num/=10;
//		printf("%d",rem);
		rev=rev*10+rem;
	}
	printf("the reverse of the number:%d",rev);
	return 0;
}
