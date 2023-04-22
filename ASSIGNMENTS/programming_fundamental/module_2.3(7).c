//WAP Find out length of string without using inbuilt function.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,count=0;
	char a[20];
	printf("enter a string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	printf("\nthe length of the %s is:%d",a,count);
	return 0;
}
