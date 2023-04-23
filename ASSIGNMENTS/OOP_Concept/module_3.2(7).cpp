/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class Students
{
	public:
		int roll_no;
		void input_rollno()
		{
			cout<<"enter your roll no:";
			cin>>roll_no;
		}
		
};
class Test
{
	public:
		int mark1,mark2;
		void input_marks()
		{
			cout<<"enter your marks in maths:";
			cin>>mark1;
			cout<<"enter your marks in science:";
			cin>>mark2;
		}
};
class Result:public Test,public Students
{
	public:
		int total_marks;
		void total_mark()
		{
			total_marks=mark1+mark2;
			cout<<"your total mark is:"<<total_marks;
		}
};
int main()
{
	Result obj;
	obj.input_rollno();
	obj.input_marks();
	obj.total_mark();
	return 0;
}

