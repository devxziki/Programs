#include <iostream>
using namespace std;

class Percentage 
{
    private:
        double value;

    public:
        Percentage(double val) : value(val) {}

        operator double()  
        {
            return value / 100.0;
        }
};

int main() 
{
    Percentage p(75);
    double d = p;
    cout << "The double value is: " << d << endl;
    return 0;
}