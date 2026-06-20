#include <iostream>
using namespace std;

class Book 
{
	private:
	    int pages;
	
	public:
	    // Default constructor
	    Book() 
		{
	        pages=0;
	    }
	
	    // Function to display number of pages
	    void displayPages() 
		{
	        cout << "Number of pages: " << pages << endl;
	    }
};

int main() 
{
    Book myBook;           // Calls default constructor
    myBook.displayPages(); // Output: Number of pages: 0
    return 0;
}
