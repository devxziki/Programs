#include <iostream>
using namespace std;

class Timer 
{
    private:
        int count;

    public:
        Timer(int c) : count(c) {}

        // Postfix -- operator overload
        Timer operator--(int) 
        {
            Timer temp=*this;
            count--;
            return temp;
        }

        void display()
        {
            cout << "Count: " << count << endl;
        }
};

int main() 
{
    Timer t(5);
    t.display();
    t--;
    t.display();
    return 0;
}