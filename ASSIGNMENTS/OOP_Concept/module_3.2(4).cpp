//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class calculator
{
	public:
	calculator(int a,int b)
	{
		cout<<"addition of "<<a<<" and "<<b<<" is:"<<a+b;
		cout<<"\nsubtraction of "<<a<<" and "<<b<<" is:"<<a-b;
		cout<<"\nmultiplication of "<<a<<" and "<<b<<" is:"<<a*b;
		cout<<"\ndivision of "<<a<<" and "<<b<<" is:"<<a/b;
	}
};
int main()
{
	int n1,n2;
	cout<<"enter first number:";
	cin>>n1;
	cout<<"enter second number:";
	cin>>n2;
	calculator obj(n1,n2);
	return 0;
}

