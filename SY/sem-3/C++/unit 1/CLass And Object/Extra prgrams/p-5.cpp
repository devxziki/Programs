#include<iostream>
using namespace std;

class Movie
{
   public:int price;
   public:string name,seat,movie_time;
   
   void get()
   {
   	 cout << "Enter Movie Name: ";
   	 cin >> name;
   	
   	 cout << "Enter Movie Time: ";
   	 cin >> movie_time;
   	 
   	 cout << "Enter Seat Number: ";
   	 cin >> seat;
   	 
   	 cout << "Enter Movie Price: ";
   	 cin >> price;
   }
   
   void display()
   {
   	cout << "Movie Name is: " << name << "\n";
   	cout << "Movie Time is: " << movie_time << "\n";
   	cout << "Seat Number is: " << seat << "\n";
   	cout << "Movie Price is: " << price << "\n";
   }
};

int main()
{
	Movie k;
	k.get();
	k.display();
}
