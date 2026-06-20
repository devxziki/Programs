#include <iostream>
using namespace std;

class CharToIntConverter 
{
    public:
        char character;
        int asciiValue;

        void setCharacter(char ch) 
        {
            character=ch;
            asciiValue=character; // Implicit conversion
        }

        void displayValues() 
        {
            cout << "Character: " << character << endl;
            cout << "ASCII Value: " << asciiValue << endl;
        }
};

int main() 
{
    CharToIntConverter converter;
    converter.setCharacter('A');
    converter.displayValues();
    return 0;
}