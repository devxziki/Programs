#include<iostream>
using namespace std;
int main()
{
	int n1,n2,temp;
	cout <<"Enter Any n1= ";
	cin >>n1;
	cout <<"Enter Any n2= ";
	cin >>n2;
	
	temp=n1;
	n1=n2;
	n2=temp;
	cout << n1;
	cout << n2;
}
