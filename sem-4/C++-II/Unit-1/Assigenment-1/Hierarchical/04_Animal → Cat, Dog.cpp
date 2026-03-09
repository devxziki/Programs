#include<iostream>
using namespace std;

class Animal
{
    public:
        string s;
        void ainput()
        {
            cout << "Enter Spieces : ";
            cin >> s;
        }
        void output()
        {
            cout << "Spieces is : " << s << endl;
        }
};

class Dog : public Animal
{
    public:
        void bark()
        {
            cout << "Dog is barking....." << endl;
        }
};

class Cat : public Animal
{
    public:
        void cat1()
        {
            cout << "Cate Is Meowing......" << endl;
        }
};

int main()
{
    cout << "Enter Details Of Dog" << endl;
    Dog d;
    d.ainput();
    d.output();
    d.bark();

    cout << "Enter Details Of cat" << endl;
    Cat c;
    c.ainput();
    c.output();
    c.cat1();

    return 0;
}