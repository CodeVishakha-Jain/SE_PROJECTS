//WAP for array scanning and printing.
#include<stdio.h>
int main()
{
	int i;
	int a[6];//Array Declaration at array declaration we have to give size to the array but at array initialization if don't give size then compiler assumes according to the number of element.
	for(i=0;i<7;i++)
	{
		printf("enter value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		printf("\nvalue of a[%d]:%d",i,a[i]);
	}
	return 0;
}
