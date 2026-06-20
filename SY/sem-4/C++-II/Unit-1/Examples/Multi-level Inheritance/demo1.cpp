#include<iostream>
using namespace std;

class StudentA // Base class
{
    public: 
        int rno;

        void srno()
        {
            cout << "Enter Roll Number: ";
            cin >> rno;
        }
        void rnodisplay()
        {
            cout << "CALLED FROM BASE CLASS" << endl;
            cout << "Roll Number: " << rno << endl;
        }
};

class StudentB : public StudentA  // Derived  from StudentA  Intermidiate class 
{ 
    public: 
        string name;

        void sname()
        {
            cout << "Enter Name: ";
            cin >> name;
        }

        void namedisplay()
        {
            cout << "CALLED FROM Intermediate CLASS 1 StudentB" << endl;
            cout << "Name: " << name << endl;
        }
};

class StudentC : public StudentB  // Derived from StudentB  (Multi-level Inheritance)
{
    public:
        int age;
        void sage()
        {
            cout << "Enter Age: ";
            cin >> age;
        }
        void agedisplay()
        {
            cout << "CALLED FROM Intermediate CLASS 2 StudentB" << endl;
            cout << "Age: " << age << endl;
        }
};

class StudentD : public StudentC  // Derived from StudentC  (Multi-level Inheritance)
{
    public:
        int phno;
        void sphno()
        {
            cout << "Enter Phone Number: ";
            cin >> phno;
        }       
        void phnodisplay()
        {
            cout << "CALLED FROM DERIVED CLASS StudentD" << endl;
            cout << "Phone Number: " << phno << endl;
        }
};

int main()
{
    StudentD s;             
    s.srno();           
    s.sname();
    s.sage();
    s.sphno();
    s.rnodisplay();
    s.namedisplay();
    s.agedisplay();
    s.phnodisplay();
    return 0;
}