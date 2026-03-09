#include<iostream>
using namespace std;

class Math
{
	public:
		void add(int a, int b)
		{
			cout << "A: " <<  a << endl;	
			cout << "B: " <<  b << endl;
		}
		
		void add(double c, double d)
		{
			cout << "C: " << c << endl;	
			cout << "D: " <<  d << endl;
		}	
		
		void add(int e, double f)
		{
			cout << "E: " <<  e << endl;	
			cout << "F: " << f << endl;
		}	
};

int main()
{
	Math m;
	m.add(10,20);
	m.add(1300.5,120.06);
	m.add(10,20.05);
	
	return 0;
}
