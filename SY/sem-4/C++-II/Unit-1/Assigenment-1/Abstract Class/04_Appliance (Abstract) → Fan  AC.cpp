#include<iostream>
using namespace std;

class Application
{
    public:
        virtual void turnon()=0;
};

class Fan : public Application
{
    public:
        void turnon()
        {
            cout << "Fan is ON" << endl;
        }
};

class Ac : public Application
{
    public:
        void turnon()
        {
            cout << "Ac is OF" << endl;
        }
};

int main()
{
    Fan f;
    Ac a;
    
    f.turnon();
    a.turnon();

    return 0;
}