//WAP for functions:
// functions() is a block of code that codes are used again and again in a program.

//	>>benefits of using functions:
//		>it increase code reusuability.
//		>decrease the line of code. 
//		>give a structure to your program.
//	
//	>>how to declare a function:
//		>syntax:return_type function_name(parameter/arguments);
//		
//		void my_function();
//	
//	>>types of functions in c:
//		1)user defined
//			ex: int add(),void display(),etc
//		2)in built function
//			printf(),scanf(),clrscr(),getch(),etc. 
//	
//	>>user_defined function has four types:
//		1)function with return type and arguments.
//		2)function with return type and no arguments.
//		3)function with no return type and arguments
//		4)function with no return type and no arguments
#include<stdio.h>
char char_check();
int main()
{   
	printf("\n---------Welcome---------");
	//function calling
	char_check();
	return 0;
}
//function definition
char char_check()//formal parameter
{
	char a;//local variable
	printf("\nenter vowel:");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("invalid input");
 	}
}
