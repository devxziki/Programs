#include<iostream>
using namespace std;

class Emplyee{
	public:
		virtual void role()=0;
};

class Manager : public Emplyee{
	public:
		void role(){
			cout << "Call From Manager" << endl;
		}
};

class Developer : public Emplyee{
	public:
		void role(){
			cout << "Call From Developer" << endl;
		}
};

int main(){
	Manager m;
	Developer d;
	
	m.role();
	d.role();
	
	return 0;
}
