#include<iostream>
using namespace std;

class Joiner
{
	public:
		void join(string a, string b)
		{
			cout << "A: " <<  a << endl;	
			cout << "B: " <<  b << endl;
		}
		
		void join(string c, int d)
		{
			cout << "C: " << c << endl;	
			cout << "D: " <<  d << endl;
		}	
		
		void join(string e, double f)
		{
			cout << "E: " <<  e << endl;	
			cout << "F: " << f << endl;
		}	
};

int main()
{
	Joiner m;
	m.join("j","k");
	m.join("j",120);
	m.join("j",20.05);
	
	return 0;
}
