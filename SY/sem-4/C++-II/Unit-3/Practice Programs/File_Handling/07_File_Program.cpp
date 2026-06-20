#include<iostream>
#include<fstream>
using namespace std;
int main(){
 ofstream fout("data.txt");
 fout<<"Sample Text"<<endl;
 fout.close();

 ifstream fin("data.txt");
 char ch;
 while(fin.get(ch))
  cout<<ch;
 fin.close();
 return 0;
}