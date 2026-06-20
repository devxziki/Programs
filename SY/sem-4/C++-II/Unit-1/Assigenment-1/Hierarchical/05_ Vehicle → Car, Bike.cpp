#include<iostream>
using namespace std;

class Vehical
{
    public:
        string brand;
        int model;
        void vinput()
        {
            cout << "\nEnter Vehical Brand : ";
            cin >> brand;
            cout << "Enter Model Number : ";
            cin >> model;
        }
        void voutput()
        {
            cout << "\nBrand is : " << brand << endl;
            cout << "Mode Number is : " << model << endl;
        }
};

class Car : public Vehical
{
    public:
        int w,m;
        void cintput()
        {
            cout << "\nEnter Wheels of Car : ";
            cin >> w;
            cout << "Enter Mileage of Car : ";
            cin >> m;
        }
        void couput()
        {
            cout << "\nWheels is : " << w << endl;
            cout << "Mileage is : " << m << endl;
        }
};

class Bike : public Vehical
{
    public:
        int w1,m1;
        void boutput()
        {
            cout << "\nEnter Wheels of Bike : ";
            cin >> w1;
            cout << "Enter Mileage of Bike : ";
            cin >> m1;
        }
        void binput()
        {
            cout << "\nWheels is : " << w1 << endl;
            cout << "Mileage is : " << m1 << endl;
        }
};

int main()
{
    

    Car c;
    Bike b;

    cout << "\nEnter details of car " << endl;

    c.vinput();
    c.cintput();
    c.voutput();
    c.couput();

    cout << "\nEnter details of bike" << endl;

    
    b.vinput();
    b.binput();
    b.voutput();
    b.boutput();

    cin.get();
    cin.get();

    return 0;
}