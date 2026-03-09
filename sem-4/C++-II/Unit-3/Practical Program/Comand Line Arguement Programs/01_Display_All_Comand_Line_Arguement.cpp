#include<iostream>
using namespace std;
int main(int argc, char* argv[]){

	// Display total number of arguments using argc
	cout << "Total Number of Arguments (argc): " << argc << endl;
	cout << endl;

	// Print each argument stored in argv[]
	cout << "Arguments Stored in argv[]:" << endl;
	cout << "----------------------------" << endl;
	for(int i=0; i<argc; i++){
		cout << "argv[" << i << "] = " << argv[i] << endl;
	}
	cout << "----------------------------" << endl;

	return 0;
}
