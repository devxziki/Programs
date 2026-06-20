#include<iostream>
using namespace std;

class Gps
{
    public:
        void g()
        {
            cout << "Gps Is providing navigations...." << endl;
        }
};

class Vehical
{
    public:
        void v()
        {
            cout << "Vehical Provides Gps Its location...." << endl;
        }
};

class SmartCar : public Gps , public Vehical
{
    public:
        void s()
        {
            cout << "Smart Car is Using gps...." << endl;
        }
};

int main()
{
    SmartCar s;
    s.g();
    s.v();
    s.s();

    cin.get();
    cin.get();
    return 0;
}