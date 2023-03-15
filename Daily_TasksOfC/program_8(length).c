//WAP to find out length of string without using inbuilt function.
#include<stdio.h>
int main()
{
	char s[50];
	int i,len=0;
	printf("enter string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	printf("the length of string:%d",len);
}
