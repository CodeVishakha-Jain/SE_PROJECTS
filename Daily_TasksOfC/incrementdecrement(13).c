//WAP for postincrement,postdecrement,preincrement,predecrement.
#include<stdio.h>
int main()
{
	int a=12,b;
	//Unary ++,Unary --;
	b=a--;//first the value of a is stored in b and then it is decremented by 1.
	//when a-- comes we have to think that first store and then decrement .
	printf("\n\nA=%d",a);
	printf("\nB=%d",b);
	return 0;
}
