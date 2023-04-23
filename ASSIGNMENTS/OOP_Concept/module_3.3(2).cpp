//Write a program of to sort the array using templates.
#include<iostream>
using namespace std;
template <typename t>
class a
{
	public:
		t a[10];
		void getdata()
		{
			int i;
			cout<<"-----Array a:-----\n";
			for(i=0;i<=9;i++)
			{
				cout<<"a["<<i<<"]=";
				cin>>a[i];
			}
		}
		void sort()
		{
			t temp;
			int i,j,min;
			cout<<"\n-----sorting-----\n";
			for(i=0;i<=8;i++)
			{
				min=i;
				for(j=i+1;j<=9;j++)
				{
					if(a[j]<a[min])
					{
						min=j;
					}
				}
				temp=a[min];
				a[min]=a[i];
				a[i]=temp;
			}
		}
		void display()
		{
			int i;
			cout<<"-----Array a:-----\n";
			for(i=0;i<=9;i++)
			{
				cout<<"\na["<<i<<"]="<<a[i];
			}
		}
};
int main()
{
	a <float>obj;
	obj.getdata();
	obj.sort();
	obj.display();
	return 0;
}
