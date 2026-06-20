// calculate the charges of parking acording to the time using class and object method
#include<iostream>
using namespace std;

class parking
{
	public:int v_number,entry_time,exit_time,charges=10;
	
	void getdata()
	{
		cout << "Enter vehical number: ";
		cin >> v_number;
		cout << "Enter Entry Time of vechical: ";
		cin >> entry_time;
		cout << "Enter Exit Time of vechical: ";
		cin >> exit_time;	
	}
	
	void display()
	{
		cout << "vechical Number: " << v_number << "\n";
		cout << "Entry Time: "<< entry_time << "\n";
		cout << "Exit time: "<< exit_time << "\n";
		cout << "Charges: " << charges*(entry_time-exit_time);
	}
};

main()
{
	parking k;
	k.getdata();
	k.display();
}
