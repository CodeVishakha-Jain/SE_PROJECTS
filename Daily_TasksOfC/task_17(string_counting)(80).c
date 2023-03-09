//WAP to find number of spaces ,digits,consonants ,vowel.
#include<stdio.h>
int main()
{
	char str[30];
	int wh_space=0,digit=0,odd_digit=0,even_digit=0,consonant=0,vowel=0,i;
	printf("enter string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((int)(str[i])==32)
		{
			wh_space++;
		}
		else if((str[i])>='0' && (str[i])<='9')
		{
			digit++;
			if((int)(str[i])%2==0)
			{
				even_digit++;
			}
			else
			{
				odd_digit++;
			}
		}
		else if(str[i]=='a'|| str[i]=='e' ||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			vowel++;
		}
		else if(str[i]>'a'&& str[i]<='z'|| str[i]>'A' && str[i]<='Z')
		{
			consonant++;
		}
		else
		{
			
		}
	}
	printf("no of white spaces:%d\n",wh_space);
	printf("no of digits:%d and no of even digits:%d and no of odd digits:%d \n",digit,even_digit,odd_digit);
	printf("no of vowels:%d\n",vowel);
	printf("no of consonant:%d",consonant);
	return 0;
}
