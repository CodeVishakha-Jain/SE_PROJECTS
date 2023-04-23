//Write a program of to swap the two values using templates
#include<iostream>
using namespace std;
template <typename t>
class a
{
	public:
		t a,b,temp;
		void getdata()
		{
			cout<<"enter num1:";
			cin>>a;
			cout<<"enter num2:";
			cin>>b;
		}
		void swap()
		{
			cout<<"before swap "<<a<<" and "<<b;
			temp=a;
			a=b;
			b=temp;
			cout<<"\nafter swap "<<a<<" and "<<b;
		}
};
int main()
{
	a <float>obj;
	obj.getdata();
	obj.swap();
	return 0;
}
