#include <iostream>
using namespace std;

class Percentage 
{
    private:
        double value;

    public:
        Percentage(double val) : value(val) {}

        void display() 
        {
            cout << "Percentage: " << value << "%" << endl;
        }
};

int main() 
{
    Percentage p(85.5);
    p.display();
    return 0;
}
