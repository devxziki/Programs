#include<iostream>
using namespace std;

class Sub
{
	private:
		int value;
		
	public:
		Sub(int v)
		{
			value=v;	
		}
		
		Sub operator--()
		{
			return Sub(value-1);	
		}		
		
		void display()
		{
			cout << "Sum:" << value << endl;
		}
};

int main()
{
	Sub s1(10);
	Sub s2=--s1;
	
	s1.display();
	s2.display();
	
	return 0;
}
