#include<iostream>
using namespace std;

class Classroom
{
    public:
        class Student
        {
            public:
                int rno;
                string name;

                void input()
                {
                    cout << "Enter Roll No: ";
                    cin >> rno;
                    cout << "Enter Name: ";
                    cin >> name;
                }

                void output()
                {
                    cout << "Roll No: " << rno << endl;
                    cout << "Name: " << name << endl;
                }
        };

        Student s;
        void display()
        {
            s.input();
            cout << "Student Details: " << endl;
            s.output();
        }
};

int main()
{
    Classroom c;
    c.display();

    cin.get();
    cin.get();
    
    return 0;
}