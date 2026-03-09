#include<iostream>
using namespace std;

class Devices
{
    public:
        void doutput()
        {
            cout << "called from device" << endl;
        }
};

class Computer : public Devices
{
    public:
        void coutput()
        {
            cout << "Called from computer" << endl;
        }
};

class Laptop : public Computer
{
    public:
        void output()
        {
            cout << "Called From laptop" << endl;
        }
};

int main()
{
    Laptop l;
    l.doutput();
    l.coutput();
    l.output();

    return 0;
}