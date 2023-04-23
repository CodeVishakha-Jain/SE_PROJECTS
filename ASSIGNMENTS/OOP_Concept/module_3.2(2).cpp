//Define a class to represent a bank account. Include the following members:
//1. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//2. Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance
#include<iostream>
#include<cstring>
using namespace std;
class account
{
	public:
		string depositor;
		int account_no;
		int balance;
		int deposite_amount,withdrawl_amount;
		void getdata()
		{
			cout<<"please enter your name:";
			getline(cin,depositor); //for getting string with space using getline method.
			cout<<"please enter account number:";
			cin>>account_no;
			cout<<"please enter balance:";
			cin>>balance;
		}
		void deposite()
		{
			cout<<"\nplease enter the amount you want to deposite:";
			cin>>deposite_amount;
			balance=balance+deposite_amount;
			cout<<"\nnow the total balance is:"<<balance;
			
		}
		void withdraw()
		{
			if(balance>1500)
			{
				cout<<"\nplease enter amount which you want to withdraw:";
				cin>>withdrawl_amount;
				if((balance-withdrawl_amount)>1500)
				{
					balance=balance-withdrawl_amount;
					cout<<"\nnow the total balance is:"<<balance;
				}
				else
				{
					cout<<"\nplease enter less than the given withdrawl amount:";
					cin>>withdrawl_amount;
					if((balance-withdrawl_amount)>1500)
					{
						balance=balance-withdrawl_amount;
						cout<<"\nnow the total balance is:"<<balance;
					}
				}
			}
			else
			{
				cout<<"\ninsufficient balance";
			}
			
		}
		void display()
		{
			cout<<"\ndepositor_name:"<<depositor;
			cout<<"\naccount no is:"<<account_no;
			cout<<"\nbalance is:"<<balance;
		}
		
};
int main()
{
	int choice;
	account obj;
	obj.getdata();
	while(true)
	{
		cout<<"\n-----MENU-----";
		cout<<"\n1.deposite";
		cout<<"\n2.withdraw";
		cout<<"\n3.display";
		cout<<"\n please enter your choice:";
		cin>>choice;
		if (choice==1)
		{
			obj.deposite();
		}
		else if(choice==2)
		{
			obj.withdraw();
		}
		else if(choice==3)
		{
			obj.display();
		}	
		else
		{
			break;	
		}	
	}

	return 0;
}
