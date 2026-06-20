#include<iostream>
using namespace std;

class Student
{
	public: 
		void rnodisplay()
		{
			cout << "Rno is : 27" << endl;
		}
};

class Sname : public Student
{
		public: 
		void namedisplay()
		{
			
			cout << "Name is : joyeb" << endl;
		}
};

class Sage : public Student
{
	public:
		void sage()
		{
			
			cout << "Age is : 19" << endl;
		}
};

class Sfinal: public Sname,public Sage
{
	public: 
		void display()
		{
			rnodisplay();
			cout << "Called from final " << endl;
		}
};

int main()
{
	Sfinal s;
	//s.rnodisplay();
	s.namedisplay();
	s.sage();
	s.display();
	
	return 0;
}
