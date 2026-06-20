#include <iostream>
using namespace std;

class Multiplier 
{
    public:
        int operator()(int a, int b) {
            return a*b;
        }
};

int main() {
    Multiplier multiply;
    int result = multiply(5, 3);
    cout << "The result of multiplication is: " << result << endl;
    return 0;
}