#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void showname(){
            cout << "Call From Animal" << endl;
        }
};

class Dog: public Animal{
    public:
        void showname(){
            cout << "Call From Dog" << endl;
        }
};

int main(){
    Animal *a;
    Dog d;
    a = &d;
    a->showname();  // Will print: Call From Dog
    
    return 0;
}
