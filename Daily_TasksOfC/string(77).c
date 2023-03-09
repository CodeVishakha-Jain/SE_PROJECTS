//WAP for string.
/* string:array of characters
representation:" "
'\0':null character
"it is the collection/array of characters ,terminate with ,NUll pointer or Null character."

"like array strings are also indexible"

"string:index always starts with 0"

>>string initialization:
type-1:
	char a[length]={'a','b','c','d','g','\0'} //always require null character in this type of initialization.

type-2:
	char str1[]="hello 12 world";

>>in built string function to scan the multiline string.
		gets():gets(string_name)<<to scan the white space too
		puts():puts(string_name)<<to print the string.
*/
#include<stdio.h>
int main()
{
	char str[]={'a','b','c','d','\0'}; //it is not necessary to insert '\0' at the last element of array but we have to use null in this type of initialization.
	char str2[]="hello world";
	printf("string is:%s\n",str);
	printf("string is:%s\n",str2);
	return 0;
}
	 
