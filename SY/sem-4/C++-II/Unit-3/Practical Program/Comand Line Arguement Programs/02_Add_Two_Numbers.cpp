#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc, char* argv[]){

	// Check if two arguments are passed
	if(argc < 3){
		cout << "Error: Please Pass Two Integers as Arguments" << endl;
		cout << "Usage: ./c2 <num1> <num2>" << endl;
		return 1;
	}

	// Convert arguments into numbers using atoi()
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	// Display their sum
	cout << "First Number  : " << num1 << endl;
	cout << "Second Number : " << num2 << endl;
	cout << "Sum           : " << num1 + num2 << endl;

	return 0;
}
