//WAP for using built -in string functions.
//string built-in functions:
//strcpy(s1,s2):this function is used for copying the s2 string into s1 string.
//strlen(s1):this function is used for printing length of the string.
//strcmp(s1,s2):this function is used for printing the boolean value according to the comparison of two strings,if both strings are same then it returns 0,otherwise it returns 1.
//strcat(s1,s2):this function is used for concating the s2 string at the end of the s1 string, s1 string is modified.
//strrev(s1):this function is used for printing the reverse of the s1 string ,s1 string is modified.

#include<stdio.h>
#include<string.h>  //this header file is used for accessing the built-in functions of strings.
int main()
{
	char s1[100],s2[100];
	int len;
	printf("enter string:");
	gets(s1);
	len=strlen(s1);
	strcpy(s2,s1);
	printf("length of string:%d\n\n",len);
	printf("newly created string:%s\n",s2);
	strcat(s1,s2);
	printf("concated string:%s\n",s1);
	strrev(s1);
	printf("reverse of s1: %s",s1);
	return 0;
}

