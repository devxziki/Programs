#include <iostream>
using namespace std;

class Converter 
{
    public:
        void convertAndPrint(float value) 
        {
            int intValue=static_cast<int>(value);
            cout << "Float value: " << value << endl;
            cout << "Converted integer value: " << intValue << endl;
        }
};

int main() 
{
    Converter converter;
    float myFloat = 9.75;
    converter.convertAndPrint(myFloat);
    return 0;
}