#include<iostream>
using namespace std;

class Car
{
    public:
        class Engine
        {
            public:
                void output()
                {
                    cout << "Car Horsepower is: 250000" << endl;
                    cout << "Car Type is: Petrol" << endl;
                }
        };

        void display()
        {
            Engine e;
            e.output();
        }
};

int main()
{
    Car c;
    c.display();

    cin.get();
    cin.get();
    
    return 0;
}