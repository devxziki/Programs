#include <iostream>
using namespace std;

class Converter 
{
    public:
        double value;

        Converter(double val) : value(val) {}

        int toInt() 
        {
            return (int)value; // C-style cast
        }
};

int main() 
{
    Converter converter(9.99);
    int intValue = converter.toInt();

    cout << "Double value: " << converter.value << endl;
    cout << "Converted integer value: " << intValue << endl;

    return 0;
}