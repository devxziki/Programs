#include<iostream>
using namespace std;

class Shape
{
    public:
        float area;
        void soutput()
        {
            cout << "Area is : " << area << endl;
        }
};

class Circle : public Shape
{
    public:
        float r;
        void circleinput()
        {
            cout << "Enter R of Circle : ";
            cin >> r;
        }

        void method()
        {
            area=3.14159*r*r;
        }
};

class Rectangle : public Shape
{
    public:
        float l,w;
        void rectangleinput()
        {
            cout << "Enter Width : ";
            cin >> w;
            cout << "Enter Length : ";
            cin >> l;
        }

        void rmethod()
        {
            area=l*w;
        }
};

int main()
{
    Circle c;
    Rectangle r;

    c.circleinput();
    c.method();
    c.soutput();

    r.rectangleinput();
    r.rmethod();
    r.soutput();

    cin.get();
    cin.get();  // waits for Enter

    return 0;
}