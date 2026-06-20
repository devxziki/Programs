#include <iostream>
using namespace std;

class addition; // Forward declaration
class abc 
{
	public:
	 void display(addition a); // Declaration of member function
};

class addition 
{
	private:
	 int n1,n2;
	 void input() 
	 {
		 cout << "Enter numbers: ";
		 cin >> n1 >> n2;
	 }
	 friend void abc::display(addition a);
};
void abc::display(addition a) 
{
	 a.input();
	 cout << "Addition of two numbers is: " << a.n1+a.n2 <<endl;
}
int main() 
{
	 addition obj;
	 abc obj2;
	 obj2.display(obj); // Calls display which accesses addition's private members
	 return 0;
}

