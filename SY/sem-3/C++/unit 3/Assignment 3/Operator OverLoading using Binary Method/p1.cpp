#include <iostream>
using namespace std;

class Point 
{
    public:
        int x,y;

        Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

        Point operator-(const Point &other) 
        {
            return Point(this->x-other.x,this->y-other.y);
        }
};

int main() 
{
    Point p1(10,20);
    Point p2(5,15);
    Point result=p1-p2;
    cout << "Resulting Point: (" << result.x << "," << result.y << ")" << endl;
    return 0;
}