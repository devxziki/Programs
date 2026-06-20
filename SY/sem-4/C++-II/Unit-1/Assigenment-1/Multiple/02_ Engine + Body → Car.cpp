#include<iostream>
using namespace std;

class Engine
{
    public:
        void eoutput()
        {
            cout << "Horse Power is : 500000" << endl;
        }
};

class Body
{
    public:
        void boutput()
        {
            cout << "Car Wiegth is : 50 kg" << endl;
        }
};

class Car : public Engine , public Body
{
    public:
        void coutput()
        {
            cout << "Car Is Reseamble" << endl;
        }
};

int main()
{
    Car c;
    c.eoutput();
    c.boutput();
    c.coutput();

    return 0;
}