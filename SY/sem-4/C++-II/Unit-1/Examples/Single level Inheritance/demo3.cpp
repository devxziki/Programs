#include<iostream>
using namespace std;

class Student // base class
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

class Student1 : private Student    // derived class 
                                    // As base class is public Specifier so it is easy to access everyweare
                                    // and also the derived class specifis is  the private Specifier so the members of derived class
                                    // are not accessable in main function
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
    Student1 s;             
    s.srno();           
    s.sname();
    s.rnodisplay();
    s.namedisplay();
    return 0;
}