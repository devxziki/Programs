#include <iostream>
using namespace std;

class Add
{
	private:
	    int value;
	
	public:
	    Add(int v=0)
	    {
	        value=v;
	    }
	
	    // Friend function declaration
	    friend Add add(const Add& s1, const Add& s2);
	
	    void display()
	    {
	        cout << "Value: " << value << endl;
	    }
};

// Friend function definition
Add add(const Add& s1, const Add& s2)
{
    return Add(s1.value+s2.value);
}

int main()
{
    Add s1(40);
    Add s2(20);

    // Call friend function instead of operator+
    Add s3 = add(s1,s2);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
