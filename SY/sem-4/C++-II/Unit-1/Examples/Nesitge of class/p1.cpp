#include<iostream>
using namespace std;
class Student
{
	public:
		void display()
		{
			cout << endl;
			cout << "Student Age is : 19"<< endl;
		}
		
		class Student2
		{
			public:
				void display1()
				{
					cout << endl;
					cout << "call from nestlige class"<<endl;
				}	
		};
};
	typedef Student::Student2 s2;


int main()
{
	Student s;
	s2 j;
	s.display();
	j.display1();
	return 0;	
}
