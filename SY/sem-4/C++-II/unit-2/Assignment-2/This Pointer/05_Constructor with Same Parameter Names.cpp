#include<iostream>
using namespace std;

class Employee{
	public:
		int id=10;
		int salary=10000;
		
		Employee(int id,int salary){			
			cout <<" Employee id is" << this->id << endl;
			cout <<" Employee Salary is" << this->salary << endl;			
		}
};


int main(){
	Employee e(20,20000);
	
	return 0;
}
