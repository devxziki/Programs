#include<iostream>
using namespace std;

class Vehcial
{
    public:
        Vehcial()
        {
            cout << "Vehical Brand Is: Toyota" << endl;
        }
};

class Car : public Vehcial
{
    public:
        Car()
        {
            cout << "Car Model is: 2020" << endl;
        }
};

int main()
{
    Car c1;
    return 0;
}