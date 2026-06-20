#include<iostream>
using namespace std;

class Animal
{
    public:
        virtual void sound()=0;
};

class Dog : public Animal
{
    public:
        void sound()
        {
            cout << "Dog Overrided The Abstract base Class" << endl;
        }
};

class Cat : public Animal
{
    public:
        void sound()
        {
            cout << "Cat Overrided The Abstract base  Class" << endl;
        }
};

int main()
{
    Dog d;
    Cat c;
    
    d.sound();
    c.sound();

    return 0;
}