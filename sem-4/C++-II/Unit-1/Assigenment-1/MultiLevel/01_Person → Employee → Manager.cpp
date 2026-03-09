#include<iostream>
using namespace std;

class Person
{
	public:
		string name;
		void pinput()
		{
			cout << "Enter Name : ";
			cin >> name;
		}
		void poutput()
		{
			cout << "Name is : " << name << endl;
		}
};

class Employee : public Person
{
	public:
		int empid;
		void einput()
		{
			cout << "Enter Employee id : ";
			cin >> empid;
		}
		void eoutput()
		{
			cout << "Employee id is : " << empid << endl;
		}
};

class Manager : public Employee
{
	public:
		string department;
		void minput()
		{
			cout << "Enter Department of Employee : ";
			cin >> department;
		}
		void moutput()
		{
			cout << "Employee Department is : " << department << endl;
		}
};

int main()
{
	Manager m;
	m.pinput();
	m.einput();
	m.minput();
	m.poutput();
	m.eoutput();
	m.moutput();
	return 0;
}
