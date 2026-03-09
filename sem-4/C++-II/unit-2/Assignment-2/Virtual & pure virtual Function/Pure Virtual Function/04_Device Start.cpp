#include<iostream>
using namespace std;

class Device{
	public:
		virtual void start()=0;
};

class Laptop : public Device{
	public:
		void start(){
			cout << "Call From Laptop" << endl;
		}
};

class Phone : public Device{
	public:
		void start(){
			cout << "Call From Phone" << endl;
		}
};

int main(){
	Laptop l;
	Phone p;
	
	l.start();
	p.start();
	
	return 0;
}
