#include <iostream>
using namespace std;

class Score 
{
    private:
        int points;

    public:
        Score(int p) : points(p) {}

        void display() 
        {
            cout << "Score: " << points << endl;
        }
};

int main() 
{
    Score myScore(100);
    myScore.display();
    return 0;
}