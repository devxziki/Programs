#include<iostream>
using namespace std;

class Account{
	public:
		virtual void interestRate(){
			cout << "Employee: "<< endl;
		}
};

class Saving_account: public Account{
	public:
		void interestRate(){
			cout << "Amount in saving account is: 20,000 " << endl;
		}
};

class Curr_account: public Account{
	public:
		void interestRate(){
			cout << "Amount in Current account  is: 10,000 " << endl;
		}
};

int main(){
	Saving_account c;
	Curr_account r;
	
	
	c.interestRate();
	r.interestRate();
	
	return 0;
}
