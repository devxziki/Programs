#include<iostream>
using namespace std;

class FriendFunctionDemo
{
	int n1,n2;
	
	void get()
	{
		cout << "Enter N1: ";
		cin >> n1;
		cout << "Enter N2: ";
		cin >> n2;
	}
	
	friend int add(FriendFunctionDemo ffd);
};

int add(FriendFunctionDemo ffd)
{
	ffd.get();
	cout << "sum: " << ffd.n1+ffd.n2;
	
}

int main()
{
	FriendFunctionDemo ffd1;
	add(ffd1);
	return 0;
}
