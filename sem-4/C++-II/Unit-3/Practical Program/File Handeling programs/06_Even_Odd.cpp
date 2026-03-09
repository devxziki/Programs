#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int i;
	ofstream outfile("numbers.txt");
	if(!outfile){
	 cout << "Error in Creating The File" << endl;
	 return 1; 
	}
	for(i=1; i<=50; i++){
		outfile << i << endl;
	}
	outfile.close();
	cout << "SucessFully Wrote 1 to 50 Numbers in numbers.txt" << endl;

	ifstream infile("numbers.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl;
		return 1; 
	}
	ofstream evenfile("even.txt");
	if(!evenfile){ 
		cout << "Error in Creating even.txt" << endl; 
		return 1; 
	}
	ofstream oddfile("odd.txt");
	if(!oddfile){ 
		cout << "Error in Creating odd.txt" << endl; 
		return 1; 
	}
	int num, ec=0, oc=0;
	while(infile >> num){
		if(num%2==0){ 
			evenfile << num << endl; 
			ec++; 
		}
		else{
		 oddfile << num << endl; 
		 oc++; 
		}
	}
	infile.close(); evenfile.close(); oddfile.close();
	cout << "SucessFully Separated: " << ec << " Even Numbers in even.txt" << endl;
	cout << "SucessFully Separated: " << oc << " Odd Numbers in odd.txt" << endl;
	return 0;
}
