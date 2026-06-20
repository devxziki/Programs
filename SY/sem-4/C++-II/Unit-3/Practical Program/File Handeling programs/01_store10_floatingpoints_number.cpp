#include<iostream>
#include<fstream>
using namespace std;
int main(){
	float nums[10] = {3.14f,7.89f,12.5f,0.75f,22.3f,9.01f,15.6f,4.44f,18.9f,6.72f};
	float val, sum=0.0f;
	int count=0;

	ofstream outfile("float.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1; 
	}
	for(int i=0; i<10; i++){
		outfile << nums[i] << endl;
	}
	outfile.close();
	cout << "SucessFully Wrote 10 Float Numbers in float.txt" << endl;

	ifstream infile("float.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}
	cout << "Floating-Point Numbers From float.txt:" << endl;
	while(infile >> val){
		cout << val << " ";
		sum += val;
		count++;
	}
	cout << endl << "Average: " << sum/count << endl;
	infile.close();
	return 0;
}
