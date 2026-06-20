#include <iostream>
using namespace std;

class addition 
{
	int n1,n2;
	public:
	void input()
	{
		cout << "Enter number 1 : ";
		cin>>n1;
		cout << "Enter number 2 : ";
		cin >> n2;
	}
	friend void display(addition a);
};
void display(addition a)
{
	cout<<"Addition of two numbers is :"<<a.n1+a.n2;
}

int main()
{
	addition a1;
	a1.input();
	display(a1);
	return 0;
}
