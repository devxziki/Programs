#include<iostream>
using namespace std;

class book
{
	public:int bookid,price;
	public:string title,author;
	
	void getdata()
	{
		cout << "Entre Book id number: ";
		cin >> bookid;
		
		cout << "Entre Book title: ";
		cin >> title;
		
		cout << "Entre Name of Book Author: ";
		cin >> author;
		
		cout << "Entre Book Price: ";
		cin >> price;
    }
		
		void display()
		{
			cout << "Book id is: " << bookid << "\n";
			cout << "Book name is: " << title << "\n";
			cout << "name of author: " << author << "\n";
			cout << "Price of book: " << price;
		}
		
	
};

int main()
{
	book k;
	k.getdata();
	k.display();
}
