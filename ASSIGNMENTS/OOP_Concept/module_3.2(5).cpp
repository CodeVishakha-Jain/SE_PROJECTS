/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer
{
	public:
		int total_run,average_run,best_performance,out;
		void input_data(){}
		void average_runs(){}
		void display(){}
};
class batsman:public cricketer
{
	public:
		void input_data()
		{
			cout<<"enter total run:";
			cin>>total_run;
			cout<<"enter best performance:";
			cin>>best_performance;
		}
		void average_runs()
		{
			cout<<"enter the number of times out:";
			cin>>out;
			average_run=total_run/out;
			cout<<"now the average runs are:"<<average_run;
		}
		void display()
		{
			cout<<"\nbatsman is having total run:"<<total_run;
			cout<<"\nbatsman is having average run:"<<average_run;
			cout<<"\nbatsman is having best performnace:"<<best_performance;
		}
};
int main()
{
	batsman obj;
	obj.input_data();
	obj.average_runs();
	obj.display();
	return 0;
}
