#include <iostream>
using namespace std;

class Time 
{
    private:
        int hours;
        int minutes;

    public:
        Time(int h,int m) : hours(h), minutes(m) {}

        Time operator-(const Time& t) 
        {
            int totalMinutes1=hours*60+minutes;
            int totalMinutes2=t.hours*60+t.minutes;
            int diffMinutes=totalMinutes1-totalMinutes2;

            int h=diffMinutes/60;
            int m=diffMinutes%60;

            return Time(h,m);
        }

        void display() 
        {
            cout << hours << " hours and " << minutes << " minutes" << endl;
        }
};

int main() 
{
    Time t1(5,30);
    Time t2(2,45);
    Time t3=t1-t2;
    
    cout << "Difference: ";
    t3.display();

    return 0;
}