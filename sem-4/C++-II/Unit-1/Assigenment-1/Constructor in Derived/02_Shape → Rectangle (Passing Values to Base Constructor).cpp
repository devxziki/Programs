#include<iostream>
using namespace std;

class Shape
{
    public:
        Shape()
        {
            cout << "Color is : Red " << endl;
        }
};

class Rectangle : public Shape
{
    public:
        Rectangle()
        {
            cout << "Length is : 10 " << endl;
            cout << "Width is : 5 " << endl;
        }
};

int main()
{
    Rectangle s1;
    return 0;
}