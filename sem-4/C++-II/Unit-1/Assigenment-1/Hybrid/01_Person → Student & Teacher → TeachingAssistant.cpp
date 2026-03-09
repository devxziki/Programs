#include<iostream>
using namespace std;

class Person
{
    public:
        void p()
        {
            cout << "Age is : 19 " << endl;
        }
};

class Student : virtual public Person
{
    public:
        void s()
        {
            cout << "Student Roll No is : 27" << endl;
        }
};

class Teacher : virtual public Person
{
    public:
        void t()
        {
            cout << "Teacher Subject is : c++ " << endl;
        }
};

class Teachingagent : public Student , public Teacher
{
    public:
        void ta()
        {
            cout << "Call From Teaching Agent..." << endl;
        }
};

int main()
{
    Teachingagent t;
    t.p();
    t.s();
    t.t();
    t.ta();

    return 0;
}