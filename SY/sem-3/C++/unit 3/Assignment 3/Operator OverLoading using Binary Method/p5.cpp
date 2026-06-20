#include <iostream>
using namespace std;

class BoolWrapper 
{
    private:
        bool value;

    public:
        BoolWrapper(bool val) : value(val) {}

        bool display() 
        {
            return value;
        }

        BoolWrapper operator&&(const BoolWrapper& other) 
        {
            return BoolWrapper(this->value && other.value);
        }
};

int main() {
    BoolWrapper a(true);
    BoolWrapper b(false);
    BoolWrapper result=a&&b;

    cout << "Result of a && b: " << result.display() << endl;

    return 0;
}