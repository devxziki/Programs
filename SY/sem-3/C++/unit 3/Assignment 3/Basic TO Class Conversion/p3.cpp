#include <iostream>
using namespace std;

class Level 
{
    private:
        char level;

    public:
        Level(char l) : level(l) {}

        void display() 
        {
            cout << "Level: " << level << endl;
        }
};

int main() 
{
    Level myLevel('A');
    myLevel.display();
    return 0;
}
