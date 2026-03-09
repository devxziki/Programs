#include<iostream>
using namespace std;

class Vehical{
	public:
		virtual ~Vehical(){
			cout << "Vehical Destructor Called" << endl;
		}
};

class Car: public Vehical{
	public:
		~Car(){
			cout << "Car Destructor Called" << endl;
		}
};

int main(){
	Car c;
	
	return 0;
}
