#include<iostream>
using namespace std;

class Accounts
{
	public:
		int accnmbr,balance;
		void ainput()
		{
			cout << "Enter Account Number : ";
			cin >> accnmbr;
			cout << "Enter Account Balance : ";
			cin >> balance;
		}
		void aoutput()
		{
			cout << "Account Number is : " << accnmbr << endl;
			cout << "Account Balance is : " << balance << endl;
		}
};

class Savings_accounts : public Accounts
{
	public:
		float intrate;
		void sainput()
		{
			cout << "Enter Intrest Rate : ";
			cin >> intrate;
		}
		void saoutput()
		{
			cout << "Intreset Rate is : " << intrate << endl;
			cout << "Yearly Intrest is : " << balance*intrate << endl;
		}
};

int main()
{
	Savings_accounts sa;
	sa.ainput();
	sa.sainput();
	sa.aoutput();
	sa.saoutput();
	return 0;
}
