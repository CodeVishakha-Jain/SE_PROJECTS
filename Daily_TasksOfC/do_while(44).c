//WAP to use do while loop
//do while loop:is exit control loop,atleast once the execution is done without checking the condition.
//syntax:
//initialization
//do 
//{
//body of loop	
//step;
// }while(condition);
#include<stdio.h>
int main()
{
	int i=100;
	//here the condition is false but the loop runs for once everytime.
	do
	{
		printf("%d\n",i+1);
	}while(i<10);
	printf("program stopped");
	return 0;
} 
