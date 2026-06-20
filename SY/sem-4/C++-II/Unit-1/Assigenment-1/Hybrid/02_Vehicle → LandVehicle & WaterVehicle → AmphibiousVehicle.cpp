#include<iostream>
using namespace std;

class Vehical
{
    public:
        void v()
        {
            cout << "Call From Base First class " << endl;
        }
};

class Landvehical : virtual public Vehical
{
    public:
        void l()
        {
            cout << "This vehical Can Run Only in Land" << endl;
        }
};

class Watervehical : virtual public Vehical
{
    public:
        void w()
        {
            cout << "This Vehical Can Run in Water" << endl;
        }
};

class Amphibiousvehical : public Landvehical , public Watervehical
{
    public:
        void a()
        {
            cout << "Amphibious Vehical Can Run on Both Water & Land" << endl;
        }
};  

int main()
{
    Amphibiousvehical a;
    a.v();
    a.l();
    a.w();
    a.a();

    return 0;
}