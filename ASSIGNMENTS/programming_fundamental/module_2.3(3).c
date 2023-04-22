//WAP to find reverse of string using recursion
#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse(char*);
int main()
{
	char a[20];
	int c;
	printf("enter a string:");
	gets(a);
	printf("the reverse of %s is:",a);
	reverse(a);
	return 0;
}

void reverse(char *a)
{

	if(*a!='\0')
	{    
		
		reverse(a+1);
		printf("%c",*a);
	}
}
