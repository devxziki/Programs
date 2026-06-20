#include<iostream>
using namespace std;

class Hotel
{
  public:int roomn,dbooked,rate;
  public:string type,cname;
  
  void get()
  {
  	cout << "Enter Room Number: ";
  	cin >> roomn;
  	
  	cout << "Enter Room Type: ";
  	cin >> type;
  	
  	cout << "Enter Customer Name: ";
  	cin >> cname;
  	
  	cout << "Enter Daysed booked: ";
  	cin >> dbooked;
  	
  	cout << "Enter Rate of Room: ";
  	cin >> rate;
  }	
  
  void display()
  {
  	cout << "Room Number is: " << roomn << "\n";
  	cout << "Room Type is: " << type << "\n";
  	cout << "Customer name is: " << cname << "\n";
  	cout << "Number of booed days are: " << dbooked << "\n";
  	cout << "Rate of room is: " << rate << "\n";
  }
};

int main()
{
	Hotel k;
	k.get();
	k.display();
}
