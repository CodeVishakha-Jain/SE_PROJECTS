//WAP for array sorting in ascending order.
#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	printf("enter the elements of array:\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[i])//this is selection sort
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nAscending order Sorted Array:");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]:%d",i,a[i]);
	}
}
