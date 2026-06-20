#include <iostream>
using namespace std;

class Radius 
{
    private:
        float radius;

    public:
        Radius(float r) : radius(r) {}

        operator float() const 
        {
            return radius;
        }
};

int main() 
{
    Radius r(5.5);
    float radiusValue = r;
    cout << "The radius as a float is: " << radiusValue << endl;
    return 0;
}