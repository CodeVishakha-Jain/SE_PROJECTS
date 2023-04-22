//WAP to find out the max number from given array using function.
#include<stdio.h>
#include<conio.h>
void max(int []);
int main()
{
	int i,a[10];
	printf("---Scanning of ten numbers---\n");
	for(i=0;i<=9;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	max(a);
	return 0;
}
void max(int a[10])
{
	int max,i;
	max=a[0];
	for(i=1;i<=9;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("max of the given 10 numbers:%d",max);
}
