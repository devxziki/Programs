#include<iostream>
#include<typeinfo>
using namespace std;

class Type_Change
{
	public:
		int n1,n2;
		float N;
		
		void get()
		{
			cout << "Enter in Int N1:" ;
			cin >> n1;
			
			cout << "Enter IN Int N2: ";
			cin >> n2;
		}
		
		void display()
		{
			cout << "\nCOnverted int into Float Done By The Compiler" << endl;
			N=n1+n2;
			cout << "Sum In Float Is: " << typeid(N).name() << endl;
		}
};

int main()
{
	Type_Change k;
	k.get();
	k.display();
}
