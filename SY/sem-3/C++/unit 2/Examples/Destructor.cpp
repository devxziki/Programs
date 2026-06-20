#include<iostream>
using namespace std;

class joyeb
{
	public:
		joyeb()
		{
			cout << "Constructor:Object Created......." << endl;
		}
		~joyeb()
		{
			cout << "Destructor:Destroyed Object......" << endl;
		}
};

int main()
{
	joyeb j;
	{
		joyeb j1;
	}
	return 0;
}
