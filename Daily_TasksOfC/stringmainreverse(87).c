//WAP to reverse the string an store it in the original string.
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
	printf("the orginal reverse string:%s",s1);
	return 0;
} 
