//WAP to reverse a string and check that string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],s1[50];
	int i,j=0;
	printf("enter string:");
	gets(s);
	for(i=strlen(s)-1;i>=0;i--)
	{
		s1[j]=s[i];
		j++;
	}
	if(strcmp(s,s1)==0)
	{
		printf("the %s is palindrome",s);
	}
	else
	{
		printf("the %s is non-palindrome",s);
	}
	return 0;
}
