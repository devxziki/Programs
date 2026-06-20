#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,total,per;
	cout<<"enter s1=";
	cin>>a;
	cout<<"enter s2=";
	cin>>b;
	cout<<"enter s3=";
	cin>>c;
	cout<<"enter s4=";
	cin>>d;
	cout<<"enter s5=";
	cin>>e;
	cout<<"enter s6=";
	cin>>f;
	cout<<"enter s7=";
	cin>>g;
	total=a+b+c;
	per=total/3;
	cout<<"total="<<total<<endl;
	cout<<"per="<<per<<endl;
	if(per>=80)
	{
		cout<<"A"<<endl;
	}
	else if(per>=70&&per<=80)
	{
		cout<<"B"<<endl;
	}
	else if(per>=60&&per<=70)
	{
		cout<<"C"<<endl;
	}
	else if(per>=50&&per<=60)
	{
		cout<<"D"<<endl;
	}
	else
	{
		cout<<"FAIL"<<endl;
	}
	return 0;
}
