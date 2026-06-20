#include<iostream>
using namespace std;

class Counter
{
	int value;			
	
	public:	
		Counter(int v)
		{
			value=v;
		}
		
		Counter operator ++()
		{
			return Counter(value+1);
		}
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};

int main()
{
	int a;
	cout << "Enter Value of  A: ";
	cin >> a;
	
	Counter d1(a);
	Counter d2=++d1;
	
	d1.display();
	d2.display();
	
	return 0;
}
