#include<iostream>
using namespace std;

class Teacher
{
    public:
        void t()
        {
            cout << "Teacher age is : 29" << endl;
        }
};

class Researcher
{
    public:
        void r()
        {
            cout << "Researcher Task is : Research " << endl;
        }
};

class Professor : public Teacher, public Researcher
{
    public:
        void p()
        {
            cout << "Call From Professor" << endl;
        }
};

int main()
{
    Professor p;
    p.t();
    p.r();
    p.p();

    return 0;
}