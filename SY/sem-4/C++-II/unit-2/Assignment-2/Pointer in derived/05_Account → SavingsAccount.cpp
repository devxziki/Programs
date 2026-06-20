#include<iostream>
using namespace std;

class Vehical{
    public:
        virtual void showtype(){
            cout << "Call From Vehical" << endl;
        }
};

class Car: public Vehical{
    public:
        void showtype(){
            cout << "Call From Car" << endl;
        }
};

int main(){
    Vehical *v;
    Car c;
    v=&c;
    v->showtype();  
    
    return 0;
}
