#include <iostream>
using namespace std;

class Sub
{
	private:
	    int value;
	
	public:
	    Sub(int v) // constructor
	    {
	        value=v;
	    }
	
	    // Declare friend function
	    friend Sub operator--(Sub &s);
	
	    void display()
	    {
	        cout << "Sum: " << value << endl;
	    }
};

// Friend function definition (prefix --)
Sub operator--(Sub &s)
{
    // modify object directly or return new one
    s.value=s.value-1; // change original
    return Sub(s.value);   // return new object
}

int main()
{
    Sub s1(10);
    Sub s2=--s1; // calls friend function

    s1.display();
    s2.display();

    return 0;
}

