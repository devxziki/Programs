#include <iostream>
#include <iomanip>  // for std::setw and std::setfill
using namespace std;

class Time 
{
	private:
	    int hour;
	    int minute;
	    int second;
	
	public:
	    // Default constructor (00:00:00)
	    Time() {
	        hour=0;
	        minute=0;
	        second=0;
	    }
	
	    // Constructor with hour only
	    Time(int h) 
		{
	        hour=h;
	        minute=0;
	        second=0;
	    }
	
	    // Constructor with hour and minutes
	    Time(int h, int m) 
		{
	        hour=h;
	        minute=m;
	        second=0;
	    }
	
	    // Constructor with hour, minutes, and seconds
	    Time(int h,int m,int s) 
		{
	        hour=h;
	        minute=m;
	        second=s;
	    }
	
	    // Method to display time in HH:MM:SS format
	    void displayTime() 
		{
	        cout << setw(2) << setfill('0') << hour << ":"
	             << setw(2) << setfill('0') << minute << ":"
	             << setw(2) << setfill('0') << second << endl;
	    }
};

int main() 
{
    Time t1;               // 00:00:00
    Time t2(9);        	  // 09:00:00
    Time t3(14,30);      // 14:30:00
    Time t4(18,45,50);	// 18:45:50

    cout << "t1: "; t1.displayTime();
    cout << "t2: "; t2.displayTime();
    cout << "t3: "; t3.displayTime();
    cout << "t4: "; t4.displayTime();

    return 0;
}
