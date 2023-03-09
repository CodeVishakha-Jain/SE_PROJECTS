//WAP to call by reference
//while swapping using function when we use call by value for function then the main value of variable is not changed in main function.
//hence we use call by reference method for calling function.
//in call by reference we have to use another variable which is pointer,according to pointing to the value tha datatype of pointer is changed.
#include<stdio.h>
int swap(int *n1,int *n2)
{
	//int *n1=&a,int *n2=&b;
	//here we passed address of two variables to the pointer and then we changed the values pointed to that address,hence the value is swapped.
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("the value of A & B before swap:%d %d",a,b);
	swap(&a,&b);//we passed the address of two variables.
	printf("\nthe value of A & B after swap:%d %d",a,b);
	return 0;
}
