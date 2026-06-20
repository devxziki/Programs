#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc, char* argv[]){

	// Check if three arguments are passed
	if(argc < 4){
		cout << "Error: Please Pass Three Numbers as Arguments" << endl;
		cout << "Usage: ./c3 <num1> <num2> <num3>" << endl;
		return 1;
	}

	// Accept three numbers from command line
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);

	cout << "First Number  : " << a << endl;
	cout << "Second Number : " << b << endl;
	cout << "Third Number  : " << c << endl;

	// Determine largest number
	int largest;
	if(a >= b && a >= c){
		largest = a;
	}
	else if(b >= a && b >= c){
		largest = b;
	}
	else{
		largest = c;
	}                     

	cout << "Largest Number: " << largest << endl;

	return 0;
}
