#include<iostream>
using namespace std;

class Device
{
	public:
		int model;
		string brand;
		
		void input1()
		{
			cout << "Enter Brand: ";
			cin >> brand;
			cout << "Enter Model: ";
			cout << model;
		}
		void display1()
		{
			cout << "Brand is: " << brand << endl;
			cout << "Model is: " << model << endl;
		}
};

class Computer : virtual public Device
{
	public:
		int ram,processor;	
		void input2()
		{
			cout << "Enter Ram: ";
			cin >> ram;
			cout << "Enter Processor: ";
			cout << processor;
		}
		void display2()
		{
			cout << "Ram is: " << ram << endl;
			cout << "Processor is: " << processor << endl;
		}			
};

class Phone : virtual public Device
{
	public:
		int Simslot,battery;	
		void input3()
		{
			cout << "Enter Sim Slot: ";
			cin >> Simslot;
			cout << "Enter Battery: ";
			cout << battery;
		}
		void display3()
		{
			cout << "Sim Slot is: " << Simslot << endl;
			cout << "Battery is: " << batery << endl;
		}
};

class Smartdevice : public Computer , Public Phone
{
	public:
			
};

int main()
{
	Smartdevice s;
	s.input1();
	s.input2();
	s.input3();
	s.display1();
	s.display2();
	s.display3();
	
	return 0;
}
