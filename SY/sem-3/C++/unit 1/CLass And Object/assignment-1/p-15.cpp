// create a shoping cart using class and object method
#include<iostream>
using namespace std;

class shoping
{
  public:string item_name;
  public:float Quantity,Price_per_unit;
  
  void getdata()
  {
    cout << "Enter Item Name: ";
	cin >> item_name;
	
	cout << "Enter Quantity: ";
	cin >> Quantity;
	
	cout << "Enter Price Per Unit: ";
	cin >> Price_per_unit;	
  }	
  
  void display()
  {
  	cout << "Name of Item is: " << item_name << "\n";
  	cout << "Quantity is:" << Quantity << "\n";
	cout << "Price Per Unit is: " <<  Price_per_unit << "\n";
	cout << "TOtal Price: " << Quantity*Price_per_unit;
  }
};

int main()
{
  shoping j;
  j.getdata();
  j.display();	
}
