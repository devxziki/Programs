#include <iostream>
using namespace std;

class Distance 
{
    public:
        int meters;

        Distance(int m) : meters(m) {}
};

int main() 
{
    Distance d=100; // Implicit conversion
    cout << "Distance in meters: " << d.meters << endl;
    return 0;
}