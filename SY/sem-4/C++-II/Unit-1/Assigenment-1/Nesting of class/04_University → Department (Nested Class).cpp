#include<iostream>
using namespace std;

class University
{
    public:
        class Department
        {
            public:
                void output()
                {
                    cout << "Department of Computer Science and Engineering" << endl;
                    cout << "Hod OF Computer Department" << endl;
                }      
        };

        void display()
        {
            Department d;
            d.output();
        }
};

int main()
{
    University u;
    u.display();

    cin.get();
    cin.get();
    
    return 0;
}