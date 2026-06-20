#include<iostream>
using namespace std;

class Animal
{
	public:
		string specise;
		void ainput()
		{
			cout << "Enter Specise : ";
			cin >> specise;
		}
		void aoutput()
		{
			cout << "Specise is : " << specise << endl;
		}
};

class Mammal : public Animal
{
	public:
		string habitat;
		void minput()
		{
			cout << "Enter Habitat Of Animal : ";
			cin >> habitat;
		}
		void moutput()
		{
			cout << "Habitat is : " << habitat << endl;
		}
};

class Dog : public Mammal
{
	public:
		void Breed()
		{
			cout << "Breed...." << endl;
		}
		void bark()
		{
			cout << "Bark....." << endl;
		}
};

int main()
{
	Dog d;
	d.ainput();
	d.minput();
	d.aoutput();
	d.moutput();
	d.Breed();
	d.bark();
	return 0;
}
