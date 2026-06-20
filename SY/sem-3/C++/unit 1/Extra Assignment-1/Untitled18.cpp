#include<iostream>
using namespace std;
int main()
{
	int n,i,mul;
	cout << "Enter any number = ";
	cin >> n;
	for (i=1;i<=10;i++)
	{
		mul=i*n;
		cout << mul << "\n";
	}
	return 0;
}
