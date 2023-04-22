//WAP to take 10 no. Input from user and find out …
//How many Even numbers are there
//How many odd numbers are there
//Sum of even numbers
//Sum of odd numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a,b,count_even=0,count_odd=0,sum_even=0,sum_odd=0;
	for(i=0;i<=9;i++)
	{n
		printf("enter %d number:",i+1);
		scanf("%d",&a);
		if(a%2==0)
		{
			count_even++;
			sum_even+=a;
		}
		else
		{
			count_odd++;
			sum_odd+=a;
		}
	}
	printf("\ncount of even numbers:%d",count_even);
	printf("\ncount of odd numbers:%d",count_odd);
	printf("\nsum of even numbers:%d",sum_even);
	printf("\nsum of odd numbers:%d",sum_odd);
	return 0;
}
