#include <iostream>
using namespace std;

class Age 
{
    private:
        unsigned int age;

    public:
        Age(unsigned int a) : age(a) {}

        void displayAge() 
        {
            cout << "Age: " << age << " years" << endl;
        }
};

int main() 
{
    Age myAge(25);
    myAge.displayAge();
    return 0;
}
