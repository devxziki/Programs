#include <iostream>
using namespace std;

class Converter 
{
    public:
        int intValue;
        float floatValue;

        void convert() 
        {
            floatValue=intValue; // Implicit conversion
        }

        void display() 
        {
            cout << "Integer Value: " << intValue << endl;
            cout << "Float Value: " << floatValue << endl;
        }
};

int main() 
{
    Converter converter;
    converter.intValue=10;
    converter.convert();
    converter.display();
    return 0;
}