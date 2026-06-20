#include <iostream>
using namespace std;

class Box 
{
    private:
        double length;
        double width;
        double height;

    public:
        Box(double l, double w, double h) : length(l), width(w), height(h) {}

        double volume() const
        {
            return length*width*height;
        }

        bool operator<(const Box& other) 
        {
            return this->volume()<other.volume();
        }
};

int main() 
{
    Box box1(3.0,4.0,5.0);
    Box box2(2.0,6.0,7.0);

    if (box1 < box2) 
    {
        cout << "Box 1 is smaller than Box 2." << endl;
    }
    else 
    {
        cout << "Box 1 is not smaller than Box 2." << endl;
    }

    return 0;
}
