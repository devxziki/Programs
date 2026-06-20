#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout <<"Enter Any n1= ";
	cin >>n1;
	cout <<"Enter Any n2= ";
	cin >>n2;
	cout <<"Enter Any n3= ";
	cin >>n3;
	if (n1>n2 && n1>n3)
	{
		cout << "n1 is maximum";
	}
	else if (n2>n1 && n2>n3)
	{
		cout << "n2 is maximum";
	}
	else
	{
		cout << "n3 is maximum";
	}
}
