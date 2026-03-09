#include<iostream>
using namespace std;

class Emplyee{
	public:
		virtual void calculateSalary(){
			cout << "Employee: "<< endl;
		}
};

class Fulltime: public Emplyee{
	public:
		void calculateSalary(){
			cout << "FUll Time salary is: 20,000 " << endl;
		}
};

class Parttime: public Emplyee{
	public:
		void calculateSalary(){
			cout << "FUll Time salary is: 10,000 " << endl;
		}
};

int main(){
	Emplyee* s;
	Fulltime c;
	Parttime r;
	
	
	s=&c;
	s->calculateSalary();
	s=&r;
	s->calculateSalary();
	
	return 0;
}
