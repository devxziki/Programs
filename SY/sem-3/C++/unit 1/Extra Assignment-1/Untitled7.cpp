#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout << "enter n1=";
	cin >>n1;
	cout << "enter n2=";
	cin >>n2;
	
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	cout <<n1;
	cout <<n2;
	return 0;
	
}

