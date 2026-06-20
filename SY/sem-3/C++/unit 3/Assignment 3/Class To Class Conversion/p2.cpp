#include <iostream>
using namespace std;

class Inch 
{
    private:
        double length;

    public:
        Inch(double len) : length(len) {}

        double toCentimeter() 
        {
            return length*2.54;
        }
};

class Centimeter 
{
    private:
        double length;

    public:
        Centimeter(double len) : length(len) {}

        double toInch() 
        {
            return length/2.54;
        }
};

int main() 
{
    Inch inch(10);
    Centimeter cm(25.4);

    cout << "10 inches is equal to " << inch.toCentimeter() << " centimeters." << endl;
    cout << "25.4 centimeters is equal to " << cm.toInch() << " inches." << endl;

    return 0;
}
