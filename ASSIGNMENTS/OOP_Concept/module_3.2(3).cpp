//Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
inline void multi_cubic(int n1,int n2)
{
	cout<<"multiplication values:"<<n1*n2;
	cout<<"\ncubic value of "<<n1<<" is :"<<n1*n1*n1;
	cout<<"\ncubic value of "<<n2<<" is :"<<n2*n2*n2;
}
int main()
{
	int n1,n2;
	cout<<"enter first number:";
	cin>>n1;
	cout<<"enter second number:";
	cin>>n2;
	multi_cubic(n1,n2);
	return 0;
}
