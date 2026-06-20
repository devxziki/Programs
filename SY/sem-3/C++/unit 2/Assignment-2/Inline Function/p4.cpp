#include <iostream>
using namespace std;

// Inline function to calculate area of rectangle
inline float area(float length, float width) 
{
    return length*width;
}

int main() 
{
    float length, width;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Area of rectangle: " << area(length, width) << endl;

    return 0;
}
