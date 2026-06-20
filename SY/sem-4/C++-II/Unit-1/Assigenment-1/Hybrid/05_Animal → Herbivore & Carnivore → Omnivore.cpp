#include<iostream>
using namespace std;

class Animal
{
    public:
        void a()
        {
            cout << "Animal Eating.." << endl;
        }
};

class Herbivorues : virtual public Animal
{
    public:
        void h()
        {
            cout << "Herbivourus Eating Habit..." << endl;
        }
};

class Carnivourus : virtual public Animal
{
    public:
        void c()
        {
            cout << "Carnivourus Eating Habit...." << endl;
        }
};

class Omniveres : public Herbivorues , public Carnivourus
{
    public:
        void o()
        {
            cout << "Omniveres Inherits Eating habit from Carniveres and Herbivourus.." << endl;
        }
};

int main()
{
    Omniveres o;
    o.a();
    o.h();
    o.c();
    o.o();

    return 0;
}