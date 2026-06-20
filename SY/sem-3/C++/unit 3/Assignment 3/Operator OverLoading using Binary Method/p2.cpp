#include <iostream>
using namespace std;

class Fraction 
{
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int num, int denom) : numerator(num), denominator(denom) 
        {
            if (denom == 0) 
            {
                throw invalid_argument("Denominator cannot be zero.");
            }
        }

        Fraction operator/(const Fraction &other) 
        {
            return Fraction(numerator*other.denominator,denominator*other.numerator);
        }

        void display()  
        {
            cout << numerator << "/" << denominator << endl;
        }
};

int main() 
{
    Fraction frac1(1,2);
    Fraction frac2(3,4);
    Fraction result=frac1/frac2;
    result.display();
    return 0;
}