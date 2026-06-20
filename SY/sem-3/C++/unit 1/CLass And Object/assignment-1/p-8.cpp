// create a discount calculator using class and object method 
#include<iostream>
using namespace std;

class product
{
	public:string name;
	public:float price;
	void getdata()
	{
		cout << "Enter Product Name: ";
		cin >> name;
		cout << "Enter Price: ";
		cin >> price;
	}
	void display()
	{
		cout << "Name: " << name << "\n";
		cout << "Price: " << price << "\n";
		if (price>1000)
		{
			cout << "Discounted price:" << price*10/100 << "\n";
			cout << "Total price: " << price-(price*10/100);
		}
	}
};

int main()
{
	product k;
	k.getdata();
	k.display();
}
