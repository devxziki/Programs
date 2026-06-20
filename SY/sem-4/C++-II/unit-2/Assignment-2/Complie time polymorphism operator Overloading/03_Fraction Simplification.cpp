#include<iostream>
using namespace std;

class Fraction
{
	int value;			
	
	public:	
		Fraction(int v)
		{
			value=v;
		}
		
		Fraction operator *(Fraction &obj)
		{
			return Fraction(value*obj.value);
		}
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};

int main()
{
	int a,b;
	cout << "Enter Value of Fraction A: ";
	cin >> a;
	
	cout << "Enter Value of Fraction B: ";
	cin >> b;
	
	Fraction d1(a);
	Fraction d2(b);
	Fraction d3=d1*d2;
	
	d1.display();
	d2.display();
	d3.display();
	
	return 0;
}
