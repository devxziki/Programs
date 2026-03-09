#include<iostream>
using namespace std;

class Vehicle{
	public:
		virtual void start(){
			cout << "Shape: "<< endl;
		}
};

class Car: public Vehicle{
	public:
		int r;
		void start(){
			cout << "Call From Car" << endl;}
};

class Bike: public Vehicle{
	public:
		void start(){
			cout << "Call From Bike" << endl;
			}
};

class Truck: public Vehicle{
	public:
		void start(){
			cout << "Call From Truck" << endl;
			}
};

int main(){
	Vehicle* s;
	Car c;
	Bike r;
	Truck t;
	
	s=&c;
	s->start();
	s=&r;
	s->start();
	s=&t;
	s->start();
	
	return 0;
}
