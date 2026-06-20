#include <iostream>
using namespace std;

class Kilogram 
{
    private:
        double weight;

    public:
        Kilogram(double w) : weight(w) {}

        double toPound() 
        {
            return weight * 2.20462;
        }
};

class Pound 
{
    private:
        double weight;

    public:
        Pound(double w) : weight(w) {}

        double toKilogram() 
        {
            return weight / 2.20462;
        }
};

int main() 
{
    Kilogram kg(10);
    cout << "10 Kilograms is equal to " << kg.toPound() << " Pounds." << endl;

    Pound lb(22.0462);
    cout << "22.0462 Pounds is equal to " << lb.toKilogram() << " Kilograms." << endl;

    return 0;
}