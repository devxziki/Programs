#include<iostream>
using namespace std;

class Demo
{
    public:
        Demo()
        {
            cout << "Call From 1st Function"<< endl;
        }
        Demo(int a)
        {
            cout << a << endl;
        }
};

int main()
{
    Demo d;
    Demo d1(10);
}