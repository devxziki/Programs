#include<iostream>
using namespace std;
int main()
{
	int no,num,rev=0,tmp;

	cout<<"num=";
	cin>>no;
	
	num=no;
	
	while(no>0)
	{
		tmp=no%10;
		rev=tmp*tmp*tmp+rev;
		no=no/10;
	}
	if(num==rev)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not armstrong";
	}
	return 0;
}
