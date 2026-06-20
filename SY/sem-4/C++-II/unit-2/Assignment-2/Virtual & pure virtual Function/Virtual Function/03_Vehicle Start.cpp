#include<iostream>
using namespace std;

class Vehical{
	public:
		virtual void start(){
			cout << "Call From Vehical" << endl;
		}
};

class Car : public Vehical{
	public:
		void start(){
			cout << "Call From Car" << endl;
		}
};

class Bike : public Vehical{
	public:
		void start(){
			cout << "Call From Bike" << endl;
		}
};

int main(){
	Car c;
	Bike b;
	
	c.start();
	b.start();
	
	return 0;
}
