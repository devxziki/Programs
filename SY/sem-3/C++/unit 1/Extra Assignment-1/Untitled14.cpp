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
		rev=tmp+rev*10;
		no=no/10;
	}
	if(num==rev)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
	return 0;
}
