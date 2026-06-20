#include<iostream>
using namespace std;
int main(){
 double num=123.456789;
 cout.width(15);
 cout.fill('*');
 cout.setf(ios::fixed);
 cout.precision(2);
 cout<<num<<endl;
 cout.unsetf(ios::fixed);
 return 0;
}