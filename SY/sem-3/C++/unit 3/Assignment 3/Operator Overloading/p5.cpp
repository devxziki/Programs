#include <iostream>
using namespace std;

class Counter 
{
    private:
        int count;

    public:
        Counter() : count(0) {}

        // Overloading the prefix ++ operator
        Counter operator++() 
        {
            ++count;
            return *this;
        }

        int display()  
        {
            return count;
        }
};

int main() 
{
    Counter c;
    ++c;
    cout << "Count: " << c.display() << endl;
    return 0;
}