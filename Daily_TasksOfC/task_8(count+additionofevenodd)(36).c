//WAP to take 10 number from user and identify even,odd number and count even and odd numbers.
#include<stdio.h>
int main()
{
	int num,i,odd=0,even=0,even_sum=0,odd_sum=0;
	printf("enter any ten numbers:\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			even_sum=even_sum+num;
			even++;
		}
		else
		{
			odd_sum=odd_sum+num;
			odd++;
		}
	}
	printf("count of even numbers : %d\n",even);
	printf("count of odd numbers : %d\n",odd);
	printf("addition of even number:%d\n",even_sum);
	printf("addition of odd number:%d\n",odd_sum);
	
	return 0;
}
