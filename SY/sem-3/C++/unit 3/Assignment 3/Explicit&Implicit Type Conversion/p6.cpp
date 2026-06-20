#include <iostream>
using namespace std;

class Converter 
{
    public:
        void convertAndDisplay(float decimalValue) 
        {
            int intValue=(int)decimalValue;
            cout << "Float value: " << decimalValue << endl;
            cout << "Converted int value: " << intValue << endl;
        }
};

int main() 
{
    Converter converter;
    float myFloat = 5.75;
    converter.convertAndDisplay(myFloat);
    return 0;
}