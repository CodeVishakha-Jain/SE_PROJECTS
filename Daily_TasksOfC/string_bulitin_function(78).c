//WAP To use gets() and puts() function.
#include<stdio.h>
int main()
{
	char str[20];
	char str2[]="hello world";
	printf("enter your name:",str);
	gets(str);
	printf("my name is:%s\n",str);
	puts(str);
	printf("string is:%s\n",str2);
	return 0;
}
