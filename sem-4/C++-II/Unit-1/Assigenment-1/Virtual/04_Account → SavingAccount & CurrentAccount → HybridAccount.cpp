#include<iostream>
using namespace std;

class Account
{
	public:
		int acc_nmbr,acc_balance;
		
		void input1()
		{
			cout << "ENter Account Number: ";
			cin >> acc_nmbr;	
			cout << "ENter Account Balance: ";
			cin >> acc_balance;
		}	
		void dsplay1()
		{
			cout << "Account Number is : " << acc_nmbr << endl;
			cout << "Account Balance is : " << acc_balance << endl;
		}
};

class Savingacc : virtual public Account
{
	public:
		float interest,intrate;
		void input2()
		{
			cout << "Enter Interest Rate : ";
			cin >> intrate;
		}
		
		void method()
		{
			interest=acc_balance*intrate/100;
		}
		
		void display2()		
		{
			cout << "Interest Amount is : " << interest << endl;
		}
};

class Currentacc : virtual public Account
{
	public:
			
};

class Hybridacc : public Savingacc , public Currentacc
{
	public:
			
};

int main()
{
	Hybridacc h;
	h.input1();
	h.input2();
	h.dsplay1();
	h.method();
	h.display2();
	
	return 0;	
}
