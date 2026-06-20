#include<iostream>
using namespace std;

class Car
{
   public:int carid,price;
   public:string brand,model;
   
   void get()
   {
   	 cout << "Enter Car id: ";
   	 cin >> carid;
   	
   	 cout << "Enter Car Brand: ";
   	 cin >> brand;
   	 
   	 cout << "Enter Car Model: ";
   	 cin >> model;
   	 
   	 cout << "Enter Car Price: ";
   	 cin >> price;
   }
   
   void display()
   {
   	cout << "Car id is: " << carid << "\n";
   	cout << "Car Brand is: " << brand << "\n";
   	cout << "Car Model is: " << model << "\n";
   	cout << "Car Price is: " << price << "\n";
   }
};

int main()
{
	Car k;
	k.get();
	k.display();
}
