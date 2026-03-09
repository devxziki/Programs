#include<iostream>
using namespace std;

class Account{
    public:
        virtual void displaybalance(){
            cout << "Call From Account" << endl;
        }
};

class Sav_acc: public Account{
    public:
        void displaybalance(){
            cout << "Call From Saving Account" << endl;
        }
};

int main(){
    Account *a;
    Sav_acc sa;
    a=&ac;
    va->showtype();  
    
    return 0;
}
