#include<iostream>
using namespace std;

class Vehical 
{
    public:
        virtual void start()=0;
};

class Car : public Vehical
{
    public:
        void start()
        {
            cout << "Car Started" << endl;
        }
};

class Bike : public Vehical
{
    public:
        void start()
        {
            cout << "Bike Started" << endl;
        }
};

int main()
{
    Car c;
    Bike b;
    
    c.start();
    b.start();

    return 0;
}