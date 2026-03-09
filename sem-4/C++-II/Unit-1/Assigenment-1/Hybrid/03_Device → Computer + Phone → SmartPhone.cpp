#include<iostream>
using namespace std;

class Devices
{
    public:
        void d()
        {
            cout << "Devices Features..." << endl;
        }
};

class Computer : virtual public Devices
{
    public:
        void c()
        {
            cout << "Compute Features...." << endl;
        }
};

class Phone : virtual public Devices
{
    public:
        void p()
        {
            cout << "Phone Features...." << endl;
        }
};

class Smartphone : public Computer , public Phone
{
    public:
    void s()
    {
        cout << "Smatphone Got Features From Phone And Computer" << endl;
    }
};

int main()
{
    Smartphone s;
    s.d();
    s.c();
    s.p();
    s.s();

    return 0;
}