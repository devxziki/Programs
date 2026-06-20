#include <iostream>
using namespace std;

class Counter 
{
    private:
        int count;

    public:
        Counter() : count(0) {}

        // Overloading prefix ++ operator
        Counter& operator++() 
        {
            ++count;
            return *this;
        }

        void display()  
        {
            cout << "Count: " << count << endl;
        }
};

int main() 
{
    Counter c;
    ++c;
    c.display();
    ++c;
    c.display();
    return 0;
}