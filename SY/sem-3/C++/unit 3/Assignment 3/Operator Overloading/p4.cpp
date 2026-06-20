#include <iostream>
using namespace std;

class Box 
{
    public:
        float length;
        float width;
        float height;

        Box(float l,float w,float h) : length(l),width(w),height(h) {}

        Box operator-(Box &b) 
        {
            return Box(length-b.length,width-b.width,height-b.height);
        }

        void display() 
        {
            cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
        }
};

int main() 
{
    Box box1(10.0, 5.0, 3.0);
    Box box2(4.0, 2.0, 1.0);
    Box box3=box1-box2;
    printf("\nBox 1 details:\n");
    box1.display();
    printf("\nBox 2 details:\n");
    box2.display();
    printf("\nBox 3 (Box1-Box2) details:\n");
    box3.display();

    return 0;
}