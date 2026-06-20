#include<iostream>
#include<string>
using namespace std;
int main(){
 string str; int spaces=0;
 getline(cin,str);
 for(int i=0;i<str.length();i++)
  if(str[i]==' ') spaces++;
 cout<<"Spaces: "<<spaces;
 return 0;
}