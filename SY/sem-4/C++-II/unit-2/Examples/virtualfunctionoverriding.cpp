#include<iostream>
using namespace std;

class Shape
{
    public:
        void virtual voarea()
        {
        	cout << "Call From Circle" << endl;
		}
};

class Circle : public Shape
{
    public:
        void area()
        {
            cout << "Circle Overrided The Abstract base  Class" << endl;
        }
};


int main()
{
    Circle c;
    c.area();
    
    return 0;
}
