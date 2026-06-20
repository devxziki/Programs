#include<iostream>
using namespace std;

class Person
{
	public:
		int age;
		string name;
		
		void input1()
		{
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Age: ";
			cout << age;
		}
		void display1()
		{
			cout << "Name is: " << name << endl;
			cout << "Age is: " << age << endl;
		}
};

class Student : virtual public Person
{
	public:
			
};

class Employee : virtual public Person
{
	public:
		
};

class Workingstudent : public Student , Public Employee
{
	public:
			
};

int main()
{
	Workingstudent s;
	s.input1();
	s.display1();
	
	return 0;
}
