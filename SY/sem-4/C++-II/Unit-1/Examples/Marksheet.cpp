#include<iostream>
using namespace std;

class Marksheet
{
	public: 
		int rno;
		string sname;
		float m1,m2,m3,total,percentage;
		
		void input()
		{
			cout << "Enter Roll no : ";
			cin >> rno;
			cout << "Enter Name : ";
			cin >> sname;
			cout << "Enter m1 : ";
			cin >> m1;
			cout << "Enter m2 : ";
			cin >> m2;
			cout << "Enter m3 : ";
			cin >> m3;
		}
		void method()
		{
			total=m1+m2+m3;
			percentage=total*100/300;
		}
	
		void output()
		{
			cout << "Rno is: " << rno << endl;
			cout << "Name is: " << sname << endl;
			cout << "m1 is: " << m1 << endl;
			cout << "m2 is: " << m2 << endl;
			cout << "m3 is: " << m3 << endl;
			cout << "total mark  is: " << total << endl;
			cout << "Percentage  is: " << percentage << "%" << endl;
		}
		
		void grade()
		{
			if(percentage<33)
			{
				cout << "Fail" << endl;
			}
			else if(percentage>=33 && percentage<50)
			{
				cout << "Pass \t" << "Grade is E" << endl;
			}
			else if(percentage>=50 && percentage<70)
			{
				cout << "Pass \t" << "Grade is D" << endl;	
			}
			else if(percentage>=70 && percentage<85)
			{
				cout << "Pass \t" << "Grade is c" << endl;
			}
			else if(percentage>=85 && percentage<90)
			{
				cout << "Pass \t" << "Grade is B" << endl;
			}
			else if(percentage>=90)
			{
				cout << "Pass \t" << "Grade is A" << endl;
			}
		}
}; // class termination point

int main()
{
	Marksheet m;
	m.input();
	m.method();
	m.output();
	m.grade();
}
