#include <iostream>
using namespace std;

class Complex 
{
    private:
        double real;
        double imag;

    public:
        Complex(double r = 0, double i = 0) : real(r), imag(i) {}

        friend ostream& operator<<(ostream& out, const Complex& c) 
        {
            out<<c.real<<(c.imag>=0 ? "+" : "") << c.imag << "i";
            return out;
        }
};

int main() 
{
    Complex c1(3,4);
    Complex c2(5,-6);
    cout << "Complex Number 1: " << c1 << endl;
    cout << "Complex Number 2: " << c2 << endl;
    return 0;
}