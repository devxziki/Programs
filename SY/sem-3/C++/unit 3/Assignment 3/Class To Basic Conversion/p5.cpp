#include <iostream>
using namespace std;

class Age 
{
    private:
        int age;

    public:
        Age(int a) : age(a) {}

        operator unsigned int()  
        {
            return static_cast<unsigned int>(age);
        }
};

int main() 
{
    Age myAge(25);
    unsigned int ageValue = myAge;
    cout << "The age as unsigned int is: " << ageValue << endl;
    return 0;
}
