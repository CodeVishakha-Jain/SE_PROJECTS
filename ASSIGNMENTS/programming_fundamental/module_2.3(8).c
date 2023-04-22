//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,length;
	char a[20],c[20];
	printf("enter a string:");
	gets(a);
	length=strlen(a)-1;
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[length];
		length--;
	}
	c[i]='\0';
	printf("\nthe reverse of the %s is:%s\n",a,c);
	if(strcmp(a,c)==0)
	{
		printf("%s is palindrome",a);
	}
	else
	{
		printf("%s is non-palindrome",a);
	}
	return 0;
}
