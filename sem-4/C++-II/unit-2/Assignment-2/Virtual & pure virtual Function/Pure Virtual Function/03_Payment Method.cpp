#include<iostream>
using namespace std;

class Payment{
	public:
		virtual void processe()=0;
};

class Credit_card : public Payment{
	public:
		void processe(){
			cout << "Call From Credit Card" << endl;
		}
};

class Upi : public Payment{
	public:
		void processe(){
			cout << "Call From UPI" << endl;
		}
};

int main(){
	Credit_card c;
	Upi u;
	
	c.processe();
	u.processe();
	
	return 0;
}
