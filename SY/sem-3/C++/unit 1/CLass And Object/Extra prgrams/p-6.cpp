#include<iostream>
using namespace std;

class Flight
{
   public:int flightn,seat_available;
   public:string destination,dep_time;
   
   void get()
   {
   	 cout << "Enter Flight Number: ";
   	 cin >> flightn;
   	 
   	 cout << "Enter Destination: ";
   	 cin >> destination;
   	
   	 cout << "Enter Departure Time: ";
   	 cin >> dep_time;
   	 
   	 cout << "Enter Seats Available: ";
   	 cin >> seat_available;
   }
   
   void display()
   {
   	cout << "Flight Number is: " << flightn << "\n";
   	cout << "Destination is: " << destination << "\n";
   	cout << "Departure Time is: " << dep_time << "\n";
   	cout << "Seats Available is: " << seat_available << "\n";
   }
};

int main()
{
	Flight k;
	k.get();
	k.display();
}
