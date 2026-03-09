#include<iostream>
#include<fstream>
#include<climits>
using namespace std;
int main(){
	int arr[20]={45,12,78,34,56,90,23,67,11,89,43,76,28,55,92,37,64,18,81,49};
	int num, largest=INT_MIN, smallest=INT_MAX;

	ofstream outfile("num.txt");
	if(!outfile){
	 cout << "Error in Creating The File" << endl; 
	 return 1; 
	 }
	for(int i=0; i<20; i++){
		outfile << arr[i] << endl;
	}
	outfile.close();
	cout << "SucessFully Wrote 20 Integers in num.txt" << endl;

	ifstream infile("num.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}
	while(infile >> num){
		if(num>largest){
			largest=num;
		}
		if(num<smallest){
			smallest=num;
		}
	}
	cout << "Largest Number in num.txt: " << largest << endl;
	cout << "Smallest Number in num.txt: " << smallest << endl;
	infile.close();
	return 0;
}
