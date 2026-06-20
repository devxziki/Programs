#include <iostream>
using namespace std;

class Accumulator 
{
    private:
        int sum;

    public:
        Accumulator() : sum(0) {}

        Accumulator operator+=(int value) 
        {
            sum+=value;
            return *this;
        }

        int display()
        {
            return sum;
        }
};

int main() 
{
    Accumulator acc;
    acc+=5;
    acc+=10;
    cout << "Total Sum: " << acc.display() << endl;
    return 0;
}