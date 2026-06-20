#include<iostream>
using namespace std;

class Bill
{
	public:float unitc,rate,totalb;
	public:string cname;
	 void get()
	 {
	 	cout << "Enter Cunsumer Name: ";
	 	cin >> cname;
	 	
	 	cout << "Enter Units Consumed: ";
	 	cin >> unitc;
	 	
	 	cout << "Enter Rate of bill: ";
	 	cin >> rate;
	 }
	 
	 void display()
	 {
	 	cout << "Cunsumer Name is: " << cname << "\n";
	 	cout << "Units consumed is: " << unitc << "\n";
	 	cout << "Rate Of Bill is: " << rate << "\n";
	 	totalb=unitc*rate;
	 	cout << "Total bill is: " << totalb << "\n";
	 }
};

int main()
{
	Bill k;
	k.get();
	k.display();
}
