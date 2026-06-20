#include <iostream>
using namespace std;

class Score 
{
    private:
        int points;

    public:
        Score(int p) : points(p) {}

        operator int() const 
        {
            return points;
        }
};

int main() {
    Score score(85);
    int points = score; // Implicit conversion to int
    cout << "Score in points: " << points << endl;
    return 0;
}
