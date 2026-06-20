#include<iostream>
using namespace std;

class Person
{
    public:
        int age;
        string name;

        void personinput()
        {
            cout << "Enter Age : ";
            cin >> age;
            cout << "Enter Name: ";
            cin >> name;
        }

        void poutput()
        {
            cout << "Age is : " << age << endl;
            cout << "Name is : " << name << endl;
        }
};

class Student : public Person
{
    public:
        void studentoutput()
        {
            cout << "called from Student" << endl;
        }
};

class Professor : public Person
{
    public:
        void professoroutput()
        {
            cout << "Called From Professor" << endl;
        }
};

int main()
{
    Student s;
    Professor p;
    s.studentoutput();
    s.personinput();
    s.poutput();
    
    p.professoroutput();
    p.personinput();
    p.poutput();   
    
    return 0;
}