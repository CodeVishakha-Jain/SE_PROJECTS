//WAP to compare two strings.
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("enter first string:");
	gets(s1);
	printf("enter second string:");
	gets(s2);
	printf("strcmp() used to compare two strings:");
	if(strcmp(s1,s2)==0)
	{
		printf("same");
	}
	else
	{
		printf("diff");
	}
	return 0;
}
