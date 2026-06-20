#include <iostream>
using namespace std;

class Add 
{
	private:
	    int value;
	
	public:
	    Add(int v) 
		{
	        value=v;
	    }
	
	    // Friend function for prefix increment
	    friend Add& operator++(Add &s);
	
	    void display() 
		{
	        cout << "Sum: " << value << endl;
	    }
};

// Friend function definition (prefix increment)
Add& operator++(Add &s)
{
    s.value=s.value+1; // directly access private data
    return s;              // return updated object
}

int main() 
{
    Add s1(10);
    Add s2=++s1;   // s1 incremented, s2 = s1

    s1.display();    // prints incremented s1
    s2.display();    // same value as s1 now

    return 0;
}
