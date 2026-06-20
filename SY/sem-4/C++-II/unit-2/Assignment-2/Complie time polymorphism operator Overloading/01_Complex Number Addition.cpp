#include<iostream>
using namespace std;

class Complex
{
	int value;			
	
	public:	
		Complex(int v)
		{
			value=v;
		}
		
		Complex operator+(Complex &obj)
		{
			return Complex(value-obj.value);
		}
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};

int main()
{
	int a,b;
	cout << "Enter Value of A: ";
	cin >> a;
	
	cout << "Enter Value of B: ";
	cin >> b;
	
	Complex d1(a);
	Complex d2(b);
	Complex d3=d1+d2;
	
	d1.display();
	d2.display();
	d3.display();
	
	return 0;
}
