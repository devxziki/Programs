#include <iostream>
using namespace std;

class Date 
{
    private:
        int day;
        int month;
        int year;

    public:
        Date(int d, int m, int y) : day(d), month(m), year(y) {}

        bool operator<(Date &other)  
        {
            if (year!=other.year) 
            {
                return year<other.year;
            }
            else if (month!=other.month) 
            {
                return month<other.month;
            }
            else if(day!=other.day) 
            {   
                return day<other.day;
            }
            return false;
        }

        void display()  
        {
            cout << day << "/" << month << "/" << year << endl;
        }
};

int main() 
{
    Date date1(15,8,2021);
    Date date2(10,5,2022);

    if (date1<date2) 
    {
        cout << "Date1 is earlier than Date2" << endl;
    } 
    else 
    {
        cout << "Date1 is not earlier than Date2" << endl;
    }

    return 0;
}