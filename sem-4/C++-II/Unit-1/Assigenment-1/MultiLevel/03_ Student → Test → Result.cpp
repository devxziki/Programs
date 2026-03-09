#include<iostream>
using namespace std;

class Student
{
	public:
		int rno;
		string name;
		void sinput()
		{
			cout << "Enter Roll No : ";
			cin >> rno;
			cout << "Enter Name : ";
			cin >> name;
		}
		void soutput()
		{
			cout << "Roll No is : " << rno << endl;
			cout << "Name is : " << name << endl;
		}
};

class Test : public Student
{
	public:
		int m1,m2;
		void tinput()
		{
			cout << "Enter Mark of Subject 1 : ";
			cin >> m1;
			cout << "Enter Mark of Subject 2 : ";
			cin >> m2;
		}
		void toutput()
		{
			cout << "Mark 1 : " << m1 << endl;
			cout << "Mark 2 : " << m2 << endl;
		}
};

class Result : public Test
{
	public:
		float total,percentage;
		void method()
		{
			total=m1+m2;
			percentage=total/200*100;
		}
		void display()
		{
			cout << "Total Mark is : " << total << endl;
			cout << "Percentage is : " << percentage << "%" << endl;
		}
};

int main()
{
	Result r;
	r.sinput();
	r.tinput();
	r.soutput();
	r.method();
	r.toutput();
	r.display();
	return 0;
}
