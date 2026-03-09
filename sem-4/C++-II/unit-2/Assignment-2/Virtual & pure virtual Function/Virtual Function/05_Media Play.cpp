#include<iostream>
using namespace std;

class Media{
	public:
		virtual void play(){
			cout << "Call From Media" << endl;
		}
};

class Audio : public Media{
	public:
		void play(){
			cout << "Call From Audio" << endl;
		}
};

class Video : public Media{
	public:
		void play(){
			cout << "Call From Video" << endl;
		}
};

int main(){
	Audio a;
	Video v;
	
	a.play();
	v.play();
	
	return 0;
}
