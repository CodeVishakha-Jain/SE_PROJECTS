//WAP to call by value.
//in call by value while swapping by function and print it in main method,the main variable's value doesn't get changed.
//hence for that we have to use call by reference which is verymuch useful to change the original value.

//now we study the call by value program
#include<stdio.h>
int swap(int n1,int n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main()
{
	int n1,n2;
	printf("enter two numbers:");
	scanf("%d %d",&n1,&n2);
	printf("the value of A & B before swap:%d %d",n1,n2);
	swap(n1,n2);
	printf("\nthe value of A & B after swap:%d %d",n1,n2);
	return 0;
}
