#include<iostream>
using namespace std;

class Employee
{
	public:
		int empid,salary;
		string empname;
		
		void einput()
		{
			cout << "Enter Employee ID : ";
			cin >> empid;
			cout << "Enter Employee Name : ";
			cin >> empname;
			cout << "Enter Employee Salary (in INR) : ";
			cin >> salary;
		}
		
		void eoutput()
		{
			cout << "Employee ID is : " << empid << endl;
			cout << "Employee Name is : " << empname << endl;
			cout << "Employee Salary (in INR) is : " << salary << endl;
		}
};

class Manager : public Employee
{
	public:
		string department;
		int bonus_salary;
		void minput()
		{
			cout << "Enter Department : ";
			cin >> department;
			cout << "Enter Bonus Salary : ";
			cin >> bonus_salary;
		}
		void moutput()
		{
			cout << "Department is : " << department << endl;
			cout << "Bonus Salary is : " << bonus_salary << endl;
			cout << "Total Salary is : " << bonus_salary+salary << endl;
		}
};

int main()
{
	Manager m;
	m.einput();
	m.minput();
	m.eoutput();
	m.moutput();
	return 0;
}
