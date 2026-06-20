#include<iostream>
using namespace std;

class Person
{
    public:
        Person()
        {
            cout << "Name is : Joyeb " << endl;
        }
};

class Student : public Person
{
    public:
        Student()
        {
            cout << "Roll No is : 27 " << endl;
        }
};

int main()
{
    Student s1;
    return 0;
}