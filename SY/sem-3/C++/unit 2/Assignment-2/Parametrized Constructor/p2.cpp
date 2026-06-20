#include <iostream>
using namespace std;

class Book 
{
	private:
	    string title;
	    int pages;
	
	public:
	    // Parameterized constructor
	    Book(string t,int p) 
		{
	        title=t;
	        pages=p;
	    }
	
	    // Function to display book details
	    void display() 
		{
	        cout << "Book Title: " << title << endl;
	        cout << "Number of Pages: " << pages << endl;
	    }
};

int main() 
{
    // Creating an object of Book class
    Book myBook("The Alchemist", 208);

    // Displaying the book details
    myBook.display();

    return 0;
}
