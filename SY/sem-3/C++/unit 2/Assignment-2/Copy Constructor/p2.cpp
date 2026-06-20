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
	
	    // Copy constructor
	    Book(const Book &b) 
		{
	        title=b.title;
	        pages=b.pages;
	    }
	
	    // Function to display book details
	    void display() 
		{
	        cout << "Title: " << title << endl;
	        cout << "Number of Pages: " << pages << endl;
	    }
};

int main() 
{
    // Creating a Book object
    Book book1("The Alchemist",197);
    cout << "Original Book:" << endl;
    book1.display();

    // Creating a copy using the copy constructor
    Book book2=book1;
    cout << "\nCopied Book:" << endl;
    book2.display();

    return 0;
}
