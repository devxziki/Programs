#include<iostream>
using namespace std;

class Person
{
	public:
		string name;
		int age;
		
		void pinput()
		{
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Age: ";
			cin >> age;
		}
		void poutput()
		{
			cout << "Name is : " << name << endl;
			cout << "Age is : " << age << endl;
		}
};

class Student : public Person
{
	public:
		int rno,m1,m2;
		
		void sinput()
		{
			cout << "Enter Student Roll no : ";
			cin >> rno;
			cout << "Enter Student Mark of Subject 1 : ";
			cin >> m1;
			cout << "Enter Student Mark of subject 2 : ";
			cin >> m2;
		}
		void soutput()
		{
			cout << "Roll No is : " << rno << endl;
			cout << "mark 1 is : " << m1 << endl;
			cout << "mark 2 is : " << m2 << endl;
		}
};

int main()
{
	Student s;
	s.pinput();
	s.sinput();
	s.poutput();
	s.soutput();
	return 0;
}
