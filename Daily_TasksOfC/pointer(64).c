
//pointer:
//pointer is used for pointing to the particular address and inside address value.
//pointer is a variable that can store address of another variable.
//syntax:datatype *ptr_name;
//int *a;

//types of operator in pointer:
//1)*:indirection operator
//	use to declare a pointer variable.
//	use to store value of variable(which address is stored inside the pointer)
//2)&:address operator
//	to store the address of variable in pointer.
#include<stdio.h>
int main()
{
	//how to assign address of a pointer.
	int a=34;
	int *p;
	p=&a;
	printf("the value inside the address(%d) is %d",p,*p);
	//here p is the address of variable and *p is a value pointing to the variable.
	//p=address;
	//*p=value;
	return 0;
}

