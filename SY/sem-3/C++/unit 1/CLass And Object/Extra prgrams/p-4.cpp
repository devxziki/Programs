#include<iostream>
using namespace std;

class Product
{
   public:int productid,price;
   public:string name,quantity;
   
   void get()
   {
   	 cout << "Enter Product id: ";
   	 cin >> productid;
   	
   	 cout << "Enter Product Name: ";
   	 cin >> name;
   	 
   	 cout << "Enter Quantity: ";
   	 cin >> quantity;
   	 
   	 cout << "Enter Product Price: ";
   	 cin >> price;
   }
   
   void display()
   {
   	cout << "Product id is: " << productid << "\n";
   	cout << "Product Name is: " << name << "\n";
   	cout << "Product Quantity is: " << quantity << "\n";
   	cout << "Product  Price is: " << price << "\n";
   }
};

int main()
{
	Product k;
	k.get();
	k.display();
}
