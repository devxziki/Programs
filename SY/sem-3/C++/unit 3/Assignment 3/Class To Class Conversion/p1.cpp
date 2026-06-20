#include <iostream>
using namespace std;

class Celsius 
{
    private:
        float temperature;

    public:
        Celsius(float temp) : temperature(temp) {}

        float toFahrenheit() 
        {
            return (temperature*9.0/5.0)+32;
        }
};

class Fahrenheit 
{
    private:
        float temperature;

    public:
        Fahrenheit(float temp) : temperature(temp) {}

        float toCelsius() 
        {
            return (temperature-32)*5.0/9.0;
        }
};

int main() 
{
    Celsius c(25);
    cout << "25 Celsius is " << c.toFahrenheit() << " Fahrenheit." << endl;

    Fahrenheit f(77);
    cout << "77 Fahrenheit is " << f.toCelsius() << " Celsius." << endl;

    return 0;
}
