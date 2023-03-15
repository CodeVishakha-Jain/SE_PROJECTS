//WAP to sort the array of 5 elements.
#include<stdio.h>
int main()
{
	int i,j,min,temp,a[5];
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		min=i;
		for(j=i;j<5;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		printf("%d",a[i]);
	}
	printf("the sorted array:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
