#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void displayarea(){
            cout << "Call From Shape" << endl;
        }
};

class Rectangle: public Shape{
    public:
        void displayarea(){
            cout << "Call From Rectangle" << endl;
        }
};

int main(){
    Shape *s;
    Rectangle r;
    s=&r;
    s->displayarea();  
    
    return 0;
}
