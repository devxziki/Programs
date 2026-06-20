#include<iostream>
using namespace std;

class Animal
{
    public:
        Animal()
        {
            cout << "Animal Name is : Unknown " << endl;
        }

        Animal(string name)
        {
            cout << "Animal Name is : " << name << endl;
        }
};

class Dog : public Animal 
{
    public:
        Dog()
        {
            cout << "Dog Bread Is : Unknown " << endl;
        }

        Dog(string name, string breed) : Animal(name)
        {
            cout << "Dog Bread Is : " << breed << endl;
        }
};

int main()
{
    int i;
    string name;
    string breed;

    cout << "To call Default Construtor Enter 1"<< endl;
    cout << "To call Parameterized Construtor Enter Any Number"<< endl;
    cout << "Enter Your Choice : ";
    cin >> i;

    if(i==1)
    {
        Dog d1;
    }

    else
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Breed: ";
        cin >> breed;
        Dog d1(name, breed);
    }

    cin.get();
    cin.get();

    return 0;
}