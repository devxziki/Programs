#include <iostream>
using namespace std;

class Bitwise 
{
    private:
        int value;

    public:
        Bitwise(int v) : value(v) {}

        // Overloading the unary ~ operator
        Bitwise operator~() 
        {
            return Bitwise(~value);
        }

        void display() 
        {
            cout << "Value: " << value << endl;
        }
};

int main() 
{
    Bitwise b(5);
    b.display();

    Bitwise result=~b;
    result.display();

    return 0;
}