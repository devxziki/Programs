#include<iostream>
using namespace std;

class Shape
{
    public:
        virtual void area()=0;
};

class Circle : public Shape
{
    public:
        void area()
        {
            cout << "Circle Overrided The Abstract base  Class" << endl;
        }
};

class Rectangle : public Shape
{
    public:
        void area()
        {
            cout << "Rectangle Overrided The Abstract base  Class" << endl;
        }
};

int main()
{
    Circle c;
    Rectangle r;
    
    c.area();
    r.area();

    return 0;
}