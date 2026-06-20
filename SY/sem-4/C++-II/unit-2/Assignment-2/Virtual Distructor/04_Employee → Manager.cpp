#include<iostream>
using namespace std;

class Employee{
	public:
		virtual ~Employee(){
			cout << "Employee Destructor Called" << endl;
		}
};

class Manager: public Employee{
	public:
		~Manager(){
			cout << "Manager Destructor Called" << endl;
		}
};

int main(){
	Manager m;
	
	return 0;
}
