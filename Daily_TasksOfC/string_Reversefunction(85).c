//WAP to reverse the string.
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	printf("enter your string:");
	gets(s1);
	strrev(s1);
	printf("reverse string is:%s",s1);
}
