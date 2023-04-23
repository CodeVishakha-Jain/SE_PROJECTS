//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
	public:
    void add(int a,int b)
	{
		cout<<"\naddition of "<<a<<" and "<<b<<" is "<<a+b;
	}
	void sub(int a,int b)
	{
		cout<<"\nsubtraction of "<<a<<" and "<<b<<" is "<<a-b;
	}
	void mult(int a,int b)
	{
		cout<<"\nmultiplication of "<<a<<" and "<<b<<" is "<<a*b;
	}
	void div(int a,int b)
	{
		cout<<"\ndivision of "<<a<<" and "<<b<<" is "<<a/b;
	}
	void mod(int a,int b)
	{
		cout<<"\nmod of "<<a<<" and "<<b<<" is "<<a%b;
	}
};
int main()
{
	int a,b;
	calculator obj;
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter second number:";
	cin>>b;
	obj.add(a,b);
	obj.sub(a,b);
	obj.mult(a,b);
	obj.div(a,b);
	obj.mod(a,b);
	return 0;
}
