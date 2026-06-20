#include <iostream>
using namespace std;

class Switch 
{
    private:
        bool state;

    public:
        Switch() : state(false) {}

        // Overloading the unary ! operator
        Switch operator!() 
        {
            state=!state;
            return *this;
        }

        void displayState()  
        {
            cout << "Switch is " << (state ? "ON" : "OFF") << endl;
        }
};

int main() 
{
    Switch mySwitch;
    mySwitch.displayState();

    !mySwitch; // Toggle the switch
    mySwitch.displayState();

    !mySwitch; // Toggle again
    mySwitch.displayState();

    return 0;
}
