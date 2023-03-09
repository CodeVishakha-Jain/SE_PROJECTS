//WAP to addition of two paricular element
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a[5]={0,1,2,3,4};
	printf("Addition is %d",add(a[2],a[3]));
	return 0;
}
