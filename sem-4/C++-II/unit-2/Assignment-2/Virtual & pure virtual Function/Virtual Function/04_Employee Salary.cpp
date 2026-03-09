#include<iostream>
using namespace std;

class Employee{
	public:
		virtual void calculatesalary(){
			cout << "Call From Employee" << endl;
		}
};

class Fulltime : public Employee{
	public:
		void calculatesalary(){
			cout << "Call From FullTime" << endl;
		}
};

class Parttime : public Employee{
	public:
		void calculatesalary(){
			cout << "Call From Parttime" << endl;
		}
};

int main(){
	Fulltime f;
	Parttime p;
	
	f.calculatesalary();
	p.calculatesalary();
	
	return 0;
}
