#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream f1("file1.txt");
	if(!f1){
	 cout << "Error in Creating The File" << endl; 
	 return 1; 
	}	 
	f1 << "Content From File One Line 1" << endl;
	f1 << "Content From File One Line 2" << endl;
	f1.close();

	ofstream f2("file2.txt");
	if(!f2){
	 cout << "Error in Creating The File" << endl; 
	 return 1; 
	}
	f2 << "Content From File Two Line 1" << endl;
	f2 << "Content From File Two Line 2" << endl;
	f2.close();

	cout << "SucessFully Wrote file1.txt and file2.txt" << endl;

	ofstream merge("merge.txt");
	if(!merge){
	 cout << "Error in Creating merge.txt" << endl; 
	 return 1; 
	}
	ifstream in1("file1.txt"), in2("file2.txt");
	if(!in1||!in2){
	 cout << "Error in Reading The File" << endl; 
	 return 1;
	}
	string line;
	while(getline(in1, line)){
		merge << line << endl;
	}
	while(getline(in2, line)){
		merge << line << endl;
	}
	in1.close(); 
	in2.close(); 
	merge.close();
	cout << "SucessFully Merged file1.txt and file2.txt into merge.txt" << endl;

	ifstream inMerge("merge.txt");
	if(!inMerge){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}
	cout << "Contents of merge.txt:" << endl;
	while(getline(inMerge, line)){
		cout << line << "\n";
	}
	inMerge.close();
	return 0;
}
