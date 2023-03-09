//WAP to find the length of string without using inbuilt functionality
#include<stdio.h>
int main()
{
	char name[20];
	int len=0,i;
	printf("enter name:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		len+=1;
	}
	printf("length of string:%d",len);
	return 0;
}
