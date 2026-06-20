#include<iostream>
using namespace std;

class Flyer
{
    public:
        void f()
        {
            cout << "Duck is Flying....." << endl;
        }
};

class Swimmer
{
    public:
        void s()
        {
            cout << "Duck is Swimming....." << endl;
        }
};

class Duck : public Flyer , public Swimmer
{
    public:
        void d()
        {
            cout << "Call From Duck" << endl;
        }
};

int main()
{
    Duck d;
    d.f();
    d.s();
    d.d();

    return 0;
}