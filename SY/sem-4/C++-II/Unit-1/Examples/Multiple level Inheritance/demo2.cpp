#include<iostream>
using namespace std;

class StudentA // base class 1
{
    public: // as it is protected it can be accessed inside derived class only
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
    public: // as it is protected it can be accessed inside derived class only
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

class Student : protected StudentA , protected StudemtB     // derived class 
                                                           //  As base class 1 & 2 is public Specifier so it is easy to access everyweare
                                                          //   but we have made derived class protected
                                                         //    so it cant be accessed inside derived class only 
                                                        //     not in main function
{
    public: 
        string name;

        void sname()
        {
            srno();  // accessing base class 1 function
            sage();  // accessing base class 2 function
            cout << "Enter Name: ";
            cin >> name;
        }

        void namedisplay()
        {
            rnodisplay();  // accessing base class 1 function
            agedisplay();  // accessing base class 2 function
            cout << "CALLED FROM DERIVED CLASS" << endl;
            cout << "Name: " << name << endl;
        }
};

int main()
{
    Student s;      
    s.sname();  
    s.namedisplay();
    return 0;
}