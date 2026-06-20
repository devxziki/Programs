#include <iostream>
using namespace std;

class Radius 
{
    private:
        float radius;

    public:
        Radius(float r) : radius(r) {}

        void display() 
        {
            cout << "Radius: " << radius << endl;
        }
};

int main() 
{
    Radius r(5.5);
    r.display();
    return 0;
}
