#include<iostream>
using namespace std;
int main()
{
	int no,rev=0,tmp;
	cout<<"num=";
	cin>>no;
	while(no>0)
	{
		tmp=no%10;
		rev=rev*10+tmp;
		no=no/10;
	}
	cout<<"reverse="<<rev;
	return 0;
}
