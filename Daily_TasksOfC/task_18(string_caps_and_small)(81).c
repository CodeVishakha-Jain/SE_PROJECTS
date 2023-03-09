//WAP to count capital and small letters.
#include<stdio.h>
int main()
{
	char str[30];
	int small=0,capital=0,i;
	printf("enter string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{

		if(str[i]>'a'&& str[i]<='z')
		{
			small++;
		}
		else if(str[i]>'A' && str[i]<='Z')
		{
			capital++;
		}
	}
	printf("no of capital letters:%d\nno of small letters:%d",capital,small);
	return 0;
}
