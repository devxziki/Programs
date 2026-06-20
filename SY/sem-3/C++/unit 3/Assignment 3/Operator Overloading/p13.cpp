#include <iostream>
using namespace std;

class Person 
{
    private:
        string name;
        int age;

    public:
        friend istream& operator>>(istream &input,Person &p) 
        {
            cout << "Enter name: ";
            input >> p.name;
            cout << "Enter age: ";
            input >> p.age;
            return input;
        }

        void display() 
        {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

int main() 
{
    Person p;
    cin >> p;
    p.display();
    return 0;
}