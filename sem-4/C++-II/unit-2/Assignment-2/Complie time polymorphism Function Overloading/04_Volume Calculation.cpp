#include<iostream>
using namespace std;

class Calculation
{
	public:
		void volume(int a)
		{
			cout << "Cube: " << a*a*a << endl;
		}
		
		void Volume(double r)
		{
			cout << "Sphere: " << 4/3*3.14*r*r*r << endl;
		}
		
		void volume(double r, double h)
		{
			cout << "Cylinder: " << 3.14*r*r*r*h << endl;                                                
		}
};

int main ()
{
	Calculation c;
	c.volume(10);
	c.Volume(10);
	c.volume(20,10);
	
	return 0;
}
