//WAP to show
//1. Monday to Sunday using switch case
//2. Vowel or Consonant using switch case
#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	char c;
	printf("-----day conversion-----\n");
	printf("please take number from 0-6 for days:");
	scanf("%d",&number);
	switch(number)
	{
		case 0:printf("yay!it is sunday");
				break;
		case 1:printf("yay!it is monday");
				break;
		case 2:printf("yay!it is tuesday");
				break;
		case 3:printf("yay!it is wednesday");
				break;
		case 4:printf("yay!it is thursday");
				break;
		case 5:printf("yay!it is friday");
				break;
		case 6:printf("yay!it is saturday");
				break;
		default:printf("invalid number");
	}
	fflush(stdin);
	printf("\n-----vowel-consonant identification-----\n");
	printf("enter any alphabet:");
	scanf("%c",&c);
	if(c>='a'&& c<='z'|| c>='A'&& c<='Z')
	{
		switch(c)
		{
			case 'a':
				case 'A':
					case 'e':
						case 'E':
							case 'i':
								case 'I':
									case 'o':
										case 'O':
											case 'u':
												case 'U':
														printf("yay!it is vowel");
														break;
			
		default:printf("it is consonant");
		}
	}
	return 0;	
}
