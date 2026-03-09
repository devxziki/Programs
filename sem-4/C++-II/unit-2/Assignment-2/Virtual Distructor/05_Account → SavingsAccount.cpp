#include<iostream>
using namespace std;

class Account{
	public:
		virtual ~Account(){
			cout << "Account Destructor Called" << endl;
		}
};

class Saving_Acc: public Account{
	public:
		~Saving_Acc(){
			cout << "Saving Account Destructor Called" << endl;
		}
};

int main(){
	Saving_Acc sa;
	
	return 0;
}
