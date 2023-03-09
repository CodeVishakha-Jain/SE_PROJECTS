//WAP to check the string is palindrome or not,we have not to use strrev() function.
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i,j=0;
	printf("enter any string:");
	gets(s1);
	strcpy(s2,s1);
	for(i=strlen(s2)-1;i>=0;i--)
	{
		s1[j]=s2[i];
		j++;
	}
	printf("the orginal reverse string:%s\n",s1);
	if(strcmp(s1,s2)==0)
	{
		printf("the string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
	return 0;
} 
