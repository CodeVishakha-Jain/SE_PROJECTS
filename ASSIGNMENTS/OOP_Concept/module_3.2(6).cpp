/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Hierarchical Inheritance)*/
#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
		
};
class student:public person
{
	public:
		int percentage;
		student()
		{
			name="abc";
			age=18;
		}
		void getdata()
		{
			cout<<"----student----\n";
			cout<<"enter the name of the student:";
			cin>>name;
			cout<<"enter the age of the student:";
			cin>>age;
			cout<<"enter the percentage of the student:";
			cin>>percentage;
		}
		void displaydata()
		{
			cout<<"-----student details-----";
			cout<<"\nstudent name:"<<name;
			cout<<"\nage of the student:"<<age;
			cout<<"\npercentage of the student:"<<percentage;
		}
};
class teacher:public person
{
	public:
		int salary;
		teacher()
		{
			name="abc";
			age=18;
		}
		void getdata()
		{
			cout<<"\n\n----teacher----\n";
			cout<<"enter the name of the teacher:";
			cin>>name;
			cout<<"enter the age of the teacher:";
			cin>>age;
			cout<<"enter the salary of the teacher:";
			cin>>salary;
		}
		void displaydata()
		{
			cout<<"-----teacher details-----";
			cout<<"\nteacher name:"<<name;
			cout<<"\nage of the teacher:"<<age;
			cout<<"\nsalary of the teacher:"<<salary;
		}
};
int main()
{
	student obj1;
	teacher obj2;
	obj1.getdata();
	obj1.displaydata();
	obj2.getdata();
	obj2.displaydata();
	return 0;
}
