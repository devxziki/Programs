#include<iostream>
using namespace std;

class Bank
{
    public:float ac_number,balance,d_balance,w_balance;
	public:string ac_holder;
	
	void get()
	{
		cout << "Enter Acount Number: ";
		cin >> ac_number;
		
		cout << "Enter Acount  Holder: ";
		cin >> ac_holder;
		
		cout << "Enter Balance: ";
		cin >> balance;
	}	
	
	void Deposite()
	{
		cout << "Enter Amount You wanted to deposit: ";
		cin >> d_balance;
	}
	
	void Withdraw()
	{
		cout << "Enter Amount you Wanted to deposit: ";
		cin >> w_balance;
	}
	
	void Display()
	{
		cout << "Acount Number is: " << ac_number << "\n";
		cout << "Acount Holder Name is: " << ac_holder << "\n";
		cout << "Acount Balance  is: " << balance << "\n";
		cout << "Acount Balance  Deposited is: " << d_balance << "\n";
		cout << "Acount Balance  Withdrawal is: " << w_balance << "\n";
		cout << "Total Acount Balance after completing the Withdrawl and deposiing process is: " << balance+d_balance-w_balance << "\n";
	}
};

int main()
{
	Bank k;
	k.get();
	k.Deposite();
	k.Withdraw();
	k.Display();
}
