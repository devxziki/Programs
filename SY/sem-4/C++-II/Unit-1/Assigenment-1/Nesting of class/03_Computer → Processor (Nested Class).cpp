#include<iostream>
using namespace std;

class Computer
{
    public:
        class Processor
        {
            public:
                void output()
                {
                    cout << "Speed is : 3.2 GHz" << endl;
                    cout << "Cores is : 2" << endl;
                }
        };

        void display()
        {
            Processor p;
            p.output();
        }
};

int main()
{
    Computer c;
    c.display();

    cin.get();
    cin.get();
    
    return 0;
}