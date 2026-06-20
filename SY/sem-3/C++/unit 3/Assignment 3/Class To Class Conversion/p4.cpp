#include <iostream>
using namespace std;

class Seconds 
{
    private:
        int seconds;

    public:
        Seconds(int s) : seconds(s) {}

        int toMinutes() 
        {
            return seconds/60;
        }

        int getSeconds() 
        {
            return seconds;
        }
};

class Minutes 
{
    private:
        int minutes;

    public:
        Minutes(int m) : minutes(m) {}

        int toSeconds() 
        {
            return minutes*60;
        }

        int getMinutes() 
        {
            return minutes;
        }
};

int main() 
{
    Seconds sec(120);
    cout << sec.getSeconds() << " seconds is " << sec.toMinutes() << " minutes." << endl;

    Minutes min(2);
    cout << min.getMinutes() << " minutes is " << min.toSeconds() << " seconds." << endl;

    return 0;
}