//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include<stdio.h>
#include<conio.h>
void sorting(int a[])
{
	int c,i,j,temp,min,max
	;
	printf("-----menu-----\n");
	printf("0.Ascending Order\n");
	printf("1.Descending Order\n");
	printf("enter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 0:for(i=0;i<9;i++)
				{
					min=i;
					for(j=i+1;j<=9;j++)
					{
						if(a[j]<a[min])
						{
							min=j;	
						}
					}
					temp=a[min];
					a[min]=a[i];
					a[i]=temp;
			
						
				}
				for(i=0;i<=9;i++)
				{
					printf("%d\t",a[i]);
				}
			
				break;			
		case 1:for(i=0;i<9;i++)
				{
					max=i;
					for(j=i+1;j<=9;j++)
					{
						if(a[j]>a[max])
						{
							max=j;	
						}
					}
					temp=a[max];
					a[max]=a[i];
					a[i]=temp;
			
						
				}
				for(i=0;i<=9;i++)
				{
					printf("%d\t",a[i]);
				}
				break;
	}
}
int main()
{
	int i,a[10],b[10];
	printf("enter the first array elements:\n");
	for(i=0;i<=9;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	sorting(a);
	printf("\nenter the second array elements:\n");
	for(i=0;i<=9;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	sorting(b);
	return 0;
}
