#include <iostream>
using namespace std;

class Number 
{
    private:
        int value;

    public:
        Number(int v) : value(v) {}

        // Overloading unary - operator
        Number operator-() 
        {
            return Number(-value);
        }

        void display() 
        {
            cout << "Value: " << value << endl;
        }
};

int main() 
{
    Number num(10);
    num.display();

    Number negNum=-num;
    negNum.display();

    return 0;
}