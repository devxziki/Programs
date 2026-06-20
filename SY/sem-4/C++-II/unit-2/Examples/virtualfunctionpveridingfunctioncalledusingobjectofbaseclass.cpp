#include<iostream>
using namespace std;

class Shape
{
    public:
        void virtual area()
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
	Shape* s;
    Circle c;
    s=&c;
    s->area();
    
    return 0;
}
