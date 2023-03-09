//WAP for array
// Array:Array is a linear data structure that can hold multiple data of same datatype with unique index.
//Array:A collection of same type of elements.

//syntax:data_type array_name[size];
//ex:int arr[5],is having total 20 bytes because each element is having 4 bytes so for 5 elements =20 bytes. 
//NOTE:Array index always starts with 0.

//Array Initialization:
//float p[5]={3.4,5.6,7.8};
//float my_array[]={3.5,4.5,55.6,89.9};
//the above array is dynamic we haven't given any size of the array so the array assume is size according to the given number of values.

#include<stdio.h>
int main()
{
	int i;
	int a[6]={2,5,4,3,7,8};//Array Initialization
	for(i=0;i<7;i++)
	{
		printf("a[%d]:%d\n",i,a[i]);
	}
	return 0;
}
