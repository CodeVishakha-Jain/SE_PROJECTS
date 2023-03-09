//WAP to reverse the string manually.
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int i;
	printf("enter any string:");
	gets(s1);
	printf("your reverse string:");
	for(i=strlen(s1)-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
	return 0;
}
