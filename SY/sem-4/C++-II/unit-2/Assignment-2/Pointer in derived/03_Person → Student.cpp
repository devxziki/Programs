#include<iostream>
using namespace std;

class Person{
    public:
        virtual void displayarea(){
            cout << "Call From Person" << endl;
        }
};

class Student: public Person{
    public:
        void displayarea(){
            cout << "Call From Student" << endl;
        }
};

int main(){
    Person *p;
    Person s;
    p=&s;
    s->displayarea();  
    
    return 0;
}
