#include<iostream>
using namespace std;

class Artist
{
    public:
        void a()
        {
            cout << "Creative Score...." << endl;
        }
};

class Enginer
{
    public:
        void e()
        {
            cout << "Technical Skill...." << endl;
        }
};

class Designer : public Artist , public Enginer
{
    public:
        void d()
        {
            cout << "Call From Designer....." << endl;
        }
};

int main()
{
    Designer d;
    d.a();
    d.e();
    d.d();

    return 0;
}