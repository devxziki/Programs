#include<iostream>
using namespace std;

class Shape
{
    public:
        string color;
        void input1()
        {
            cout << "Enter Color: ";
            cin >> color;
        }

        void display1()
        {
            cout << "Color is: " << color << endl;
        }
};

class Polygon : virtual public Shape
{
    public:
        int s;
        void input2()
        {
            cout << "Enter Number of Sides: ";
            cin >> s;
        }

        void display2()
        {
            cout << "Number of Sides is: " << s << endl;
        }
};

class Solid : virtual public Shape
{
    public:
        void volueme()
        {
            cout << "Call From Solid" << endl;       
        }
};

class Prism : public Polygon , public Solid
{
    public:
        
};

int main()
{
    Prism p;
    p.input1();
    p.input2();
    p.display1();
    p.display2();
    p.volueme();

    cin.get();
    cin.get();
    return 0;
}