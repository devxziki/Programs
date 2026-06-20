#include <iostream>
using namespace std;

class Level 
{
    private:
        int level;

    public:
        Level(int lvl) : level(lvl) {}

        operator char() 
        {
            return static_cast<char>(level);
        }
};

int main() 
{
    Level myLevel(65); // Example level
    char levelChar = myLevel; // Implicit conversion
    cout << "The character representation of the level is: " << levelChar << endl;
    return 0;
}