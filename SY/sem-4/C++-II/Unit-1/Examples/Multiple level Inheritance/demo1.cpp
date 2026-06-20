#include<iostream>
using namespace std;

class StudentA // base class 1
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
            cout << "CALLED FROM BASE CLASS 1 " << endl;
            cout << "Roll Number: " << rno << endl;
        }
};

class StudemtB  // base class 2
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
            cout << "CALLED FROM BASE CLASS 2 " << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public StudentA , public StudemtB  // derived class 
                                                  //  As base class 1 & 2 is public Specifier so it is easy to access everyweare
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
            cout << "CALLED FROM DERIVED CLASS" << endl;
            cout << "Name: " << name << endl;
        }
};

int main()
{
    Student s;             
    s.srno(); 
    s.sage();          
    s.sname();
    s.rnodisplay();
    s.agedisplay();
    s.namedisplay();
    return 0;
}
