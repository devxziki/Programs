#include<iostream>
using namespace std;
int main()
{
	int no,i,n=1,fact=1;
	cout<<"no=";
	cin>>no;
	for(i=no;i>=1;i--)
	{
	  fact=fact*i;
	}
	cout << fact << "\n";
}
