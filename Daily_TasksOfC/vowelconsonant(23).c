//WAP to check the given alphabet is vowel or consonant.
#include<stdio.h>
int main()
{
	char c;
	printf("enter any alphabet:");
	scanf("%c",&c);
//	this is used for validating the capital and small alphabets.
//	here logical and ,logical operator is used.
	if(c>='A'&& c<='Z'|| c>='a'&& c<='z')	
	{
		switch(c)
		{
			//this nested pattern is used like logical or operation.
			case 'a':
				case 'A':
					case 'e':
						case 'E':
							case 'i':
								case 'O':
									case 'o':
										case 'u':
											case 'U':
												printf("vowel");
												break;
												
			default:printf("consonant");
					break;
		}
	}
	else
	{
		printf("invalid alphabet!!!!");
	}
}
