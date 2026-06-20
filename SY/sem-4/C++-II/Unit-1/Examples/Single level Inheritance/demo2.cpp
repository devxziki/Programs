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

class Student1 : protected Student   // derived class 
                                     //  As base class is private Specifier so we are not
                                     //  able to access base class members in main function
                                     // and also the derived class members are also not accessable in main function
                                     // as they are protected and only be acess in the derived class or friend class
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