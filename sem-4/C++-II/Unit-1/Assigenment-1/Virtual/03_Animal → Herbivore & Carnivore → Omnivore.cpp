#include<iostream>
using namespace std;

class Animal
{
	public:
		string spicies;
		
		void input1()
		{
			cout << "Enter Spices: ";
			cin >> spicies;
		}
		void display1()
		{
			cout << "Spices is: " << spicies << endl;
		}
};

class Herbivoure : virtual public Animal
{
	public:
		void eatplant()
		{
			cout << "Eat PLant"	<< endl;
		}	
};

class Carnivoure : virtual public Animal
{
	public:
		void eatmeet()
		{
			cout << "Eat Meet" << endl;
		}
};

class Omnivore : public Herbivoure , public Carnivoure
{
	public:
			
};

int main()
{
	Omnivore o;
	o.input1();
	o.display1();
	o.eatplant();
	o.eatmeet();
	
	return 0;
}
