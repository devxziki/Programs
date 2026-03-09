#include<iostream>
using namespace std;

class Vehical
{
	public:
		string brand,model;
		void vinput()
		{
			cout << "Enter Brand : ";
			cin >> brand;
			cout << "Enter Model : ";
			cin >> model;
		}
		
		void voutput()
		{
			cout << "Brand is : " << brand << endl;
			cout << "Model is : " << model << endl;
		}
};

class Car : public Vehical
{
	public:
		int s;
		float m;
		void cinput()
		{
			cout << "Enter Seat no : ";
			cin >> s;
			cout << "Enter Mileage : ";
			cin >> m;
		}
		void coutput()
		{
			cout << "Seat Number is : " << s << endl;
			cout << "Mileage is : " << m << endl;
		}
};

int main()
{
	Car c;
	c.vinput();
	c.cinput();
	c.voutput();
	c.coutput();
	return 0;
}
