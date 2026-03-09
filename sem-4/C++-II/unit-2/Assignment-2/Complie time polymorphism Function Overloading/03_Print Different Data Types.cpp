#include<iostream>
using namespace std;

class Printer
{
	public:
		void print(int a)
		{
			cout << "A: " << a <<  endl;		
		}
		
		void print(string b)
		{
			cout << "B: " << b << endl;
		}
		
		void print(double c)
		{
			cout << "C: " << c <<  endl;	
		}	
};

int main()
{
	Printer p;
	p.print(10);
	p.print("joyeb");
	p.print(10.5);
	
	return 0;
}
