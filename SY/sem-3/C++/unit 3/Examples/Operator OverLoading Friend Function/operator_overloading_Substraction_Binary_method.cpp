#include <iostream>
using namespace std;

class Sub
{
	private:
	    int value;
	
	public:
	    // Constructor
	    Sub(int v=0)
	    {
	        value=v;
	    }
	
	    // Declare friend function
	    friend Sub operator-(const Sub &s1,const Sub &s2);
	
	    void display()
	    {
	        cout << "Value: " << value << endl;
	    }
};

// Define friend function outside the class
Sub operator-(const Sub &s1,const Sub &s2)
{
    return Sub(s1.value-s2.value);
}

int main()
{
    Sub s1(40);
    Sub s2(20);
    Sub s3=s1-s2;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
